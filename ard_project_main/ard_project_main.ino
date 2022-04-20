#include "robot.h"
#include "SelfDrivingRobot.cpp"

SelfDrivingRobot robotBrain;

void setup() {
}

void loop() {
  // robot logic SPA
  robotBrain.sense();
  robotBrain.plan();
  robotBrain.act();
  delay(50);
}
