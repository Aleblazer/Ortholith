// Copyright 2023 Aleblazer
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define ONESHOT_TAP_TOGGLE 5  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 10000  /* Time (in ms) before the one shot key is released */

#ifdef OLED_ENABLE
#define OLED_DISPLAY_128X64
#define I2C1_SCL_PIN        GP0
#define I2C1_SDA_PIN        GP1
#define I2C_DRIVER I2CD1
#define OLED_BRIGHTNESS 128
#endif

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 13

#define DIODE_DIRECTION COL2ROW

#define MATRIX_ROW_PINS { GP2, GP3, GP4, GP5, GP6, GP7, GP8, GP9 }
#define MATRIX_COL_PINS { GP10, GP11, GP12, GP13, GP14, GP15, GP22, GP21, GP20, GP19, GP18, GP17, GP16 }

#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#define MOUSEKEY_INITIAL_SPEED 50
#define MOUSEKEY_ACCELERATED_SPEED 750
#define MOUSEKEY_MOVE_DELTA 3