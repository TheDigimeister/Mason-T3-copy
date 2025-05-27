#include "main.h"

void PID_test() {

    chassis.setPose(lemlib::Pose(0, 0, 0)); // Reset the pose to (0, 0, 0)
    // // Angular PID test
    // chassis.turnToHeading(90, 10000);
    // chassis.turnToHeading(180, 10000);
    // chassis.turnToHeading(270, 10000);
    // chassis.turnToHeading(360, 10000);

    // Lateral PID test
    // chassis.moveDistance(24, 100000, {.maxSpeed=50});
    chassis.moveToPoint(0, 24, 100000, {.maxSpeed=50});

    pros::delay(500);
}