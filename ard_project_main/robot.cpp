// robot.cpp
#include "robot.h"

Robot :: Robot() {
    leftSpeed = 0;
    rightSpeed = 0;

    // set pins
    leftWheelPin = 5;
    rightWheelPin = 10;
    ultrasonicEchoPin = 2;
    ultrasonicTriggerPin = 3;

    //set connections for wheels, lasers etc.
    pinMode(leftWheelPin, OUTPUT);
    pinMode(rightWheelPin, OUTPUT);
  
    // ultrasonic
    pinMode(ultrasonicTriggerPin, OUTPUT); 
    pinMode(ultrasonicEchoPin, INPUT);
    
};
    


void Robot :: setLeftSpeed(int speed){
  if (speed <= 100 && speed >= -100){
    leftSpeed = (255 / 100) * speed; // 5 is the max output
    analogWrite(leftWheelPin, leftSpeed);
  }
};

void Robot :: setRightSpeed(int speed){
  if (speed < 100 && speed > -100){
    rightSpeed = (255 / 100) * speed; // 5 is the max output
    analogWrite(rightWheelPin, rightSpeed);
  }
};
float Robot :: getUltrasonicSensor(){
    // Clears the trigPin condition
  digitalWrite(ultrasonicTriggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(ultrasonicTriggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(ultrasonicTriggerPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  float duration = pulseIn(ultrasonicEchoPin, HIGH);
  // Calculating the distance
  float distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  return distance;
  };
