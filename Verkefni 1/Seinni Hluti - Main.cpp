/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Wed Sep 25 2019                                           */
/*    Description:  Turning Right (degrees)                                   */
/*                                                                            */
/*    This program turns the robot 90 degrees to the right                    */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    3, 4            
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;
void haegri(){
  Drivetrain.turnFor(right, 90, degrees);
  Drivetrain.driveFor(forward, 500, mm);
}
void vinstri(){

  Drivetrain.turnFor(left, 90, degrees);
  Drivetrain.driveFor(forward, 500, mm);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  // turns the robot right 90 degrees

  Drivetrain.driveFor(forward, 500, mm);
  haegri();
  vinstri();
  vinstri();
  haegri();
  haegri();
  vinstri();
  haegri();
  haegri();
  vinstri();
  haegri();
  haegri();
  vinstri();
  vinstri();
  haegri();
}
