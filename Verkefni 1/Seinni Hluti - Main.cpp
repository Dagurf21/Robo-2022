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

int main() {
  vexcodeInit();
  Drivetrain.setDriveVelocity(50,rpm);
  Drivetrain.setTurnVelocity(50,rpm);
  Drivetrain.driveFor(forward, 500, mm);
  
  bool listi[14] ={1,0,0,1,1,0,1,1,0,1,1,1,0,0};

  for(int i =0;i<14;1++){
    Drivetrain.driveFor(forward, 500, mm);
    if (listi[i] == 0){
      Drivetrain.turnFor(left, 90, degrees);
    }
    else;
      Drivetrain.turnFor(right, 90, degrees);
  }
    Drivetrain.driveFor(forward, 500, mm);


