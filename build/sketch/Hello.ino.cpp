#include <Arduino.h>
#line 9 "/Users/amirhossein/Documents/Projects/ArduinoProjects/stepper.ino"
void setup();
#line 15 "/Users/amirhossein/Documents/Projects/ArduinoProjects/stepper.ino"
void loop();
#line 0 "/Users/amirhossein/Documents/Projects/ArduinoProjects/stepper.ino"
#line 1 "/Users/amirhossein/Documents/Projects/ArduinoProjects/Hello.ino"


// int LED_PIN = 12 ;

// void setup() {
//   // initialize digital pin LED_BUILTIN as an output.
//   pinMode(LED_PIN, OUTPUT);
// }

// // the loop function runs over and over again forever
// void loop() {
//   digitalWrite(LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
//   delay(1000);                      // wait for a second
//   digitalWrite(LED_PIN, LOW);   // turn the LED off by making the voltage LOW
//   delay(1000);                      // wait for a second
// }
#line 1 "/Users/amirhossein/Documents/Projects/ArduinoProjects/stepper.ino"
#include <Stepper.h>

const int stepsPerRevolution = 1000;  // change this to fit the number of steps per revolution
const int rolePerMinute = 17;         // Adjustable range of 28BYJ-48 stepper is 0~17 rpm

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  myStepper.setSpeed(rolePerMinute);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {  
  // step one revolution in one direction:
  // Serial.println("clockwise");
  // myStepper.step(stepsPerRevolution);
  // delay(500);

  // // step one revolution in the other direction:
  // Serial.println("counterclockwise");
  // myStepper.step(-stepsPerRevolution);
  // delay(500);
}
