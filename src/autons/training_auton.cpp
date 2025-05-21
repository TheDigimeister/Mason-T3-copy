#include "main.h"

ASSET(pathteststart_txt);

void training_auton(){
    //set up
    chassis.setPose(-58.606, -23.542, 100);
    intake.set_encoder_units_all(MOTOR_ENCODER_ROTATIONS);
    left.set_brake_mode_all(pros::motor_brake_mode_e::E_MOTOR_BRAKE_BRAKE);
    right.set_brake_mode_all(pros::motor_brake_mode_e::E_MOTOR_BRAKE_BRAKE);

    chassis.follow(pathteststart_txt,15,20000);

    // chassis.waitUntil(36);
    // set_intake_speed(127);

    // chassis.waitUntil(46);
    // set_intake_speed(0);

}