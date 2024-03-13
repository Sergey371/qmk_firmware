#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌────┬─────┬────┬───┐
     * │ << │ ||> │ >> │ M │
     * └────┴─────┴────┴───┘
     */
	[0] = LAYOUT(KC_MRWD, KC_MPLY, KC_MFFD, KC_MUTE)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




