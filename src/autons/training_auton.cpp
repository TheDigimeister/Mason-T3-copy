#include "main.h"
#include "pros/rtos.hpp"
#include "ringSort.hpp"

ASSET(loop3_txt);

void training_auton(){
    //set up
    chassis.setPose(-58.606, -23.798, 90);
    intake.set_encoder_units_all(MOTOR_ENCODER_ROTATIONS);
    left.set_brake_mode_all(pros::motor_brake_mode_e::E_MOTOR_BRAKE_BRAKE);
    right.set_brake_mode_all(pros::motor_brake_mode_e::E_MOTOR_BRAKE_BRAKE);

    arm_move=false;

    chassis.follow(loop3_txt,30,20000);

    chassis.waitUntil(34);
    set_intake_speed(127);

    chassis.waitUntil(70);
    set_intake_speed(0);

    chassis.waitUntil(54.864);
    global_target=8000;
    pros::delay(3000);

    // chassis.waitUntil(20);
    global_target=100;
    pros::delay(3000);

}