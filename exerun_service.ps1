### restart service through powershell script
## these script have issues, I will fix it soon :)
Restart-Service 'BioStar 2 MariaDB(x64)'  -Force #force service
#Restart-Service 'BioStar 2 Launcher(x64)' -Force #force service
Start-Service 'BioStar 2 Launcher(x64)' -Confirm
