SET(SOURCES 
    screens/ui_Screen1.c
    ui.c
    user_action.c
    components/ui_comp_hook.c
    ui_helpers.c
    )

set(include_dirs
            ".")

idf_component_register(SRCS ${SOURCES}
                    INCLUDE_DIRS "${include_dirs}"
                    REQUIRES lvgl)
