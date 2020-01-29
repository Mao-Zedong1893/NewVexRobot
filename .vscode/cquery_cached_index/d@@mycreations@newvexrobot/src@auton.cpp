//
// Created by mcque on 2020-01-20.
//
#include "auton.h"
#include "main.h"

void rotateCW(double goal) {
    pros::ADIGyro gyro (1);
    while (goal < gyro.get_value()) {
        motor
        pros::delay(20);
    }
}

void rotateCCW(double goal) {

}

void forward()  {

}

void reverse() {

}

void routine() {

}
