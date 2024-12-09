/**
 * @brief Initializes the user event subsystem
 */
#ifndef UI_ACTIONS_H
#define UI_ACTIONS_H

#include <stdint.h>
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
extern "C"
{
#endif
    typedef enum
    {
        UI_ACTION_SET_ENGINE_SPEED,
        UI_ACTION_SET_TOTAL_ENGINE_HOURS,
        UI_ACTION_SET_OIL_PRESSURE,
        UI_ACTION_SET_ENGINE_TEMPERATURE,
        UI_ACTION_SET_GLOW_PLUG
    } ui_action_t;

    void ui_action_set_engine_speed(uint32_t speed, ui_action_t ui_type);

    void ui_action_set_label_text(char *text);
#ifdef __cplusplus
}
#endif

#endif // UI_ACTIONS_H