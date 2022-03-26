/* Copyright 2021 Yiancar-Designs
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
// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
    _FN1,
    _FN2
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
    ),
    [_FN1] = LAYOUT(
        KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,
        KC_TRNS,      KC_TRNS,    KC_TRNS,   KC_TRNS, KC_TRNS,
        KC_TRNS,      KC_TRNS,    KC_TRNS,   KC_TRNS, KC_TRNS,
        KC_TRNS,      KC_TRNS,    KC_TRNS
    ),
    [_FN2] = LAYOUT(
        KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,
        KC_TRNS,      KC_TRNS,    KC_TRNS,   KC_TRNS, KC_TRNS,
        KC_TRNS,      KC_TRNS,    KC_TRNS,   KC_TRNS, KC_TRNS,
        KC_TRNS,      KC_TRNS,    KC_TRNS
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

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("BASE\n"), false);
            break;
        case _FN:
            oled_write_P(PSTR("FN\n"), false);
            break;
        case _FN1:
            oled_write_P(PSTR("FN1\n"), false);
            break;
        case _FN2:
            oled_write_P(PSTR("FN2\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undefined"), false);
    }
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM LOCK") : PSTR("        "), false);
    return false;
}
#endif