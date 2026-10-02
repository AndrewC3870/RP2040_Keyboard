#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_ortho_5x13(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,      KC_UP,   KC_Y,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,      KC_DOWN, KC_A,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT,    KC_LEFT, KC_X,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,   KC_RGHT, KC_B,
        KC_LCTL, KC_LGUI, KC_LALT, MO(_FN), KC_SPC,  KC_SPC,  KC_SPC,  KC_BSPC, KC_MINS, KC_EQL,  KC_LBRC,   KC_PGUP, KC_PGDN 
    ),
    
    [_FN] = LAYOUT_ortho_5x13(
        KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,   KC_UP,   _______,
        KC_TILD, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,    KC_C,    _______,
        _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______, KC_SCLN, KC_LCBR, KC_RCBR,   KC_F3,   _______,
        _______, _______, _______, _______, _______, _______, KC_LT,   KC_GT,   KC_COLN, KC_PIPE, KC_QUES,   KC_LSFT, _______,
        QK_BOOT, QK_REBOOT, _______, _______, _______, _______, _______, KC_DEL,  KC_UNDS, KC_PLUS, KC_RBRC,   _______, _______
    ),
};