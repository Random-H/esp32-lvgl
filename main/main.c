/*
 * @Author: Random-H 1092444593@qq.com
 * @Date: 2024-01-28 22:36:05
 * @LastEditors: Random-H
 * @LastEditTime: 2024-02-03 11:52:06
 * @Description: 
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_freertos_hooks.h"
#include "freertos/semphr.h"
#include "esp_system.h"
#include "driver/gpio.h"
#include "esp_timer.h"
#include "lvgl.h"
#include "User_dev_spi.h"
#include "st7735.h"
#include "ui.h"
#include "esp_log.h"
#include "lv_port_disp.h"

static esp_timer_handle_t lvgl_timer_handle = NULL;

static IRAM_ATTR void lv_timer_cb(void *arg)
{
   lv_tick_inc(1);
}

static esp_timer_create_args_t lvgl_timer = {
    .callback = &lv_timer_cb,
    .arg = NULL,
    .name = "lvgl_timer",
    .dispatch_method = ESP_TIMER_TASK
};

esp_err_t _lv_timer_create(void)
{
   esp_err_t err = esp_timer_create(&lvgl_timer, &lvgl_timer_handle);
   err = esp_timer_start_periodic(lvgl_timer_handle, 1000); // 1毫秒回调
   return err;
}



void app_main(void)
{
   lv_init();
   //lcd_init();
   //LCD_Fill(0,0,LCD_W,LCD_H,GRAY);

   //LCD_DrawLine(0,0,LCD_W,LCD_H,WHITE);
   lv_port_disp_init();
   _lv_timer_create();

   ui_init();

   //LCD_Fill(1,1,20,20,WHITE);
   
   while (true)
   {
      vTaskDelay(10 / portTICK_PERIOD_MS);
      lv_task_handler();
   }

}