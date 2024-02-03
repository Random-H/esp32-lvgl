idf_component_register(
					SRC_DIRS "./"
                    INCLUDE_DIRS "./"
                    REQUIRES spi esp_lcd esp_timer driver lvgl
                    PRIV_REQUIRES spi
                    )

