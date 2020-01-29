//
// Created by mcque on 2020-01-28.
//
#include "tilter.h"
#include "main.h"

void tilterUp() {
    tilter.move(127);

    if (tilter.get_position() > 100) {
        tilter.move(0);
    }
}

void tilterDown() {
    tilter.move(-127);

    if (tilter.get_position() < 0) {
        tilter.move(0);
    }
}
