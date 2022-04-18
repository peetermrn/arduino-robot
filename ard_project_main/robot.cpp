// robot.cpp
#include "robot.h"

Robot :: Robot() {
    x = 0;
    y = 0;
    state; // for example scan, drive, finish
    mode; // blueTooth, code
    leftSpeed = 0;
    rightSpeed = 0;
    laser = 0;

    // set pins
    leftWheelPin = 1;
    rightWheelPin = 2;
    laserPin = 3;

    //set wheel output variables
    leftWheelOutput = 0;
    rightWheelOutput = 0;
};
    
void Robot :: setUp(){
  //set connections for wheels, lasers etc.
  pinMode(leftWheelPin, OUTPUT);
  pinMode(rightWheelPin, OUTPUT);
};

void Robot :: setLeftSpeed(float speed){
  if (speed < 100 && speed > -100){
    leftSpeed = speed;
    leftWheelPin = (5 / 100) * speed; // 5 is the max output
  }
};

void Robot :: setRightSpeed(float speed){
  if (speed < 100 && speed > -100){
    rightSpeed = speed;
    rightWheelOutput = (5 / 100) * speed; // 5 is the max output
  }
};

void Robot :: sense (){
  // refresh censors
  // laser = analogRead(laserPin);
};

void Robot :: plan (){
  // for example
  if (laser > 0.5) {
    setLeftSpeed(10);
    setRightSpeed(10);
  } else {
    setLeftSpeed(0);
    setRightSpeed(0);
    state = "finished";  
  }
  
};

void Robot :: act (){
  // set voltage for left wheel
  analogWrite(leftWheelPin, leftWheelOutput);
  // set voltage for right wheel
  analogWrite(rightWheelPin, rightWheelOutput);
};
