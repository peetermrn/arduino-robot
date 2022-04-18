// robot.h
#ifndef ROBOT_H
#define ROBOT_H
#include <Arduino.h>
class Robot {
  public:
    float x;
    float y;
    String state; // for example scan, drive, finish
    String mode; // blueTooth, code
    float leftSpeed;
    float rightSpeed;
    float laser;

    // set pins
    int leftWheelPin;
    int rightWheelPin;
    int laserPin;

    //set wheel output variables
    float leftWheelOutput;
    float rightWheelOutput;

    Robot();
    
    void setUp();
    void setLeftSpeed(float speed);
    void setRightSpeed(float speed);
    void sense ();
    void plan ();
    void act ();
};

#endif
