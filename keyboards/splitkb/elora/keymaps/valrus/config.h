#ifdef OLED_DRIVER_ENABLE
#    define OLED_DISPLAY_128X64
#    define OLED_TIMEOUT 60000
#endif

#undef TAPPING_TERM
#define TAPPING_TERM 140

#define ENCODER_RESOLUTION 2

#define TAPPING_TOGGLE 1
#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define VIA_EEPROM_LAYOUT_OPTIONS_SIZE 2
#define SPLIT_LAYER_STATE_ENABLE
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_STARLIGHT_DUAL_HUE
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_JELLYBEAN_RAINDROPS

#ifdef RGBLIGHT_ENABLE
#    define RGBLED_NUM 12 // number of LEDs
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    define RGBLIGHT_SLEEP
#    undef RGBLIGHT_LIMIT_VAL
#    define RGBLIGHT_LIMIT_VAL 120
#endif

// Allows to use either side as the master. Look at the documentation for info:
// https://docs.qmk.fm/#/config_options?id=setting-handedness
// #define EE_HANDS

#define VIAL_KEYBOARD_UID {0xB3, 0x8D, 0x94, 0xDA, 0xB3, 0xD7, 0xDC, 0x3D}
#define VIAL_COMBO_ENTRIES 32
#define VIAL_UNLOCK_COMBO_ROWS { 3, 9 }
#define VIAL_UNLOCK_COMBO_COLS { 2, 5 }
