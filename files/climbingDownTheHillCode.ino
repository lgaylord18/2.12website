#include <Servo.h>

Servo rightwheelservo; //creates a servo object representing the right wheel
Servo leftwheelservo; //creates a servo object representing the left wheel

int leftservoforward = 175; //sets the servo angle to 175 degrees (which makes it go forward on the left)
int rightservoforward = 0; //sets the servo angle to 0 degrees (which makes it go forward on the right)
int leftservoback = 0; //sets the servo angle to 0 degrees (which makes it go backwards on the left)
int rightservoback = 175; //sets the servo angle to 175 degrees (which makes it go backwards on the right)
int rightservostop = 90; //sets the servo angle to 90 degrees (the stopping point)
int leftservostop = 90; //sets the servo angle to 90 degrees (the stopping point)

void setup()
{
  rightwheelservo.attach(8); // attaches the servo on pin 8 to the servo object
  leftwheelservo.attach(9); // attaches the servo on pin 9 to the servo object

  //sets both the wheels to their backward angles and drives for eight seconds
  //worth noting: the robot can only drive backward down the hill, so it goes backward
  rightwheelservo.write(rightservoback);
  leftwheelservo.write(leftservoback);
  delay(8000);

  //stops both wheels and waits one second
  rightwheelservo.write(rightservostop);
  leftwheelservo.write(leftservostop);
  delay(1000);
  
  //turns the robot 90 degrees (to the right)
  //currently coded to be on the left side of the track
  //takes .8 seconds to make the turn
  leftwheelservo.write(leftservoforward);
  rightwheelservo.write(rightservoback);
  delay(800);

  //stops both wheels and waits one second
  rightwheelservo.write(rightservostop);
  leftwheelservo.write(leftservostop);
  delay(1000);

  //drives both wheels forward for five seconds
  //this number could be shortened
  rightwheelservo.write(rightservoback);
  leftwheelservo.write(leftservoback);
  delay(5000);
}

void loop() {} //required empty loop
