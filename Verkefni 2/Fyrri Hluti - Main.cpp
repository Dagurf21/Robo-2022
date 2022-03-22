/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\dagur                                            */
/*    Created:      Tue Mar 22 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    3, 4            
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int userThread()
{
   while(1) // main loop
   {

    vexcodeInit();
    Drivetrain.setDriveVelocity(50,rpm);
    Drivetrain.setTurnVelocity(50,rpm);
    Drivetrain.driveFor(forward, 500, mm);
    
    bool listi[14] ={1,0,0,1,1,0,1,1,0,1,1,1,0,0};

    for(int i =0;i<14;i++){
      Drivetrain.driveFor(forward, 500, mm);
      if (listi[i] == 0){
        Drivetrain.turnFor(left, 90, degrees);
      }
      else;
        Drivetrain.turnFor(right, 90, degrees);
    }
      Drivetrain.driveFor(forward, 500, mm);
      this_thread::sleep_for( 10 );
    }
}

int main()
{
    vex::thread ut(userThread);

    while(1) // emergency stop loop
    {
      if( BumperA || Controller1.ButtonA.pressing())
      {
            ut.interrupt();  // stop user thread
            return 0;
      }
      this_thread::sleep_for( 10 );
    }
