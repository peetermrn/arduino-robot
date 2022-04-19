#include <Arduino.h>
using namespace std;
#include "robot.h"

class SelfDrivingRobot {
  public:
      Robot robot;
      int leftWheelSpeed = 0;
      int rightWheelSpeed = 0;
      int frontDistance = 0;

    
    void sense(){
        frontDistance = robot.getUltrasonicSensor();
    };
    
    void plan(){
        if (frontDistance > 50){
          leftWheelSpeed = 100;
          rightWheelSpeed = 100;
        }else {
          leftWheelSpeed = 0;
          rightWheelSpeed = 0;  
        }
    };
    void act(){
        robot.setLeftSpeed(leftWheelSpeed);
        // robot.setRightSpeed(rightWheelSpeed);
    };
};
