#pragma once

#define DEVICE_VER 0x0002
#define MATRIX_ROW_PINS { F4, B4, B3, B2, B6 }
#define MATRIX_COL_PINS { E6, D7, B1, F7 }

#ifdef BACKLIGHT_NUMLOCK
    #define BACKLIGHT_PIN B5
#else
    #define LED_NUM_LOCK_PIN B5
#endif

#define ENCODERS_PAD_A { F6 }
#define ENCODERS_PAD_B { F5 }

