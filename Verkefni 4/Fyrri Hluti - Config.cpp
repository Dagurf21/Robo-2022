#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    3, 4            
// LineTrackerC         line          C               
// LineTrackerD         line          D               
// LineTrackerE         line          E               
// Controller1          controller                    
// BumperA              bumper        A               
// ---- END VEXCODE CONFIGURED DEVICES ----

using namespace vex;
float LTLeft = 0;
float LTCenter = 0;
float LTRight = 0;
float threshold = 30;

float LTLeftOld = 0;
float LTCenterOld = 0;
float LTRightOld = 0;




int userThread(){
  while(1){
  vexcodeInit();
    Drivetrain.setDriveVelocity(7, rpm);
    Drivetrain.setTurnVelocity(7, rpm);
    Drivetrain.driveFor(forward, 100, mm);
    while(true){
      LTLeft = LineTrackerC.reflectivity();
      LTCenter = LineTrackerD.reflectivity();
      LTRight = LineTrackerE.reflectivity();
      Drivetrain.setDriveVelocity(7, rpm);
      Drivetrain.setTurnVelocity(7, rpm);

      if(LTLeft < threshold and LTCenter < threshold and LTRight < threshold){
        Drivetrain.drive(forward);
      }
      if(LTLeft < threshold and LTCenter < threshold and LTRight > threshold){
          Drivetrain.turn(left);
          Drivetrain.drive(forward);
      }
      if(LTLeft > threshold and LTCenter < threshold and LTRight < threshold){
          Drivetrain.turn(right);
          Drivetrain.drive(forward);
      }
      if(LTLeft < threshold and LTCenter > threshold and LTRight > threshold){
          Drivetrain.setTurnVelocity(20, rpm);
          Drivetrain.setDriveVelocity(10, rpm);          
          Drivetrain.turn(left);
          Drivetrain.drive(forward);
      }
      if(LTLeft > threshold and LTCenter > threshold and LTRight < threshold){
          Drivetrain.setTurnVelocity(20, rpm);
          Drivetrain.setDriveVelocity(10, rpm);
          Drivetrain.turn(right);
          Drivetrain.drive(forward);
      }
      if(LTLeft > threshold and LTCenter > threshold and LTRight > threshold){
        Drivetrain.stop();
      }
    }
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
            Brain.Screen.print("hallo");
            wait(50, msec);
            Brain.Screen.setCursor(1,1);
            Brain.Screen.clearScreen();
            Drivetrain.stop();

      }
      this_thread::sleep_for( 10 );
    }
}
