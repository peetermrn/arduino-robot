// robot.h
#ifndef ROBOT_H
#define ROBOT_H
#include <Arduino.h>
using namespace std;

class Robot {
  
  private:
      // set pins
    int leftWheelPin;
    int rightWheelPin;
    int ultrasonicTriggerPin;
    int ultrasonicEchoPin;
    //set wheel output variables
    float leftWheelOutput;
    float rightWheelOutput;
    
  public:
    int leftSpeed;
    int rightSpeed;

    Robot(); // constructor

    void setLeftSpeed(int speed);
    void setRightSpeed(int speed);
    float getUltrasonicSensor();
};

#endif
