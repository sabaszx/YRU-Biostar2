::restart MariaDB service in order of corrupted schema.
net stop 'BioStar 2 MariaDB(x64)' /Q
net start 'BioStar 2 MariaDB(x64)'

::start other service because of it depended on launcher and web server services
net start 'BioStar 2 Launcher(x64)'
net start 'BioStar 2 Web Server(x64)'
