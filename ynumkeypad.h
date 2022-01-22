// Copyright 2022 QFFS (@QFFS)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k00, k01, k02, K03, K04, \
    k10, k11, K12, k13, k14, \
    k20, k21, K22, k23, k24, \
    K30, K31, K32 \
) { \
    { k00, k01, k02, K03, K04 }, \
    { k10, k11, K12, k13, k14 },  \
    { k20, k21, K22, k23, k24 },  \
    { K30, K31, K32, KC_NO, KC_NO}  \
}
