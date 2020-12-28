#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x9650
#define PRODUCT_ID      0x2800
#define MANUFACTURER    github.com/ec965
#define PRODUCT         dropout 
#define DESCRIPTION     numpad

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

/* key matrix pins */
// These are defined in the revision folders
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS


// This keyboard uses the backlight implementation for the numlock.
// Therefore, the user can control the brightness of the numlock led using backlight controls.
// there is only 1 switch led which is on the numlock key (on the default keymap).
// define BACKLIGHT_NUMLOCK to use the backlight implementation to control the numlock led
// if BACKLIGHT_NUMLOCK is not defined, the regular numlock implementation will be used.
#define BACKLIGHT_NUMLOCK
#define BKACLIGHT_LEVELS 6
/* #define BACKLIGHT_BREATHING */
#define BACKLIGHT_ON_STATE 0 //baklight is on when pin is low

#endif
