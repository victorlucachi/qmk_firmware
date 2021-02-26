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

/* Keyboard Matrix Assignments */
 #define MATRIX_ROW_PINS { D3, D2, D1, D0 }
 #define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5, F4, F5, F6, F7, B1, B3 }
 #define UNUSED_PINS

/* Rotary Encoder Support */
#define ENCODERS_PAD_A { B6 }
#define ENCODERS_PAD_B { B2 }
#define ENCODER_RESOLUTION 4
#define TAP_CODE_DELAY 10

/* Force NKRO */
#define FORCE_NKRO

/* disable these deprecated features by default */
#ifndef LINK_TIME_OPTIMIZATION_ENABLE
  #define NO_ACTION_MACRO
  #define NO_ACTION_FUNCTION
#endif

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT
