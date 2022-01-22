// Copyright 2022 QFFS (@QFFS)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        TG(_FN),     KC_P7,    KC_P8,    KC_P9,   KC_PSLS,
        KC_P4,      KC_P5,    KC_P6,   KC_PAST, KC_PPLS,
        KC_P1,      KC_P2,    KC_P3,   KC_PMNS, KC_PENT,
        KC_P0,      KC_PDOT,  KC_NUM
    ),
    [_FN] = LAYOUT(
        KC_TRNS,     KC_F5,    KC_F10,    KC_NO,   KC_NO,
        KC_NO,      KC_NO,    KC_NO,   KC_NO, KC_NO,
        KC_C,      KC_V,    KC_NO,   KC_NO, KC_NO,
        KC_LEFT_CTRL,      KC_NO,    KC_NO
    )
};

bool encoder_update_user(uint8_t index, bool clockwise)
{
    if(clockwise){
      tap_code(KC_AUDIO_VOL_UP);
    }else{
      tap_code(KC_AUDIO_VOL_DOWN);
    }
    return true;
}