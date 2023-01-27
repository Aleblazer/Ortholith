/* Copyright 2023 Aleblazer
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
#include "mousekey.h"

// Helpful defines
#define GRAVE_MODS  (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE,
  MS_UL,
  MS_UR,
  MS_DL,
  MS_DR,
  MS_DBLC,
  MS_HOLD


};

enum layer {
    _QWERTY,
    _LOWER,
    _RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
      /* Keymap _BL: Base Layer (Default Layer)
   */
[_QWERTY] = LAYOUT(
		KC_ESC, KC_TAB, KC_GRV, KC_DEL, KC_INS, KC_HOME, KC_END, OSL(_LOWER), KC_PGUP, KC_PGDN, KC_VOLU, KC_VOLD, KC_MPLY,
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_MEDIA_NEXT_TRACK, 
		KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_MEDIA_PREV_TRACK, 
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,     KC_BSPC,     KC_BTN3, 
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, MS_UL, KC_MS_U, MS_UR, KC_WH_U, 
		KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_SCLN, KC_QUOT, KC_MS_L, KC_BTN1, KC_MS_R, KC_WH_D, 
		OS_TOGG,      OSM(MOD_LSFT),       KC_SPC,       KC_COMM, KC_DOT, KC_SLSH, MS_DL, KC_MS_D, MS_DR, C(KC_C), 
		OSM(MOD_LCTL), OSM(MOD_LALT), KC_LGUI, KC_LEFT, KC_RGHT, KC_UP, KC_DOWN, KC_ENT, MS_DBLC, KC_BTN2, MS_HOLD, C(KC_V)),
[_LOWER] = LAYOUT(
		KC_PSCR, KC_SCRL, KC_PAUS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
[_RAISE] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#ifdef OLED_ENABLE
#include "images.h"

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}

void shiftright(char* buf, int size, int num) {
  for (int i = size-1; i > 0; i--) {
    buf[i] >>= 1;
    if (buf[i-1] & 0x01) {
      buf[i] |= 0x80;
    }
  }
  buf[0] >>= 1;
}

// right to left, 8 bit vertical strips.
void mask(char* enable) {
  char rowenable[3];
  const char* data = display;
  int i = 0;
  char blockmask[2] = { 0x00, 0x00 };

  while (i < sizeof(display)) {
    if (i % 128 == 0) {
      // shift enable-mask right 1 at each row, reinitialize row copy
      if (i != 0) {
        shiftright(enable, 3, 2);
      }
      rowenable[0] = enable[0];
      rowenable[1] = enable[1];
      rowenable[2] = enable[2];
    }

    if (i % 8 == 0) {
      if (rowenable[2] & 0x01) {
        blockmask[1] = 0xff;
      } else {
        blockmask[1] = 0x00;
      }

      if (rowenable[2] & 0x02) {
        blockmask[0] = 0xff;
      } else {
        blockmask[0] = 0x00;
      }
      shiftright(rowenable, 3, 2);
    }

    uint8_t c = pgm_read_byte(data++);
    oled_write_raw_byte(c & blockmask[1], i++);
    shiftright(blockmask, 2, 1);
  }
}

void setmask(char* mask) {
  mask[0] = 0x00;
  mask[1] = 0x00;
  mask[2] = 0x00;

  uint8_t mod = get_mods() | get_oneshot_mods();
  if (mod & MOD_MASK_CTRL) {
    mask[1] |= 0xf0;
  }
  if (mod & MOD_MASK_ALT) {
    mask[1] |= 0x0f;
  }
  if (mod & MOD_MASK_GUI) {
    mask[0] |= 0xf0;
  }
  if (mod & MOD_MASK_SHIFT) {
    mask[2] |= 0xf0;
  }

  switch (get_highest_layer(layer_state)) {
    case _RAISE:
      mask[0] |= 0x0f;
      break;
  }
}

bool oled_task_user(void) {
    char m[3];
    setmask(m);
    mask(m);
    return false;
}

#endif

bool mouse_on = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode)
    {
    case MS_UL:
      if (record->event.pressed)
      {
      register_code(KC_MS_UP);
      register_code(KC_MS_LEFT);
      }
      else
      {
      unregister_code(KC_MS_UP);
      unregister_code(KC_MS_LEFT);
      }
      return false;
      break;
    case MS_UR:
      if (record->event.pressed)
      {
      register_code(KC_MS_UP);
      register_code(KC_MS_RIGHT);
      }
      else
      {
      unregister_code(KC_MS_UP);
      unregister_code(KC_MS_RIGHT);
      }
      return false;
      break;
    case MS_DL:
      if (record->event.pressed)
      {
      register_code(KC_MS_DOWN);
      register_code(KC_MS_LEFT);
      }
      else
      {
      unregister_code(KC_MS_DOWN);
      unregister_code(KC_MS_LEFT);
      }
      return false;
      break;
    case MS_DR:
      if (record->event.pressed)
      {
      register_code(KC_MS_DOWN);
      register_code(KC_MS_RIGHT);
      }
      else
      {
      unregister_code(KC_MS_DOWN);
      unregister_code(KC_MS_RIGHT);
      }
      return false;
      break;
    case MS_DBLC:
      if (record->event.pressed)
      {
      register_code(KC_MS_BTN1);
      unregister_code(KC_MS_BTN1);
      register_code(KC_MS_BTN1);
      unregister_code(KC_MS_BTN1);
      }
      return false;
      break;
    case MS_HOLD:
      if (record->event.pressed)
      {
      if (mouse_on)
      {
        mousekey_off(KC_BTN1);
      }
      else
      {
        mousekey_on(KC_BTN1);
      }
      mouse_on = !mouse_on;
      }
      return false;
      break;
    }
    return true;
}
