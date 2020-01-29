/*
Made by: TanishSh 29/01/2020
*/
#include "main.h"
#include "globals.hpp"
//motors
//drive motors
pros::Motor leftFront(9,MOTOR_GEARSET_18,false,MOTOR_ENCODER_COUNTS);
pros::Motor leftBack(2,MOTOR_GEARSET_18,false,MOTOR_ENCODER_COUNTS);
pros::Motor rightFront(10,MOTOR_GEARSET_18,true,MOTOR_ENCODER_COUNTS);
pros::Motor rightBack(7,MOTOR_GEARSET_18,true,MOTOR_ENCODER_COUNTS);
// intake motors
pros::Motor leftIntake(5,MOTOR_GEARSET_18, true,MOTOR_ENCODER_COUNTS);
pros::Motor rightIntake(8,MOTOR_GEARSET_18, false,MOTOR_ENCODER_COUNTS);
// arm motor
pros::Motor arm(1, MOTOR_GEARSET_18, false, MOTOR_ENCODER_COUNTS);
// angleAdjuster motor
pros::Motor tilter(6,MOTOR_GEARSET_36, false,MOTOR_ENCODER_COUNTS);
//controller
pros::Controller master(CONTROLLER_MASTER);

#include "globals.h"
#include "api.h"
#include "main.h"

pros::Controller master(pros::E_CONTROLLER_MASTER);
pros::Motor leftFront(1);
pros::Motor leftBack(2);
pros::Motor rightFront(3);
pros::Motor rightBack(4);

pros::ADIGyro gyro(1);
