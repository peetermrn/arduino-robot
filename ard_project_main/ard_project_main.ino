

class Robot {
  public:
    float x = 0;
    float y = 0;
    String state; // for example scan, drive, finish
    String mode; // blueTooth, code
    float leftSpeed = 0;
    float rightSpeed = 0;
    float laser = 0;

    // set pins
    int leftWheelPin = 1;
    int rightWheelPin = 2;
    int laserPin = 3;

    //set wheel output variables
    float leftWheelOutput = 0;
    float rightWheelOutput = 0;
    
    void setUp(){
      //set connections for wheels, lasers etc.
      pinMode(leftWheelPin, OUTPUT);
      pinMode(rightWheelPin, OUTPUT);
    };
    
    void setLeftSpeed(float speed){
      if (speed < 100 && speed > -100){
        leftSpeed = speed;
        leftWheelPin = (5 / 100) * speed; // 5 is the max output
      }
    };
    
    void setRightSpeed(float speed){
      if (speed < 100 && speed > -100){
        rightSpeed = speed;
        rightWheelOutput = (5 / 100) * speed; // 5 is the max output
      }
    };

    void sense (){
      // refresh censors
      // laser = analogRead(laserPin);
    };

    void plan (){
      /* for example
      if (laser > 0.5) {
        setLeftSpeed(10)
        setRightSpeed(10)
      } else {
        setLeftSpeed(0)
        setRightSpeed(0)
        state = "finished"  
      }
      */
    };

    void act (){
      // set voltage for left wheel
      analogWrite(leftWheelPin, leftWheelOutput);
      // set voltage for right wheel
      analogWrite(rightWheelPin, rightWheelOutput);
    };


};

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
