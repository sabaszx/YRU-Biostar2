import pymysql
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
    password='P@ss0wrd', #password
    port=3312,
    db='biostar2_ac'
)

#make cursor
curr = connection.cursor()

#in order to separate table in each day, create table.
create_schema_string = 'CREATE TABLE t_lg' + date_format + 'AS SELECT * FROM t_lg202101' 

#execute command
curr.execute(create_schema_string)
connection.close()
