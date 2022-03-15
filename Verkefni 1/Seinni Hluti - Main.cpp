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
// Fall til að beygja til hægri og keyra 500mm eða 0,5m
void haegri(){
  Drivetrain.turnFor(right, 90, degrees);
  Drivetrain.driveFor(forward, 500, mm);
}
// Fall til að beygja til vinstri og keyra 500mm eða 0,5m
void vinstri(){
  Drivetrain.turnFor(left, 90, degrees);
  Drivetrain.driveFor(forward, 500, mm);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
  // Keyra áfram 500mm eða 0,5m
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
