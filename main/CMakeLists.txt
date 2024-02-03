# idf_component_register(SRCS "main.c"
#                      INCLUDE_DIRS ".")

set(SOURCES main.c)
idf_component_register(SRCS ${SOURCES}
                    INCLUDE_DIRS "."
                    INCLUDE_DIRS "../components/ui"
                    REQUIRES lvgl spi)

#target_compile_definitions(${COMPONENT_LIB} PRIVATE LV_CONF_INCLUDE_SIMPLE=1)
