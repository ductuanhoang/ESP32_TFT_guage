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
    void ui_action_set_engine_speed(uint16_t speed);

#ifdef __cplusplus
}
#endif

#endif // UI_ACTIONS_H