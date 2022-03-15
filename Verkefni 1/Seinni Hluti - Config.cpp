/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Wed Sep 25 2019                                           */
/*    Description:  Moving Forward (mm)                                       */
/*                                                                            */
/*    This Program drives the robot forward for 150 millimeters.              */
/*                                                                            */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    3, 4            
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {

  int drive_distance = 500;
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  while(drive_distance < 2501){
    Drivetrain.driveFor(forward, drive_distance, mm);
    Drivetrain.driveFor(reverse, drive_distance, mm);
    drive_distance = drive_distance + 500;
  }

}
