/* Copyright 2020 Victor Lucachi
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base
 * ,---------------------------.
 * |   7  |   8  |   9  |BSPACE|
 * |------+------+------+------|
 * |   4  |   5  |   6  | ESC  |
 * |------+------+------+------|
 * |   1  |   2  |   3  | TAB  |
 * |------+------+------+------|
 * |  FN  |   0  |   .  |ENTER |
 * `---------------------------'
 */
[_BASE] = LAYOUT_ortho_4x4(
    KC_P7,    KC_P8,  KC_P9,    KC_BSPC,
    KC_P4,    KC_P5,  KC_P6,    KC_ESC,
    KC_P1,    KC_P2,  KC_P3,    KC_TAB,
    TT(_FN), KC_P0,   KC_PDOT,  KC_ENTER
),

/* FN
 * ,---------------------------.
 * | RESET|      |      |      |
 * |------+------+------+------|
 * |      |      |      |   +  |
 * |------+------+------+------|
 * |      |      |      |   -  |
 * |------+------+------+------|
 * |      |      |      |   =  |
 * `---------------------------'
 */
[_FN] = LAYOUT_ortho_4x4(
    RESET,     KC_TRNS,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_PMNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_PPLS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_PEQL
)
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}