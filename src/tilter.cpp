/*
Made by: TanishSh 29/01/2020
*/
#include "main.h"
#include "globals.hpp"
#include "tilter.h"
void angleAdjuster(){
    if(master.get_digital(pros::controller_digital_e_t::E_CONTROLLER_DIGITAL_L2)){
        tilter.move(120);
    }else if(master.get_digital(pros::controller_digital_e_t::E_CONTROLLER_DIGITAL_L2)){
        tilter.move(-120);
    }
    else{
        tilter.move(0);
    }
}