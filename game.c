// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Joey Marcotte
// Created on: October 2019
// This program is the moving background program


#include <gb/gb.h>
#include "simplebackground.c"
#include "simplebackgroundmap.c"

void main() {
    set_bkg_data(0, 7, backgroundtiles);
    set_bkg_tiles(0, 0, 40, 18, backgroundmap);

    SHOW_BKG;
    DISPLAY_ON;

    while (1) {
        scroll_bkg(1, 0);
        delay(100);
    }
}
