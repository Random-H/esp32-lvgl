// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button1 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button1, 59);
    lv_obj_set_height(ui_Button1, 29);
    lv_obj_set_x(ui_Button1, 3);
    lv_obj_set_y(ui_Button1, 41);
    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label1 = lv_label_create(ui_Button1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "666");

    ui_Checkbox1 = lv_checkbox_create(ui_Screen1);
    lv_obj_set_width(ui_Checkbox1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Checkbox1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Checkbox1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Checkbox1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    ui_Checkbox2 = lv_checkbox_create(ui_Screen1);
    lv_obj_set_width(ui_Checkbox2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Checkbox2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Checkbox2, 0);
    lv_obj_set_y(ui_Checkbox2, -28);
    lv_obj_set_align(ui_Checkbox2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Checkbox2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    ui_Checkbox3 = lv_checkbox_create(ui_Screen1);
    lv_obj_set_width(ui_Checkbox3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Checkbox3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Checkbox3, 1);
    lv_obj_set_y(ui_Checkbox3, -58);
    lv_obj_set_align(ui_Checkbox3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Checkbox3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags


}
