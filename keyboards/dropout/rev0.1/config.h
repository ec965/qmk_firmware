#pragma once
#define DEVICE_VER 0x0001

#define MATRIX_ROW_PINS { D1, B2, E6, B4, B5 }
#define MATRIX_COL_PINS { B3, B1, D7, C6 }

#ifdef BACKLIGHT_NUMLOCK
    #define BACKLIGHT_PIN B6
#else
    #define LED_NUM_LOCK_PIN B6
#endif

#define ENCODERS_PAD_A { D0 }
#define ENCODERS_PAD_B { D4 }

