
set(pri_req 
    esp_netif
    spiffs
    spi_flash
    lvgl_esp32_drivers
    lvgl
    ui
)

set(include_dirs ""
)

idf_component_register(SRCS "main.c"
        INCLUDE_DIRS "${include_dirs}"
		REQUIRES ${pri_req}
)