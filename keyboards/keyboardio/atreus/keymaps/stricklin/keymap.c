// Copyright (C) 2019, 2020  Keyboard.io, Inc
//
// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

#define KC_UNDO  LCTL(KC_Z)
#define KC_CUT   LCTL(KC_X)
#define KC_COPY  LCTL(KC_C)
#define KC_PASTE LCTL(KC_V)
#define KC_REDO  LCTL(KC_Y)

enum layer_names {
    COLEMAK,
    NAV,
    MSE,
    BTN,
    MED,
    NUM,
    SYM,
    FUN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [COLEMAK] = LAYOUT( /* Colemak */
    KC_Q,         KC_W,         KC_F,         KC_P,            KC_G,                                                  KC_J,            KC_L,             KC_U,         KC_Y,         KC_SCLN,
    LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T),    KC_D,                                                  KC_H,            RSFT_T(KC_N),     RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O),
    KC_Z,         KC_X,         KC_C,         KC_V,            KC_B,              KC_GRV,            KC_BSLS,         KC_K,            KC_M,             KC_COMM,      KC_DOT,       KC_SLSH,
    KC_LCTL,      KC_TAB,       MO(NAV),      LT(FUN, KC_DEL), LT(NUM, KC_BSPC),  LT(SYM, KC_ENT),   LT(MSE, KC_TAB), LT(NAV, KC_SPC), LT(MED, KC_ESC),  MO(FUN),      LM(FUN, MOD_LSFT),      XXXXXXX ),

  [NAV] = LAYOUT( /* Navigation */
    KC_PGUP,      KC_HOME,      KC_UP,        KC_END,          KC_INS,                                                XXXXXXX,         XXXXXXX,          XXXXXXX,      XXXXXXX,      XXXXXXX,
    KC_PGDN,      KC_LEFT,      KC_DOWN,      KC_RGHT,         KC_CAPS,                                               XXXXXXX,         KC_RSFT,          KC_RCTL,      KC_RALT,      KC_RGUI,
    KC_UNDO,      KC_CUT,       KC_COPY,      KC_PSTE,         XXXXXXX,           XXXXXXX,            XXXXXXX,        XXXXXXX,         XXXXXXX,          XXXXXXX,      XXXXXXX,      XXXXXXX,
    KC_ESC,       XXXXXXX,      _______,      KC_DEL,          KC_BSPC,           KC_ENT,             XXXXXXX,        _______,         XXXXXXX,          XXXXXXX,      XXXXXXX,      XXXXXXX ),

  [MSE] = LAYOUT( /* Mouse */
    KC_WH_U,      KC_WH_L,      KC_MS_U,      KC_WH_R,         KC_INS,                                                XXXXXXX,         XXXXXXX,          XXXXXXX,      XXXXXXX,      XXXXXXX,
    KC_WH_D,      KC_MS_L,      KC_MS_D,      KC_MS_R,         KC_CAPS,                                               XXXXXXX,         KC_RSFT,          KC_RCTL,      KC_RALT,      KC_RGUI,
    KC_UNDO,      KC_CUT,       KC_COPY,      KC_PSTE,         KC_REDO,           XXXXXXX,            XXXXXXX,        XXXXXXX,         XXXXXXX,          XXXXXXX,      XXXXXXX,      XXXXXXX,
    KC_ESC,       XXXXXXX,      XXXXXXX,      KC_MS_BTN2,      KC_MS_BTN3,        KC_MS_BTN1,         _______,        XXXXXXX,         XXXXXXX,          XXXXXXX,      XXXXXXX,      XXXXXXX ),

  [BTN] = LAYOUT( /* Button */
    KC_WH_U,      KC_WH_L,      KC_MS_U,      KC_WH_R,         KC_INS,                                                XXXXXXX,         XXXXXXX,          XXXXXXX,      XXXXXXX,      XXXXXXX,
    KC_WH_D,      KC_MS_L,      KC_MS_D,      KC_MS_R,         KC_CAPS,                                               XXXXXXX,         KC_RSFT,          KC_RCTL,      KC_RALT,      KC_RGUI,
    KC_UNDO,      KC_CUT,       KC_COPY,      KC_PSTE,         KC_REDO,           XXXXXXX,            XXXXXXX,        XXXXXXX,         XXXXXXX,          XXXXXXX,      XXXXXXX,      XXXXXXX,
    KC_ESC,       XXXXXXX,      XXXXXXX,      KC_MS_BTN2,      KC_MS_BTN3,        KC_MS_BTN1,         _______,        XXXXXXX,         XXXXXXX,          XXXXXXX,      XXXXXXX,      XXXXXXX ),

  [MED] = LAYOUT( /* Media */
    KC_BRIU,      XXXXXXX,      KC_VOLU,      XXXXXXX,         XXXXXXX,                                               XXXXXXX,         XXXXXXX,          XXXXXXX,      XXXXXXX,      XXXXXXX,
    KC_BRID,      KC_MPRV,      KC_VOLD,      KC_MNXT,         XXXXXXX,                                               XXXXXXX,         KC_RSFT,          KC_RCTL,      KC_RALT,      KC_RGUI,
    KC_UNDO,      KC_CUT,       KC_COPY,      KC_PSTE,         KC_REDO,           XXXXXXX,            XXXXXXX,        XXXXXXX,         XXXXXXX,          XXXXXXX,      XXXXXXX,      XXXXXXX,
    KC_ESC,       XXXXXXX,      XXXXXXX,      KC_MUTE,         KC_MPLY,           KC_MSTP,            XXXXXXX,        XXXXXXX,         _______,          XXXXXXX,      XXXXXXX,      XXXXXXX ),

  [NUM] = LAYOUT( /* Number */
    XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,         XXXXXXX,                                               KC_LBRC,         KC_7,             KC_8,         KC_9,         KC_RBRC,
    KC_LGUI,      KC_LALT,      KC_LCTL,      KC_LSFT,         XXXXXXX,                                               KC_EQL,          KC_4,             KC_5,         KC_6,         KC_QUOT,
    XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,         XXXXXXX,           XXXXXXX,            XXXXXXX,        KC_BSLS,         KC_1,             KC_2,         KC_3,         KC_GRV,
    KC_ESC,       XXXXXXX,      XXXXXXX,      XXXXXXX,         _______,           XXXXXXX,            KC_MINS,        KC_0,            KC_DOT,           XXXXXXX,      XXXXXXX,      XXXXXXX ),

  [SYM] = LAYOUT( /* Symbols */
    XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,         XXXXXXX,                                               KC_LCBR,         KC_AMPR,           KC_ASTR,      KC_LPRN,      KC_RCBR,
    KC_LGUI,      KC_LALT,      KC_LCTL,      KC_LSFT,         XXXXXXX,                                               KC_PLUS,         KC_DLR,            KC_PERC,      KC_CIRC,      KC_DQUO,
    XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,         XXXXXXX,           XXXXXXX,            XXXXXXX,        KC_PIPE,         KC_EXLM,           KC_AT,        KC_HASH,      KC_TILD,
    KC_ESC,       XXXXXXX,      XXXXXXX,      XXXXXXX,         XXXXXXX,           _______,            KC_UNDS,        KC_LPRN,         KC_RPRN,           XXXXXXX,      XXXXXXX,      XXXXXXX ),
 
  [FUN] = LAYOUT( /* Function */
    XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,         XXXXXXX,                                               KC_PSCR,         KC_F7,             KC_F8,         KC_F9,       KC_F12,
    KC_LGUI,      KC_LALT,      KC_LCTL,      KC_LSFT,         XXXXXXX,                                               KC_SCRL,         KC_F4,             KC_F5,         KC_F6,       KC_F11,
    XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,         XXXXXXX,           XXXXXXX,            XXXXXXX,        KC_BRK,          KC_F1,             KC_F2,         KC_F3,       KC_F10,
    KC_ESC,       XXXXXXX,      XXXXXXX,      _______,         XXXXXXX,           XXXXXXX,            KC_TAB,         KC_SPC,          KC_APP,            _______,       _______,     XXXXXXX )
};
