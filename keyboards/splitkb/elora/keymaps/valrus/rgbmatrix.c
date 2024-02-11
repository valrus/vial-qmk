#include "valrus.h"

#if defined(RGB_MATRIX_ENABLE) && defined(RGB_MATRIX_LAYERS)

void keyboard_post_init_kb(void) {
    rgb_matrix_enable_noeeprom();
    rgb_matrix_mode(RGB_MATRIX_JELLYBEAN_RAINDROPS);
}

bool rgb_matrix_indicators_advanced_kb(uint8_t led_min, uint8_t led_max) {
    HSV hsv = {0, 150, 150};

    switch(get_highest_layer(layer_state|default_layer_state)) {
        case GAMING:
            hsv = HSV_PINK;
            break;
        case CAPS:
            hsv = HSV_BLUE;
            break;
        case NUMERIC:
            hsv = HSV_SPRINGGREEN;
            break;
        case ACTIONS:
            hsv = HSV_CYAN;
            break;
        case SYMBOLS:
            hsv = HSV_PURPLE;
            break;
        default:
            break;
    }

    // limit brightness
    if (hsv.v > rgb_matrix_get_val()) {
        hsv.v = rgb_matrix_get_val();
    }

    RGB rgb = hsv_to_rgb(hsv);

    for (uint8_t i = led_min; i < led_max; i++) {
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }

    return false;
}

#endif
