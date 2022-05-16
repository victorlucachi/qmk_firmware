// Copyright 2022 Victor Lucachi (@victorlucachi)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN1,
    _FN2,
    _FN3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base
 * ┌───┬───┬───┐
 * │ 7 │ 8 │ 9 │
 * ├───┼───┼───┤
 * │ 4 │ 5 │ 6 │
 * ├───┼───┼───┤
 * │ 1 │ 2 │ 3 │
 * └───┴───┴───┘
 */
[_BASE] = LAYOUT_ortho_3x3(
    KC_7,       KC_8,       KC_9,
    KC_4,       KC_5,       KC_6,
    KC_1,       KC_2,       KC_3
),

/* FN1
 * ┌───┬───┬───┐
 * │ 7 │ 8 │ 9 │
 * ├───┼───┼───┤
 * │ 4 │ 5 │ 6 │
 * ├───┼───┼───┤
 * │ 1 │ 2 │ 3 │
 * └───┴───┴───┘
 */
[_FN1] = LAYOUT_ortho_3x3(
    KC_7,       KC_8,       KC_9,
    KC_4,       KC_5,       KC_6,
    KC_1,       KC_2,       KC_3
),

/* FN2
 * ┌───┬───┬───┐
 * │   │   │   │
 * ├───┼───┼───┤
 * │   │   │   │
 * ├───┼───┼───┤
 * │   │   │   │
 * └───┴───┴───┘
 */
[_FN2] = LAYOUT_ortho_3x3(
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS
),

/* FN3
 * ┌───┬───┬───┐
 * │   │   │   │
 * ├───┼───┼───┤
 * │   │   │   │
 * ├───┼───┼───┤
 * │   │   │   │
 * └───┴───┴───┘
 */
[_FN3] = LAYOUT_ortho_3x3(
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS
)
};

/* Rotary Encoder Settings */
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_MNXT);
        } else {
            tap_code(KC_MPRV);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return false;
}
