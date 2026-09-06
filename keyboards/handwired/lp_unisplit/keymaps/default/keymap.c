// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _LEFT,
    _RIGHT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * BASE Layer - Home row mods on ASDF and JKL;
     * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │ ` │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │Tab│ A │Ctl│Alt│Gui│ G │       │ H │Gui│Alt│Ctl│ ; │ ' │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │ - │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │ \ │
     * └───┴───┴───┴───┼───┼───┼───┬───┼───┼───┼───┴───┴───┴───┘
     *                 │Esc│Sft│Lft│Rgt│Ent│^B │
     *                 └───┴───┴───┴───┴───┴───┘
     */
    [_BASE] = LAYOUT_14x4(
        KC_GRV,  KC_Q,    KC_W,        KC_E,        KC_R,        KC_T,                                KC_Y,    KC_U,        KC_I,        KC_O,         KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    LCTL_T(KC_S),LALT_T(KC_D),LGUI_T(KC_F),KC_G,                                KC_H,    RGUI_T(KC_J),RALT_T(KC_K),RCTL_T(KC_L), KC_SCLN, KC_QUOT,
        KC_MINS, KC_Z,    KC_X,        KC_C,        KC_V,        KC_B,                                KC_N,    KC_M,        KC_COMM,     KC_DOT,       KC_SLSH, KC_BSLS,
                                                    KC_ESC,      LSFT_T(KC_SPC),MO(_LEFT), MO(_RIGHT),KC_ENT,  C(KC_B)
    ),

    /*
     * LEFT Layer - Shifted symbols and special characters
     * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │ ~ │ ! │ @ │ # │ $ │ % │       │ ^ │ & │ * │ ( │ ) │   │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │   │   │ < │ = │ > │ ` │       │ [ │ { │ ( │ + │ : │ " │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │       │ ] │ } │ ) │ - │ ? │ | │
     * └───┴───┴───┴───┼───┼───┼───┬───┼───┼───┼───┴───┴───┴───┘
     *                 │   │   │   │   │   │   │
     *                 └───┴───┴───┴───┴───┴───┘
     */
    [_LEFT] = LAYOUT_14x4(
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                             KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
        _______, _______, KC_LT,   KC_EQL,  KC_GT,   KC_GRV,                              KC_LBRC, KC_LCBR, KC_LPRN, KC_PLUS, KC_COLN, KC_DQUO,
        _______, _______, _______, _______, _______, _______,                             KC_RBRC, KC_RCBR, KC_RPRN, KC_MINS, KC_QUES, KC_PIPE,
                                             _______, _______, _______, _______, _______, _______
    ),

    /*
     * RIGHT Layer - Numbers and vim navigation
     * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │   │ 1 │ 2 │ 3 │ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │   │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │       │ ← │ ↓ │ ↑ │ → │   │   │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │       │   │   │   │   │   │   │
     * └───┴───┴───┴───┼───┼───┼───┬───┼───┼───┼───┴───┴───┴───┘
     *                 │   │   │   │   │   │   │
     *                 └───┴───┴───┴───┴───┴───┘
     */
    [_RIGHT] = LAYOUT_14x4(
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, _______, _______, _______, _______, _______,                             KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
        _______, _______, _______, _______, _______, _______,                             _______, _______, _______, _______, _______, _______,
                                             _______, _______, _______, _______, _______, _______
    ),
};
