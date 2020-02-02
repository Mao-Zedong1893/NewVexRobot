//
// Created by mcque on 2020-01-29.
//

#include "globals.h"
#include "api.h"
#include "main.h"

pros::Controller master(pros::E_CONTROLLER_MASTER);
pros::Motor leftFront(1);
pros::Motor leftBack(2);
pros::Motor rightFront(3);
pros::Motor rightBack(4);

pros::ADIGyro gyro(1);
