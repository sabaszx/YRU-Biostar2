{
    "BioStar": {
        "session_timeout": "3600",
        "restore_connection_timeout": "60",
        "keep_alive_timeout": "30",
        "restart_wait_time_in_seconds": "5",
        "device_req_timeout_in_seconds": "10",
        "device_get_conf_req_timeout_in_seconds": "20",
        "num_biostar_service_threads": "3",
        "num_device_service_threads": "5",
        "num_websocket_service_threads": "1",
        "num_fastcgi_service_threads": "5",
        "server_port": "51212",
        "server_matching": {
            "matching-concurrency-count": "3"
        },
        "database_con_string": "127.0.0.1,3312@biostar2_ac",
        "firmware_dir": "firmware",
        "resource_dir": "resource",
        "database_type": "10003",
        "user_sync_method": "1",
        "log_sync_method": "0",
        "check_duplicate_id_at_devices": "0",
        "automatic_server_upgrade": "0",
        "upgrade_when": "0",
        "fingerprint_format": "0",
        "licese_server_addr": "http:\/\/license.biostar2.com",
        "backup": {
            "use": "false",
            "cycle": "2",
            "day": "28",
            "weekday": "2",
            "time": "10800",
            "path": ".\\bk",
            "overwritable": "false"
        },
        "support_mobile_credential": "false",
        "language": "en",
        "database": {
            "server_type": "mariadb",
            "windows_auth": "false",
            "server_ip": "127.0.0.1",
            "server_port": "3312",
            "ac_db_name": "biostar2_ac",
            "ac_user_name": "biostar2_ac_user",
            "ac_password": "XElxcWs5fmA=",
            "ta_db_name": "biostar_tna",
            "ta_user_name": "biostartnauser",
            "ta_password": "XElxcWs5fmA=",
            "ve_db_name": "biostar_ve",
            "ve_user_name": "biostarveuser",
            "ve_password": "XElxcWs5fmA="
        },
        "server_addr": "",
        "delete_credential_after_aoc": "false",
        "secure_communication": {
            "mode": "0",
            "use_external_cert": "false",
            "enable_data_encryption": "false",
            "enable_db_data_encryption": "true",
            "ischanged_data_encryption": "false",
            "ischanged_db_data_encryption": "false"
        },
        "system_security": {
            "password_strength": "2",
            "use_password_update_cycle": "false",
            "password_update_cycle": "60",
            "use_allow_login_failed": "false",
            "allow_login_failed_count": "5",
            "allow_login_failed_minutes": "10",
            "use_allow_password_change": "false",
            "allow_password_change_count": "1",
            "use_allow_simultaneous_connection": "true"
        },
        "web_request_timeout": "60",
        "imglog_dir": ".\\imagelog\\",
        "enckey_dir": "C:\\Program Files\\BioStar 2(x64)\\util",
        "user_by_device_sync_method": "0"
    }
}