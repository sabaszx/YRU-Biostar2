#import modules
import pymysql
import pandas as pd
import datetime
import subprocess

now = datetime.datetime.now()
date_format = now.strftime('%Y') + '_' + now.strftime('%m') + '_' +  now.strftime('%d')
print(date_format)

#current table format is t_lgYYYYMM
current_format = 't_lg' + now.strftime('%Y') + now.strftime('%m')

connection = pymysql.connect(
    host='10.10.2.97', #host 
    user='root', #username
    password='P@ssw0rd', #password
    port=3312,
    db='biostar2_ac'
)

#make cursor
curr = connection.cursor()

#in order to separate table in each day, create table.
create_schema_string = 'CREATE TABLE t_lg' + date_format + 'SELECT * FROM t_lg202101' 

#execute command
curr.execute(create_schema_string)

#export current schema into csv file
sql_query = pd.read_sql_query('select * from biostar2_ac.t_lg2021_01_14as', connection)
df = pd.DataFrame(sql_query)
df.to_csv(r'exported.csv', index = False)

connection.close()
