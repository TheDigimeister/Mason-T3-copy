#include "main.h"

void training_auton(){
    //set up
    chassis.setPose(0, 0, 180);
    intake.set_encoder_units_all(MOTOR_ENCODER_ROTATIONS);
    left.set_brake_mode_all(pros::motor_brake_mode_e::E_MOTOR_BRAKE_BRAKE);
    right.set_brake_mode_all(pros::motor_brake_mode_e::E_MOTOR_BRAKE_BRAKE);

    // start new training auton here

    // chassis.moveDistance(10, 1000, {.forwards=true});
    // chassis.moveDistance(10, 1000, {.forwards=false});
    chassis.turnToHeading(90, 1000);
    chassis.moveToPoint(30.27, 56.12, 10000, {.forwards=false, .maxSpeed=40});
    chassis.moveToPoint(2.14, 1.06, 2000);
    chassis.turnToPoint(-65.28, 24.89, 2000);
    set_intake_speed(127);
    chassis.moveToPoint(-65.28,24.89,2000);


}