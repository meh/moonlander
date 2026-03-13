#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MO(1),          KC_Q,           KC_D,           KC_R,           KC_W,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_F,           KC_U,           KC_P,           UK_QUOT,        MO(2),          
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_H,           KC_T,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_Y,           KC_N,           KC_E,           KC_O,           KC_I,           KC_RIGHT_SHIFT, 
    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_M,           KC_C,           KC_V,                                           UK_DQUO,        KC_K,           KC_L,           UK_COMM,        UK_DOT,         KC_RIGHT_ALT,   
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_GUI,    LT(1, KC_CAPS), MO(3),                                                                                                          MO(3),          LT(2, KC_CAPS), KC_RIGHT_GUI,   KC_TRANSPARENT, KC_TRANSPARENT, KC_ESCAPE,      
    KC_SPACE,       KC_TAB,         KC_INSERT,                      KC_DELETE,      KC_BSPC,        KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, UK_HASH,        UK_DLR,         KC_PIPE,        UK_AMPR,        UK_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_TRANSPARENT, 
    KC_TRANSPARENT, UK_PLUS,        KC_GRAVE,       KC_EQUAL,       UK_BSLS,        UK_SLSH,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, UK_ASTR,        UK_CIRC,        UK_QUES,        UK_EXLM,        UK_TILD,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCR,                                                                                                        KC_PSCR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_EQUAL,    KC_KP_SLASH,    KC_KP_ASTERISK, KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, UK_LABK,        UK_RABK,        UK_LPRN,        UK_RPRN,        KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_MINUS,    KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_DOT,         KC_TRANSPARENT, 
    KC_TRANSPARENT, UK_LBRC,        UK_RBRC,        UK_LCBR,        UK_RCBR,        KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_KP_PLUS,     KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_ENTER,    KC_TRANSPARENT, 
    KC_TRANSPARENT, UK_COLN,        UK_SCLN,        UK_UNDS,        KC_MINUS,       KC_NO,                                          KC_NO,          KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,                                                                                                        QK_BOOT,        KC_TRANSPARENT, KC_KP_0,        KC_TRANSPARENT, KC_TRANSPARENT, KC_NUM,         
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_VAD,                        RGB_VAI,        KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F6,                                          KC_F7,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MO(6),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_0),                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_0,           KC_9,           KC_8,           KC_7,           KC_6,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, UK_SCLN,        KC_P,           UK_U,           KC_F,           KC_J,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, UK_QUOT,        KC_I,           KC_E,           KC_N,           KC_Y,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, UK_DOT,         UK_COMM,        KC_L,           KC_K,           KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_ENTER,       KC_BSPC,        KC_PSCR,                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};





extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,102}, {0,255,119}, {0,255,119}, {0,255,119}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,0,0}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,0,0}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,119}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,0,102}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,119}, {0,255,119}, {0,255,119}, {0,0,102}, {0,0,0}, {0,0,102}, {0,255,119}, {0,255,119}, {0,255,119}, {0,0,0}, {0,255,119}, {0,255,170}, {0,255,119}, {0,0,0}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,119}, {0,0,0}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,119}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,0,102}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,119}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,119}, {0,255,119}, {0,255,119}, {0,0,102} },

    [1] = { {0,0,0}, {0,0,102}, {0,255,119}, {0,255,119}, {0,255,119}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,0,0}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,0,0}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,119}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,0,102}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,119}, {0,255,119}, {0,255,119}, {0,255,255}, {0,0,0}, {0,0,102}, {0,255,119}, {0,255,119}, {0,255,119}, {0,0,0}, {0,255,170}, {0,0,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,170}, {0,0,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,170}, {0,0,204}, {0,0,0}, {0,255,119}, {0,0,0}, {0,255,170}, {0,0,204}, {0,0,0}, {0,0,102}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,119}, {0,255,119}, {0,255,119}, {0,255,255} },

    [2] = { {0,0,0}, {0,0,102}, {0,255,119}, {0,255,119}, {0,255,119}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,0,0}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,0,0}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,119}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,102}, {0,0,102}, {0,245,245}, {0,255,255}, {0,0,0}, {0,0,102}, {0,255,119}, {0,255,119}, {0,255,119}, {0,0,0}, {0,255,119}, {0,255,119}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,170}, {0,255,170}, {0,255,170}, {0,0,0}, {0,255,119}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,119}, {0,255,170}, {0,255,170}, {0,255,170}, {0,0,102}, {0,255,119}, {0,255,119}, {0,255,119}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,102}, {0,0,102}, {74,255,255}, {0,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,93}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,93}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,93}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,93}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,93}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,93}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {247,52,217}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,93}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,93}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,93}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,93}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,93}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,93}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {247,52,217} },

    [4] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255} },

    [5] = { {0,0,0}, {0,0,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

extern RGB webhid_leds[RGB_MATRIX_LED_COUNT];

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    RGB rgb;
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
      rgb = webhid_leds[i];
      if (rgb.r || rgb.g || rgb.b) {
        continue;
      }

      rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
      rgb = hsv_to_rgb_with_value(hsv);
      rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_HOLD: layer_move(0); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}

