file(GLOB_RECURSE SOURCES src/*.c)
file(GLOB_RECURSE LV_DEV_SOURCES porting/*.c)



idf_component_register(	SRCS ${SOURCES}
						SRCS ${LV_DEV_SOURCES}
						INCLUDE_DIRS ./src ../ ./porting
            PRIV_REQUIRES driver spi)
