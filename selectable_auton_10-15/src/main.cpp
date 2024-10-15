/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Thu Sep 26 2019                                           */
/*    Description:  Competition Template                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Drivetrain           drivetrain    1, 2, 3, 4, 5   
// intake               motor         6               
// elevation            digital_out   A               
// tracking1            rotation      7               
// tracking2            rotation      8               
// elevated_intake      digital_out   B               
// PTO                  digital_out   C               
// Inertial             inertial      9               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "menu_screen.cpp"

using namespace vex;

// A global instance of competition
competition Competition;

// define your global instances of motors and other devices here
int auton = 0;
bool draw = true;

void Menu1() {
  Brain.Screen.clearScreen();
  Brain.Screen.setFillColor(blue);
  Brain.Screen.drawRectangle(0, 0, 250,117);
  Brain.Screen.setFillColor(red);
  Brain.Screen.drawRectangle(0, 117, 250,117);
  Brain.Screen.setFillColor(blue);
  Brain.Screen.drawRectangle(250, 0, 250,117);
  Brain.Screen.setFillColor(red);
  Brain.Screen.drawRectangle(250, 117, 250,117);
  Brain.Screen.setCursor(3,3);
  Brain.Screen.setFillColor(blue);
  Brain.Screen.setPenColor(white);
  Brain.Screen.print("Left Blue");
  Brain.Screen.setCursor(9,3);
  Brain.Screen.setFillColor(red);
  Brain.Screen.setPenColor(white);
  Brain.Screen.print("Left Red");
  Brain.Screen.setCursor(3,33);
  Brain.Screen.setFillColor(blue);
  Brain.Screen.setPenColor(white);
  Brain.Screen.print("Left Blue Elims");
  Brain.Screen.setCursor(9,33);
  Brain.Screen.setFillColor(red);
  Brain.Screen.setPenColor(white);
  Brain.Screen.print("Left Red Elims");
  //touch screen
  //left side menu
  while(true) {
    Brain.Screen.setFillColor(blue);
      if (Brain.Screen.xPosition()< 250){
      if (Brain.Screen.yPosition()< 140){
        auton = 2;
        Brain.Screen.setCursor(1,1);
        Brain.Screen.print("Left Blue      ");
      } 
      }
      if (Brain.Screen.xPosition()< 250){
      if (Brain.Screen.yPosition()> 120){
        auton = 3;
        Brain.Screen.setCursor(1,1);
        Brain.Screen.print("Left Red       ");
      }
      } 
      if (Brain.Screen.xPosition()> 240){
      if (Brain.Screen.yPosition()< 140){
        auton = 4;
        Brain.Screen.setCursor(1,1);
        Brain.Screen.print("Left Blue Elims");
      }
      } 
      if (Brain.Screen.xPosition()> 240){
      if (Brain.Screen.yPosition()> 120){
        auton = 5;
        Brain.Screen.setCursor(1,1);
        Brain.Screen.print("Left Red Elims ");
      }
      } 
      wait(20, msec);
  

      // Back button code
      if (Controller1.ButtonX.pressing()){
        Brain.Screen.clearScreen();
        draw = true;
        wait(0.1, sec);
        return;
      }
      wait(20, msec);
  }
}
//Menu for right side autons
void Menu2() {
  Brain.Screen.clearScreen();
  Brain.Screen.setFillColor(blue);
  Brain.Screen.drawRectangle(0, 0, 250,117);
  Brain.Screen.setFillColor(red);
  Brain.Screen.drawRectangle(0, 117, 250,117);
  Brain.Screen.setFillColor(blue);
  Brain.Screen.drawRectangle(250, 0, 250,117);
  Brain.Screen.setFillColor(red);
  Brain.Screen.drawRectangle(250, 117, 250,117);
  Brain.Screen.setCursor(3,3);
  Brain.Screen.setFillColor(blue);
  Brain.Screen.setPenColor(white);
  Brain.Screen.print("Right Blue");
  Brain.Screen.setCursor(9,3);
  Brain.Screen.setFillColor(red);
  Brain.Screen.setPenColor(white);
  Brain.Screen.print("Right Red");
  Brain.Screen.setCursor(3,33);
  Brain.Screen.setFillColor(blue);
  Brain.Screen.setPenColor(white);
  Brain.Screen.print("Right Blue Elims");
  Brain.Screen.setCursor(9,33);
  Brain.Screen.setFillColor(red);
  Brain.Screen.setPenColor(white);
  Brain.Screen.print("Right Red Elims");
  wait(0.5, sec);
  //touch screen
  //right side menu
    while(true) {
    Brain.Screen.setFillColor(blue);
      if (Brain.Screen.xPosition()< 250){
      if (Brain.Screen.yPosition()< 140){
        auton = 6;
        Brain.Screen.setCursor(1,1);
        Brain.Screen.print("Right Blue      ");
      } 
      }
      if (Brain.Screen.xPosition()< 250){
      if (Brain.Screen.yPosition()> 120){
        auton = 7;
        Brain.Screen.setCursor(1,1);
        Brain.Screen.print("Right Red       ");
      }
      } 
      if (Brain.Screen.xPosition()> 240){
      if (Brain.Screen.yPosition()< 140){
        auton = 8;
        Brain.Screen.setCursor(1,1);
        Brain.Screen.print("Right Blue Elims");
      }
      } 
      if (Brain.Screen.xPosition()> 240){
      if (Brain.Screen.yPosition()> 120){
        auton = 9;
        Brain.Screen.setCursor(1,1);
        Brain.Screen.print("Right Red Elims ");
      }
      } 
      wait(20, msec);

      // Back button code
      if (Controller1.ButtonX.pressing()){
        Brain.Screen.clearScreen();
        draw = true;
        wait(0.1, sec);
        return;
      }
      wait(20, msec);
    }
  }
  
  

void initial_menu() {
  while (true){
    if (draw == true){
      Brain.Screen.clearScreen();
      Brain.Screen.setFillColor(white);
      Brain.Screen.drawRectangle(0, 0, 180,240);
      Brain.Screen.setFillColor(black);
      Brain.Screen.drawRectangle(300, 0, 180,240);
      Brain.Screen.setFillColor(ClrPurple);
      Brain.Screen.drawRectangle(180, 0, 120,120);
      Brain.Screen.setFillColor(ClrPink);
      Brain.Screen.drawRectangle(180, 120, 120,120);
      Brain.Screen.setCursor(6,9);
      Brain.Screen.setFillColor(white);
      Brain.Screen.setPenColor(black);
      Brain.Screen.print("Left");
      Brain.Screen.setCursor(6,39);
      Brain.Screen.setFillColor(black);
      Brain.Screen.setPenColor(white);
      Brain.Screen.print("Right");
      Brain.Screen.setCursor(3,22);
      Brain.Screen.setFillColor(ClrPurple);
      Brain.Screen.setPenColor(white);
      Brain.Screen.print("Skills");
      Brain.Screen.setCursor(9,20);
      Brain.Screen.setFillColor(ClrPink);
      Brain.Screen.setPenColor(white);
      Brain.Screen.print("Calibrate");
      draw = false;
    }
  //touch screen
    //left side menu
    if (Brain.Screen.pressing()){
     if (Brain.Screen.xPosition()< 180){
      Menu1();
     } 
     //Calibrate
     if (Brain.Screen.xPosition()> 180){
       if (Brain.Screen.xPosition()< 300){
        if (Brain.Screen.yPosition()> 120){
          Inertial.calibrate();
          Brain.Screen.setCursor(1,1);
          Brain.Screen.setFillColor(blue);
          Brain.Screen.print("Calibrating      ");
          tracking1.setPosition(0,degrees);
          tracking2.setPosition(0,degrees);
          wait (1, sec);
          Brain.Screen.setCursor(1,1);
          Brain.Screen.print("3               ");
          wait (1, sec);
          Brain.Screen.setCursor(1,1);
          Brain.Screen.print("2               ");
          wait (1, sec);
          Brain.Screen.setCursor(1,1);
          Brain.Screen.print("1               ");
          wait (1, sec);
          Brain.Screen.setCursor(1,1);
          Brain.Screen.print("Calibrated      ");
        }
      }
    } 
    //Skills
    if (Brain.Screen.xPosition()> 180){
      if (Brain.Screen.xPosition()< 300){
       if (Brain.Screen.yPosition()< 120){
         auton = 1;
         Brain.Screen.setCursor(1,1);
         Brain.Screen.setFillColor(blue);
         Brain.Screen.print("Skills         ");
       }
      }
     }
     //Right side menu  
     if (Brain.Screen.xPosition()> 300){
      Menu2();
     }  
    }
    wait(20, msec);
  }
}
/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been powered on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {
  vexcodeInit();
  initial_menu();
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
  // ..........................................................................
  // Insert autonomous user code here.
  // ..........................................................................
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void usercontrol(void) {
  // User control code here, inside the loop
  while (1) {
    
    wait(20, msec); // Sleep the task for a short amount of time to
                    // prevent wasted resources.
  }
}

//
// Main will set up the competition functions and callbacks.
//
int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}
