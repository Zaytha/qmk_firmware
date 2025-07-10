#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3
#define _OH 4
#define _OHRAISE 5

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
  WINMOVEL,
  WINMOVER,
  WORD_L,
  WORD_R,
  SEL_L,
  SEL_R,
  S_WORD_L,
  S_WORD_R,
  S_LINE_L,
  S_LINE_R,
  S_LINE_U,
  S_LINE_D,
  VRCDEBUG,
  DEBUGTEST,
  OH,
  OHRAISE
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_NUM,          KC_PDOT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LALT,  LOWER,   KC_SPC,                    KC_ENT,  RAISE,   KC_RGUI
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_GRV,   KC_6,    KC_7,   KC_8,    KC_9,    KC_0,                              KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  _______,  _______, _______,  _______, _______,                            _______,  KC_P7,   KC_P8,   KC_P9,   _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, KC_LBRC,                           KC_RBRC, KC_P4,   KC_P5,   KC_P6,   KC_EQL, KC_PIPE,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, WINMOVEL, WINMOVER, _______, KC_LCBR, _______,          _______, KC_RCBR, KC_P1,   KC_P2,   KC_P3,  KC_MINS, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, KC_PSCR,                    _______, _______, KC_P0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, S_WORD_L, SEL_L,   SEL_R,  S_WORD_R, KC_PGUP,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_CAPS,  WORD_L, KC_HOME,  KC_END,  WORD_R, KC_PGDN,                            KC_PIPE,  KC_PLUS, KC_EQL,  KC_UNDS, KC_MINS, KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, S_LINE_L,S_LINE_U,S_LINE_D,S_LINE_R, _______, _______,          _______, KC_PLUS, KC_LCBR,  KC_RCBR, KC_LBRC, KC_RBRC, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_OH] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_F,    KC_D,    KC_N,    KC_I,    KC_G,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_S,    KC_T,    KC_H,    KC_E,    KC_O,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_C,    KC_W,    KC_R,    KC_A,    KC_U,    _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LALT, MO(_OHRAISE),KC_SPC,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_OHRAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,    KC_6,    KC_7,   KC_8,     KC_9,   KC_0,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_BSPC,   KC_J,    KC_K,    KC_M,  KC_QUOT,  KC_MINS,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,    KC_Y,    KC_P,    KC_L,   KC_DOT,   KC_Q,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______,   KC_X,    KC_B,    KC_V,   KC_COMM,  KC_Z,   _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______,  KC_ENT,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘

  ),[_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;



    
	case WINMOVEL:
      if (record->event.pressed) {
        register_code(KC_LGUI);
		register_code(KC_LSFT);
		register_code(KC_LEFT);
      } else {
        unregister_code(KC_LGUI);
		unregister_code(KC_LSFT);
		unregister_code(KC_LEFT);
      }
      return false;
      break;
	case WINMOVER:
      if (record->event.pressed) {
        register_code(KC_LGUI);
		register_code(KC_LSFT);
		register_code(KC_RIGHT);
      } else {
        unregister_code(KC_LGUI);
		unregister_code(KC_LSFT);
		unregister_code(KC_RIGHT);
      }
      return false;
      break;

      

      // Move by word -----------------------
      case WORD_L:
      if (record->event.pressed) {
		register_code(KC_LCTL);
		register_code(KC_LEFT);
      } else {
        unregister_code(KC_LCTL);
		unregister_code(KC_LEFT);
      }
      return false;
      break;

      case WORD_R:
      if (record->event.pressed) {
		register_code(KC_RCTL);
		register_code(KC_RGHT);
      } else {
        unregister_code(KC_RCTL);
		unregister_code(KC_RGHT);
      }
      return false;
      break;

      // Select Letter -----------------------
      case SEL_L:
      if (record->event.pressed) {
        register_code(KC_LSFT);
		register_code(KC_LEFT);
      } else {
        unregister_code(KC_LSFT);
		unregister_code(KC_LEFT);
      }
      return false;
      break;

      case SEL_R:
      if (record->event.pressed) {
        register_code(KC_RSFT);
		register_code(KC_RGHT);
      } else {
        unregister_code(KC_RSFT);
		unregister_code(KC_RGHT);
      }
      return false;
      break;

      // Select Word -----------------------
      case S_WORD_L:
      if (record->event.pressed) {
		register_code(KC_LCTL);
        register_code(KC_LSFT);
		register_code(KC_LEFT);
      } else {
        unregister_code(KC_LCTL);
        unregister_code(KC_LSFT);
		unregister_code(KC_LEFT);
      }
      return false;
      break;

      case S_WORD_R:
      if (record->event.pressed) {
		register_code(KC_RCTL);
        register_code(KC_RSFT);
		register_code(KC_RGHT);
      } else {
        unregister_code(KC_RCTL);
        unregister_code(KC_RSFT);
		unregister_code(KC_RGHT);
      }
      return false;
      break;

      // Select Line -----------------------
    case S_LINE_L:
      if (record->event.pressed) {
        register_code(KC_LSFT);
		register_code(KC_HOME);
      } else {
        unregister_code(KC_LSFT);
		unregister_code(KC_HOME);
      }
      return false;
      break;

      case S_LINE_R:
      if (record->event.pressed) {
        register_code(KC_RSFT);
		register_code(KC_END);
      } else {
        unregister_code(KC_RSFT);
		unregister_code(KC_END);
      }
      return false;
      break;


      case S_LINE_U:
      if (record->event.pressed) {
		register_code(KC_RCTL);
        register_code(KC_RSFT);
		register_code(KC_UP);
      } else {
        unregister_code(KC_RCTL);
        unregister_code(KC_RSFT);
		unregister_code(KC_UP);
      }
      return false;
      break;

      case S_LINE_D:
      if (record->event.pressed) {
		register_code(KC_RCTL);
        register_code(KC_RSFT);
		register_code(KC_DOWN);
      } else {
        unregister_code(KC_RCTL);
        unregister_code(KC_RSFT);
		unregister_code(KC_DOWN);
      }
      return false;
      break;

   case VRCDEBUG:
      if (record->event.pressed) {
        register_code(KC_RSFT);
		register_code(KC_GRV);
      } else {
        unregister_code(KC_RSFT);
		unregister_code(KC_GRV);
      }
      return false;
      break;
	case DEBUGTEST:
      if (record->event.pressed) {
        SEND_STRING("TestString");
      } else {
		//
      }
      return false;
      break;
  }
  return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
			//Undo
            // register_code(KC_LCTL);
			// register_code(KC_Y);
			// unregister_code(KC_LCTL);
			// unregister_code(KC_Y);

			//FrameBackward
			register_code(KC_RIGHT);
			unregister_code(KC_RIGHT);
        } else {
			//Redo
			// register_code(KC_LCTL);
			// register_code(KC_Z);
			// unregister_code(KC_LCTL);
			// unregister_code(KC_Z);

			//FrameFoward
			register_code(KC_LEFT);
			unregister_code(KC_LEFT);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return false;
}




//qmk compile
//qmk flash