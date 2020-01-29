//
// Created by mcque on 2020-01-20.
//
#include "main.h"
#include "tilter.h"
#include "globals.h"

#ifndef VEXROBOT_AUTON_H
#define VEXROBOT_AUTON_H

void routine();
void forward(double);
void reverse(double);
void rotateCW(double);
void rotateCCW(double);
double distanceCalc(double);

#endif //VEXROBOT_AUTON_H
