#include QMK_KEYBOARD_H
#include "keymap_bepo.h"

#define ____ KC_TRNS
#define _NO_ KC_NO

/* LAYERS */
#define LAYER_BEPO_BASE 0
#define LAYER_BEPO_BASE_DUAL 1

#define LAYER_FN_NUM_KEYS 2
#define LAYER_FN_NUM_KEYS_DUAL 3

#define LAYER_MOUSE_KEYS 4

#define LAYER_NAV_KEYS 5
#define LAYER_NAV_KEYS_DUAL 6


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
  {

   [LAYER_BEPO_BASE] =
   LAYOUT_ergodox(BP_DOLLAR, BP_DOUBLE_QUOTE, BP_LEFT_GUILLEMET, BP_RIGHT_GUILLEMET, BP_LEFT_PAREN, BP_RIGHT_PAREN, TT(LAYER_BEPO_BASE_DUAL),
		  BP_Z, BP_B, BP_E_ACUTE, BP_P, BP_O, BP_E_GRAVE, KC_BSPC,
		  BP_W, BP_A, BP_U, BP_I, BP_E, BP_COMMA,
		  BP_E_CIRCUMFLEX, BP_A_GRAVE, BP_Y, BP_X, BP_DOT, BP_K, KC_TAB,
		  BP_ALGR, KC_LGUI, KC_LALT, KC_LCTRL, LT(LAYER_NAV_KEYS, KC_ESC),

		  TT(LAYER_MOUSE_KEYS), KC_AUDIO_VOL_UP,
		  KC_AUDIO_MUTE,
		  KC_SPACE, KC_LSHIFT, KC_AUDIO_VOL_DOWN,


		  TT(LAYER_BEPO_BASE_DUAL), BP_AT, BP_PLUS, BP_MINUS, BP_SLASH, BP_ASTERISK, BP_EQUAL,
		  KC_DEL, BP_DEAD_CIRCUMFLEX, BP_V, BP_D, BP_L, BP_J, BP_PERCENT,
		  BP_C, BP_T, BP_S, BP_R, BP_N, BP_M,
		  KC_ENTER, BP_APOSTROPHE, BP_Q, BP_G, BP_H, BP_F, BP_C_CEDILLA,
		  LT(LAYER_NAV_KEYS, KC_ESC), KC_RCTRL, KC_LALT, KC_RGUI, BP_ALGR,

		  KC_PGUP, TT(LAYER_FN_NUM_KEYS),
		  KC_INSERT,
		  KC_PGDOWN, KC_RSHIFT, KC_SPACE),



   [LAYER_BEPO_BASE_DUAL] =
   LAYOUT_ergodox(____, ____, ____, ____, ____, ____, ____,
		  ____, ____, ____, ____, ____, ____, ____,
		  ____, RALT_T(BP_A), LGUI_T(BP_U), LALT_T(BP_I), LCTL_T(BP_E), ____,
		  ____, ____, ____, ____, ____, ____, ____,
		  ____, ____, ____, ____, ____,

		  ____, ____,
		  ____,
		  LSFT_T(KC_SPACE), LSFT_T(KC_TAB), ____,


		  ____, ____, ____, ____, ____, ____, ____,
		  ____, ____, ____, ____, ____, ____, ____,
		  ____, RCTL_T(BP_T), LALT_T(BP_S), RGUI_T(BP_R), RALT_T(BP_N), ____,
		  ____, ____, ____, ____, ____, ____, ____,
		  ____, ____, ____, ____, ____,

		  ____, ____,
		  ____,
		  ____, RSFT_T(KC_ENTER), RSFT_T(KC_SPACE)),



   [LAYER_FN_NUM_KEYS] =
   LAYOUT_ergodox(KC_F21, KC_F17, KC_F13, KC_F9, KC_F5, KC_F1, ____,
		  KC_F22, KC_F18, KC_F14, KC_F10, KC_F6, KC_F2, ____,
		  KC_F23, KC_F19, KC_F15, KC_F11, KC_F7, KC_F3,
		  KC_F24, KC_F20, KC_F16, KC_F12, KC_F8, KC_F4, ____,
		  ____, ____, ____, ____, ____,

		  ____, ____,
		  ____,
		  ____, ____, ____,


		  ____, KC_NUMLOCK, KC_KP_PLUS, KC_KP_MINUS, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_EQUAL,
		  ____, _NO_, KC_KP_7, KC_KP_8, KC_KP_9, _NO_, _NO_,
		  _NO_, KC_KP_4, KC_KP_5, KC_KP_6, _NO_, _NO_,
		  ____, KC_KP_0, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_DOT, _NO_,
		  ____, ____, ____, ____, ____,

		  ____, ____,
		  ____,
		  ____, ____, ____),



   [LAYER_FN_NUM_KEYS_DUAL] =
   LAYOUT_ergodox(____, ____, ____, ____, ____, ____, ____,
		  ____, ____, ____, ____, ____, ____, ____,
		  ____, RALT_T(KC_F19), LGUI_T(KC_F15), LALT_T(KC_F11), LCTL_T(KC_F7), ____,
		  ____, ____, ____, ____, ____, ____, ____,
		  ____, ____, ____, ____, ____,

		  ____, ____,
		  ____,
		  ____, ____, ____,


		  ____, ____, ____, ____, ____, ____, ____,
		  ____, ____, ____, ____, ____, ____, ____,
		  ____, RCTL_T(KC_KP_4), LALT_T(KC_KP_5), RGUI_T(KC_KP_6), BP_ALGR, ____,
		  ____, ____, ____, ____, ____, ____, ____,
		  ____, ____, ____, ____, ____,

		  ____, ____,
		  ____,
		  ____, ____, ____),



   [LAYER_MOUSE_KEYS] =
   LAYOUT_ergodox(_NO_, _NO_, _NO_, _NO_, _NO_, _NO_, ____,
		  _NO_, _NO_, _NO_, KC_MS_WH_UP, _NO_, _NO_, _NO_,
		  _NO_, _NO_, KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_RIGHT, _NO_,
		  _NO_, _NO_, KC_MS_BTN4, KC_MS_BTN3, KC_MS_BTN5, _NO_, _NO_,
		  ____, ____, ____, ____, ____,

		  ____, KC_MS_ACCEL2,
		  KC_MS_ACCEL1,
		  KC_MS_BTN1, KC_MS_BTN2, KC_MS_ACCEL0,


		  ____, _NO_, _NO_, _NO_, _NO_, _NO_, _NO_,
		  _NO_, _NO_, _NO_, KC_MS_UP, _NO_, _NO_, _NO_,
		  _NO_, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, _NO_, _NO_,
		  _NO_, _NO_, KC_MS_BTN4, KC_MS_BTN3, KC_MS_BTN5, _NO_, _NO_,
		  ____, ____, ____, ____, ____,

		  KC_MS_ACCEL2, ____,
		  KC_MS_ACCEL1,
		  KC_MS_ACCEL0, KC_MS_BTN2, KC_MS_BTN1),



   [LAYER_NAV_KEYS] =
   LAYOUT_ergodox(_NO_, _NO_, KC_PAUSE, KC_SCROLLLOCK, KC_PSCREEN, _NO_, ____,
		  _NO_, _NO_, KC_HOME, KC_UP, KC_END, _NO_, _NO_,
		  _NO_, _NO_, KC_LEFT, KC_DOWN, KC_RIGHT, _NO_,
		  _NO_, _NO_, KC_PASTE, KC_COPY, KC_CUT, _NO_, _NO_,
		  ____, ____, ____, ____, ____,

		  ____, ____,
		  ____,
		  ____, ____, ____,


		  ____, _NO_, KC_PSCREEN, KC_SCROLLLOCK, KC_PAUSE, _NO_, _NO_,
		  _NO_, _NO_, KC_HOME, KC_UP, KC_END, _NO_, _NO_,
		  _NO_, KC_LEFT, KC_DOWN, KC_RIGHT, _NO_, _NO_,
		  _NO_, _NO_, KC_CUT, KC_COPY, KC_PASTE, _NO_, _NO_,
		  ____, ____, ____, ____, ____,

		  ____, ____,
		  ____,
		  ____, ____, ____),



   [LAYER_NAV_KEYS_DUAL] =
   LAYOUT_ergodox(____, ____, ____, ____, ____, ____, ____,
		  ____, ____, ____, ____, ____, ____, ____,
		  ____, BP_ALGR, LGUI_T(KC_LEFT), LALT_T(KC_DOWN), LCTL_T(KC_RIGHT), ____,
		  ____, ____, ____, ____, ____, ____, ____,
		  ____, ____, ____, ____, ____,

		  ____, ____,
		  ____,
		  ____, ____, ____,


		  ____, ____, ____, ____, ____, ____, ____,
		  ____, ____, ____, ____, ____, ____, ____,
		  ____, RCTL_T(KC_LEFT), LALT_T(KC_DOWN), RGUI_T(KC_RIGHT), BP_ALGR, ____,
		  ____, ____, ____, ____, ____, ____, ____,
		  ____, ____, ____, ____, ____,

		  ____, ____,
		  ____,
		  ____, ____, ____)


  };

uint32_t layer_state_set_user(uint32_t state) {
  state = update_tri_layer_state(state, LAYER_BEPO_BASE_DUAL, LAYER_NAV_KEYS, LAYER_NAV_KEYS_DUAL);
  state = update_tri_layer_state(state, LAYER_BEPO_BASE_DUAL, LAYER_FN_NUM_KEYS, LAYER_FN_NUM_KEYS_DUAL);
  return state;
}

void _update_leds(void) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  if(layer_state & (1UL << (LAYER_BEPO_BASE_DUAL))) {
    ergodox_right_led_1_on();
  }

  if(layer_state & (1UL << (LAYER_FN_NUM_KEYS))) {
    ergodox_right_led_2_on();
  }

  if(layer_state & (1UL << (LAYER_MOUSE_KEYS))) {
    ergodox_right_led_3_on();
  }

};

void matrix_scan_user(void) {
  _update_leds();
};
