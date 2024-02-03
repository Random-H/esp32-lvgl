/*
 * @Author: Random-H 1092444593@qq.com
 * @Date: 2024-02-02 15:22:05
 * @LastEditors: Random-H
 * @LastEditTime: 2024-02-03 11:49:40
 * @Description: 
 * 
 * 
 */
#ifndef _USER_DEV_SPI_H_
#define _USER_DEV_SPI_H_

#include "string.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define LCD_HOST  SPI2_HOST
#define DMA_CHAN  2

#define PIN_NUM_SCLK           18
#define PIN_NUM_MOSI           17
#define PIN_NUM_MISO           -1
#define PIN_NUM_DC             15
#define PIN_NUM_RST            16
#define PIN_NUM_CS             14
#define PIN_NUM_BK_LIGHT       13

void lcd_cmd(const uint8_t cmd);
void VSPI_data16(const uint16_t dat);
void vspi_init(void);
void VSPI_data_x(uint16_t *dat,uint32_t len);
IRAM_ATTR void VSPI_data_queue(uint16_t *dat,uint32_t len,uint32_t user_fg);

#endif