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

  // Sett upp variable fyrir lengd til að keyra í mm
  int drive_distance = 500;
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  // Á meðan við höfum keyrt áfram minna en 2500mm eða 2,5m
  while(drive_distance < 2501){
    // keyra áfram 500mm eða 0,5m
    Drivetrain.driveFor(forward, drive_distance, mm);
    // Bakka 500mm eða 0,5m
    Drivetrain.driveFor(reverse, drive_distance, mm);
    drive_distance = drive_distance + 500;
  }

}
