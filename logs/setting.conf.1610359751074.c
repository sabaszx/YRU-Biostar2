{
    "BioStar": {
        "api_port": "9010",
        "webserver_thrift_port": "9510",
        "webserver_fastcgi_port": "9000",
        "https": {
            "use_ssl": "1",
            "port": "443",
            "ssl_addr": "10.10.2.97",
            "server.ssl.key-store-type": "JKS",
            "server.ssl.key-store": "C:\\Program Files\\BioStar 2(x64)\\nginx\\conf\\keystore.jks",
            "server.ssl.key-store-password": "1VWccA4HJhsTEfXYXVXQnQ==",
            "server.ssl.key-store-password.use_enc": "1",
            "server.ssl.key-alias": "biostar"
        },
        "http": {
            "port": "80",
            "root_path": "html"
        },
        "cloud": {
            "use_cloud": "0",
            "server_address": "api.biostar2.com",
            "http_port": "52000",
            "version": "v2"
        },
        "tna": {
            "use_tna": "true",
            "http_port": "3000",
            "https_port": "3002",
            "ngrok_port": "52001"
        },
        "service": {
            "use_remote_db": "true",
            "launcher": "BioStar 2 Launcher(x64)",
            "maria_db": "BioStar 2 MariaDB(x64)",
            "web": "BioStar 2 Web Server(x64)",
            "ta_web": "BioStar 2 TA Web Server(x64)",
            "video": "BioStar 2 Video Web Server(x64)"
        },
        "video": {
            "use_video": "false",
            "http_port": "3010",
            "https_port": "3012",
            "ngrok_port": "52002"
        },
        "mobile": {
            "mc_server_addr": "https:\/\/api.mc.suprema.io",
            "mc_port": "443"
        },
        "websocket_port": "9002",
        "log": {
            "log_retain_days": "30",
            "cron": "0 0 0 * * *",
            "path": "logs"
        },
        "eventlog": {
            "event_log_retain_days": "30",
            "active": "true"
        }
    }
}
