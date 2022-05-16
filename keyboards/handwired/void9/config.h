// Copyright 2022 Victor Lucachi (@Victor Lucachi)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Rotary Encoder Support */
#define ENCODERS_PAD_A { B1, B2 }
#define ENCODERS_PAD_B { F7, B3 }

#define ENCODER_RESOLUTION 4
#define TAP_CODE_DELAY 10

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* disable these deprecated features by default */
#ifndef LINK_TIME_OPTIMIZATION_ENABLE
  #define NO_ACTION_MACRO
  #define NO_ACTION_FUNCTION
#endif
