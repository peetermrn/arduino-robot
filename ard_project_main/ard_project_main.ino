

class Robot {
  public:
    float x = 0;
    float y = 0;
    String state; // for example scan, drive, finish
    float leftSpeed = 0;
    float rightSpeed = 0;
    float laser = 0;

    // set pins
    int leftWheelPin = 1;
    int rightWheelPin = 2;
    int laserPin = 3;
    
    void setUp(){
      //set connections for wheels, lasers etc.
      pinMode(leftWheelPin, OUTPUT);
      pinMode(rightWheelPin, OUTPUT);
    };
    
    float setLeftSpeed(float speed){
          leftSpeed = speed;
    };
    
    float setRightSpeed(float speed){
          rightSpeed = speed;
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
      }
      */
    };

    void act (){
      // set voltage for left wheel
      // analogWrite(_, _);
      // set voltage for right wheel
      // analogWrite(_, _);
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
