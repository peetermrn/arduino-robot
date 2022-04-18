#include "robot.h"

Robot robot;
  
void setup() {

  robot.setUp();

}

void loop() {
  // robot logic SPA
  robot.sense();
  robot.plan();
  robot.act();
  delay(50);
}
