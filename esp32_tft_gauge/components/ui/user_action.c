

/***********************************************************************************************************************
 * Pragma directive
 ***********************************************************************************************************************/

/***********************************************************************************************************************
 * Includes <System Includes>
 ***********************************************************************************************************************/
#include "ui.h"
#include <stdio.h>
/***********************************************************************************************************************
 * Macro definitions
 ***********************************************************************************************************************/
#define TAG "UI_ACTION"

/***********************************************************************************************************************
 * Typedef definitions
 ***********************************************************************************************************************/
#define MAX_SPEED 2000 // set 2000 rpm as max speed

/***********************************************************************************************************************
 * Private global variables and functions
 ***********************************************************************************************************************/

/***********************************************************************************************************************
 * Exported global variables and functions (to be accessed by other files)
 ***********************************************************************************************************************/

/***********************************************************************************************************************
 * Imported global variables and functions (from other files)
 ***********************************************************************************************************************/
void ui_action_set_engine_speed(uint16_t speed)
{
    // convert from 0-100
    if (speed < 1000)
    {
        lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x15CB1A), LV_PART_INDICATOR | LV_STATE_DEFAULT);
        lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

        lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0x19C93E), LV_PART_KNOB | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_opa(ui_Arc1, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    }
    else if (speed < 1500)
    {
        lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0xF7B500), LV_PART_INDICATOR | LV_STATE_DEFAULT);
        lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

        lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0xF7B500), LV_PART_KNOB | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_opa(ui_Arc1, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    }
    else
    {
        lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0xF70000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
        lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

        lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0xF70000), LV_PART_KNOB | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_opa(ui_Arc1, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    }

    uint8_t percent = 0;
    percent = (speed * 100) / MAX_SPEED;
    lv_arc_set_value(ui_Arc1, percent);
    char buf[15];
    snprintf(buf, 15, "%d RPM", speed);
    lv_label_set_text(ui_Label2, buf);
}
/***********************************************************************************************************************
 * static functions
 ***********************************************************************************************************************/

/***********************************************************************************************************************
 * End of file
 ***********************************************************************************************************************/