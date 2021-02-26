/*
Copyright 2020 Victor Lucachi

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xF055
#define PRODUCT_ID 0x3533
#define DEVICE_VER 0x0001
#define MANUFACTURER Victor Lucachi
#define PRODUCT VOID16
#define DESCRIPTION A handwired 4x4 Macropad with a rotary encoder

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/* Keyboard Matrix Assignments
 *
 * Modify to match your wiring
 *
 *                        1   2   3   4 
 */
#define MATRIX_ROW_PINS { D3, D2, D1, D0 }
#define MATRIX_COL_PINS { E6, D7, C6, D4 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Rotary Encoder Support */
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F4 }

#define ENCODER_RESOLUTION 4
#define TAP_CODE_DELAY 10

/* Audio Support */
#define B6_AUDIO
#define DAC_SAMPLE_MAX 65535U
#define NO_MUSIC_MODE
#define AUDIO_CLICKY

/* RGB Underglow Support */
#define RGB_DI_PIN F7
#ifdef RGB_DI_PIN
   #define RGBLED_NUM 11
//   #define RGBLIGHT_HUE_STEP 8
//   #define RGBLIGHT_SAT_STEP 8
//   #define RGBLIGHT_VAL_STEP 8
//   #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
   #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
// /*== all animations enable ==*/
//   #define RGBLIGHT_ANIMATIONS
// /*== or choose animations ==*/
   #define RGBLIGHT_EFFECT_BREATHING
   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//   #define RGBLIGHT_EFFECT_SNAKE
   #define RGBLIGHT_EFFECT_KNIGHT
//   #define RGBLIGHT_EFFECT_CHRISTMAS
//   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//   #define RGBLIGHT_EFFECT_RGB_TEST
//   #define RGBLIGHT_EFFECT_ALTERNATING
// /*== customize breathing effect ==*/
//   /*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/
//   #define RGBLIGHT_BREATHE_TABLE_SIZE 256      // 256(default) or 128 or 64
//   /*==== use exp() and sin() ====*/
//   #define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
//   #define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* disable these deprecated features by default */
#ifndef LINK_TIME_OPTIMIZATION_ENABLE
  #define NO_ACTION_MACRO
  #define NO_ACTION_FUNCTION
#endif
