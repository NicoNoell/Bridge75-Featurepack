// Copyright 2025 emolitor (github.com/emolitor)
// Copyright 2024 Wind (@yelishang)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    WIN_B,
    WIN_FN,
    WIN_SMB, // for hard to reach symbols
    WIN_NAV, // for navigation 
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [WIN_B] = LAYOUT_iso(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                    KC_DEL,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_INT3, KC_BSPC, KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,                   KC_PGUP,
        LT(WIN_SMB, KC_BSPC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,           KC_PGDN,
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             MO(WIN_NAV), MO(WIN_FN),       KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [WIN_FN] = LAYOUT_iso(
        EE_CLR,  KC_BRID, KC_BRIU, KC_MCTL, KC_LPAD, KC_F5,   KC_F6,   KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,                   KC_NO,
        KC_USB,  LT(0, KC_BT1),  LT(0, KC_BT2),  LT(0, KC_BT3),  LT(0, KC_2G4),  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_NO,
        KC_NO, RGB_SPI, RGB_SPD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,          KC_NO,
        KC_NO, KC_NO, RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_NO,          KC_NO, KC_NO, KC_NO,
        KC_NO, LT(0, KC_NO), KC_NO,                       KC_NO,                            KC_NO, KC_NO,          KC_NO, KC_NO, KC_NO
    ),

    [WIN_SMB] = LAYOUT_iso(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_NO,
        S(KC_GRV), S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), S(KC_MINS), S(KC_EQL), KC_NO, KC_BSPC, KC_NO,
        KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, S(KC_RBRC),                   KC_NO,
        KC_NO, S(KC_7), RALT(KC_MINS), RALT(KC_7), RALT(KC_0), S(KC_1), S(KC_MINS), S(KC_8), S(KC_9), RALT(KC_8), RALT(KC_9), S(KC_0), S(KC_NUHS), KC_ENT,          KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, S(KC_2), S(KC_NUHS), S(KC_COMM), S(KC_DOT), S(KC_SLSH),          KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO,                            KC_NO,                            C(KC_BSPC), KC_NO,          KC_NO, KC_NO, KC_NO
    ),

    [WIN_NAV] = LAYOUT_iso(
        KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_NO,
        KC_NO, KC_NO, RALT(KC_2), RALT(KC_3), KC_NO, KC_NO, KC_NO, RALT(KC_7), RALT(KC_8), RALT(KC_9), RALT(KC_0), RALT(KC_MINS), KC_NO, KC_NO, KC_BSPC, KC_NO,
        KC_TAB, RALT(KC_Q), KC_TAB, RALT(KC_E), KC_LALT, KC_NO, KC_NO, C(KC_A), KC_UP, KC_DEL, KC_NO, KC_NO, RALT(KC_RBRC),                   KC_NO,
        C(KC_BSPC), C(KC_C), C(KC_V), KC_LSFT, KC_LCTL, C(KC_Y), C(KC_Z), KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, KC_NO, KC_NO, KC_ENT,          KC_NO,
        KC_LSFT, RALT(KC_NUBS), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT, KC_HOME, KC_END, KC_NO,          KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO,                            KC_NO,                            KC_NO, KC_NO,          KC_NO, KC_NO, KC_NO
    )
};
// clang-format on
