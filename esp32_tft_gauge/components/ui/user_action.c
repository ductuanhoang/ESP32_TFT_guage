

/***********************************************************************************************************************
 * Pragma directive
 ***********************************************************************************************************************/

/***********************************************************************************************************************
 * Includes <System Includes>
 ***********************************************************************************************************************/
#include "ui.h"
#include "user_action.h"
#include <stdio.h>
/***********************************************************************************************************************
 * Macro definitions
 ***********************************************************************************************************************/
#define TAG "UI_ACTION"

/***********************************************************************************************************************
 * Typedef definitions
 ***********************************************************************************************************************/
#define MAX_SPEED 2000            // set 2000 rpm as max speed
#define MAX_TOTAL_ENG_HRS 1000000 // set 1000000 hours as max total engine hours
#define MAX_OIL_PRESSURE 10000    // set 10000 psi as max oil pressure
#define MAX_ENGINE_TEMP 500       // set 500 C as max engine temperature
#define MAX_GLOW_PLUG 1           // set 1 as max glow plug
/***********************************************************************************************************************
 * Private global variables and functions
 ***********************************************************************************************************************/

/***********************************************************************************************************************
 * Exported global variables and functions (to be accessed by other files)
 ***********************************************************************************************************************/

/***********************************************************************************************************************
 * Imported global variables and functions (from other files)
 ***********************************************************************************************************************/
void ui_action_set_engine_speed(uint32_t value, ui_action_t ui_type)
{
    // if (type < 1000)
    // {
    //     lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x15CB1A), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    //     lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    //     lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0x19C93E), LV_PART_KNOB | LV_STATE_DEFAULT);
    //     lv_obj_set_style_bg_opa(ui_Arc1, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    // }
    // else if (type < 1500)
    // {
    //     lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0xF7B500), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    //     lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    //     lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0xF7B500), LV_PART_KNOB | LV_STATE_DEFAULT);
    //     lv_obj_set_style_bg_opa(ui_Arc1, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    // }
    // else
    // {
    //     lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0xF70000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    //     lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    //     lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0xF70000), LV_PART_KNOB | LV_STATE_DEFAULT);
    //     lv_obj_set_style_bg_opa(ui_Arc1, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    // }

    uint8_t percent = 0;

    char buf[15];
    switch (ui_type)
    {
    case UI_ACTION_SET_ENGINE_SPEED:
        ui_action_set_label_text("Engine Speed");
        percent = (value * 100) / MAX_SPEED;
        lv_arc_set_value(ui_Arc1, percent);
        snprintf(buf, 15, "%ld RPM", value);
        lv_label_set_text(ui_Label2, buf);
        break;
    case UI_ACTION_SET_TOTAL_ENGINE_HOURS:
        ui_action_set_label_text("Total Engine Hours");
        percent = (value * 100) / MAX_TOTAL_ENG_HRS;
        lv_arc_set_value(ui_Arc1, percent);
        snprintf(buf, 15, "%ld Hr/bit", value);
        lv_label_set_text(ui_Label2, buf);
        break;
    case UI_ACTION_SET_OIL_PRESSURE:
        ui_action_set_label_text("Oil Pressure");
        percent = (value * 100) / MAX_OIL_PRESSURE;
        lv_arc_set_value(ui_Arc1, percent);
        snprintf(buf, 15, "%ld kPa", value);
        lv_label_set_text(ui_Label2, buf);
        break;
    case UI_ACTION_SET_ENGINE_TEMPERATURE:
        ui_action_set_label_text("Engine Temperature");
        percent = (value * 100) / MAX_ENGINE_TEMP;
        lv_arc_set_value(ui_Arc1, percent);
        snprintf(buf, 15, "%ld degC", value);
        lv_label_set_text(ui_Label2, buf);
        break;
    default:
        break;
    }
}

void ui_action_set_label_text(char *text)
{
    lv_label_set_text(ui_Label1, text);
}
/***********************************************************************************************************************
 * static functions
 ***********************************************************************************************************************/

/***********************************************************************************************************************
 * End of file
 ***********************************************************************************************************************/