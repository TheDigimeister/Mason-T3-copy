#include "main.h"

void training_auton() {
    //set up
    chassis.setPose(0, 0, 0);
    intake.set_encoder_units_all(MOTOR_ENCODER_ROTATIONS);
    left.set_brake_mode_all(pros::motor_brake_mode_e::E_MOTOR_BRAKE_BRAKE);
    right.set_brake_mode_all(pros::motor_brake_mode_e::E_MOTOR_BRAKE_BRAKE);
    mogo.set_value(true);

    // start new training auton here

    chassis.moveToPoint(0, -27,3000,{.forwards = false,.maxSpeed=90});
    pros::delay(300);
    while(!mogo_seated() && chassis.isInMotion()) pros::delay(10);
    pros::delay(50);
    mogo.set_value(false);


    //1R+2R
    set_intake_speed(127,false);
    chassis.turnToPoint(0,-113,1000,{.minSpeed=5,.earlyExitRange=3});
    chassis.moveToPoint(0,-113,5000,{.minSpeed=5,.earlyExitRange=3});
    

    //345R
    chassis.turnToPoint(47.42,-109,1000,{.minSpeed=5,.earlyExitRange=3});
    chassis.moveToPoint(47.42,-109,5000,{.minSpeed=5,.earlyExitRange=3});
    
    chassis.turnToPoint(59,-6.66,1000,{.minSpeed=5,.earlyExitRange=3});
    chassis.moveToPoint(59,-6.66,5000,{.minSpeed=5,.earlyExitRange=3});


    chassis.turnToPoint(5,4.27,1000,{.minSpeed=5,.earlyExitRange=3});
    chassis.moveToPoint(5,4.27,5000,{.minSpeed=5,.earlyExitRange=3});

    chassis.waitUntil(45);
    mogo.set_value(true);


    chassis.turnToPoint(0,-113,1000,{.minSpeed=5,.earlyExitRange=3});

    chassis.follow("path.jerry001.txt", 15,20000)

    while(!mogo_seated() && chassis.isInMotion()) pros::delay(10);
    pros::delay(50);
    mogo.set_value(false);

    set_intake_speed(127);

    //back to 0,0



}




    


