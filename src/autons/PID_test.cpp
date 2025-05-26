#include "main.h"

/**
 * Runs the recommended PID test motions: forward, backward, left turn, right turn,
 * and optionally a swing turn. This function assumes you have a `chassis` object
 * with `move` and `turn` methods, as is standard with lemlib setups.
 */
void PID_test() {

    // Angular PID test
    chassis.turnToHeading(90, 100000); // positive for right
    pros::delay(500);
}