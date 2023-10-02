/* Copyright 2020 markva
 * Copyright 2021 bdtc123
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum custom_keycodes {
    MB3 = SAFE_RANGE,
    MB4,
    MB5,
    MB6,
    MB7,
    MB8,
    MB9,
    MB10,
    MB11,
    MB12,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case MB3:
        if (record->event.pressed) {
            // when keycode MB3 is pressed
            for(int i=1; i<=3; i++) {
                tap_code_delay(KC_SPC, 80);
                _delay_ms(80);
            } 
        } else {
            // when keycode MB3 is released
        }
        break;
    case MB4:
        if (record->event.pressed) {
            // when keycode MB4 is pressed
            for(int i=1; i<=4; i++) {
                tap_code_delay(KC_SPC, 80);
                _delay_ms(80);
            } 
        } else {
            // when keycode MB4 is released
        }
        break;
    case MB5:
        if (record->event.pressed) {
            // when keycode MB5 is pressed
            for(int i=1; i<=5; i++) {
                tap_code_delay(KC_SPC, 80);
                _delay_ms(80);
            } 
        } else {
            // when keycode MB5 is released
        }
        break;
    case MB6:
        if (record->event.pressed) {
            // when keycode MB6 is pressed
            for(int i=1; i<=6; i++) {
                tap_code_delay(KC_SPC, 80);
                _delay_ms(80);
            } 
        } else {
            // when keycode MB6 is released
        }
        break;
    case MB7:
        if (record->event.pressed) {
            // when keycode MB7 is pressed
            for(int i=1; i<=7; i++) {
                tap_code_delay(KC_SPC, 80);
                _delay_ms(80);
            } 
        } else {
            // when keycode MB7 is released
        }
        break;
    case MB8:
        if (record->event.pressed) {
            // when keycode MB8 is pressed
            for(int i=1; i<=8; i++) {
                tap_code_delay(KC_SPC, 80);
                _delay_ms(80);
            } 
        } else {
            // when keycode MB8 is released
        }
        break;
    case MB9:
        if (record->event.pressed) {
            // when keycode MB9 is pressed
            for(int i=1; i<=9; i++) {
                tap_code_delay(KC_SPC, 80);
                _delay_ms(80);
            } 
        } else {
            // when keycode MB9 is released
        }
        break;
    case MB10:
        if (record->event.pressed) {
            // when keycode MB10 is pressed
            for(int i=1; i<=10; i++) {
                tap_code_delay(KC_SPC, 80);
                _delay_ms(80); 
            }
        } else {
            // when keycode MB10 is released
        }
        break;
    case MB11:
        if (record->event.pressed) {
            // when keycode MB11 is pressed
            for(int i=1; i<=11; i++) {
                tap_code_delay(KC_SPC, 80);
                _delay_ms(80);
            } 
        } else {
            // when keycode MB11 is released
        }
        break;
    case MB12:
        if (record->event.pressed) {
            // when keycode MB12 is pressed
            for(int i=1; i<=12; i++) {
                tap_code_delay(KC_SPC, 50);
                _delay_ms(50);
            } 
        } else {
            // when keycode MB12 is released
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_60_iso_arrow(
        QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_RSFT, KC_UP,   KC_SLSH,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                    KC_RALT, MO(1),   KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_60_iso_arrow(
        QK_BOOT,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_PSCR, KC_SCRL, KC_PAUS, _______, _______, _______, _______,
        _______, _______, _______, RGB_HUD, RGB_SAD, RGB_VAD,  KC_INS, KC_HOME, KC_PGUP, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______, _______, KC_PGUP, _______,
        _______, _______, _______,                            _______,                     MO(2), _______, KC_HOME, KC_PGDN, KC_END
    ),
    [2] = LAYOUT_60_iso_arrow(
        _______, _______, _______,     MB3,     MB4,     MB5,     MB6,     MB7,     MB8,     MB9,    MB10,    MB11,    MB12, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______
    )
};
