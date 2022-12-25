#include <Arduino.h>
#line 1 "/Users/amirhossein/Documents/Projects/ArduinoProjects/Hello.ino"


int LED_PIN = 13 ;
int LedStatus = 0 ;
char i = 'A' ;

enum MachineState{
  LED_OFF,
  LED_ON
};

#line 12 "/Users/amirhossein/Documents/Projects/ArduinoProjects/Hello.ino"
void setup();
#line 19 "/Users/amirhossein/Documents/Projects/ArduinoProjects/Hello.ino"
void loop();
#line 12 "/Users/amirhossein/Documents/Projects/ArduinoProjects/Hello.ino"
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600) ;
  pinMode(LED_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
 

    if(Serial.available() > 0 ){
        String readValue =  Serial.readString() ;
       // i = Serial.read() ;
        Serial.println(readValue);
 

        if(readValue.equalsIgnoreCase("LED_ON")){
            LedStatus = 1 ;
        }
        if(readValue.equalsIgnoreCase("LED_OFF")){
            LedStatus = 0 ;
        }
    }
 
 

    if(LedStatus==0){
        digitalWrite(LED_PIN, LOW);
    }
    if(LedStatus==1){
        digitalWrite(LED_PIN, HIGH);
    }
 

}
 
#line 1 "/Users/amirhossein/Documents/Projects/ArduinoProjects/bluetooth.ino"
 
// const int LED = 13;
 
// void setup() {
//   Serial.begin(9600); // Starts the serial communication
//   pinMode(LED, OUTPUT); // Sets the echoPin as an Input
// }
// void loop() {
//     digitalWrite(LED, LOW);
//     delay(400);
//     digitalWrite(LED, HIGH);
//     Serial.println("HIGH");
//     delay(400);     

 
// }
#line 1 "/Users/amirhossein/Documents/Projects/ArduinoProjects/dc.ino"
// #define ENABLE 5
// #define DIRA 3
// #define DIRB 4

// int i;
 
// void setup() {
// //   //---set pin direction
// //   pinMode(ENABLE,OUTPUT);
// //   pinMode(DIRA,OUTPUT);
// //   pinMode(DIRB,OUTPUT);
// //   Serial.begin(9600);
// }

// void loop() {
// //   //---back and forth example
// //     Serial.println("One way, then reverse");
// //     digitalWrite(ENABLE,HIGH); // enable on
// //     for (i=0;i<5;i++) {
// //     digitalWrite(DIRA,HIGH); //one way
// //     digitalWrite(DIRB,LOW);
// //     delay(500);
// //     digitalWrite(DIRA,LOW);  //reverse
// //     digitalWrite(DIRB,HIGH);
// //     delay(500);
// //   }
// //   digitalWrite(ENABLE,LOW); // disable
// //   delay(2000);

// //   Serial.println("fast Slow example");
// //   //---fast/slow stop example
// //   digitalWrite(ENABLE,HIGH); //enable on
// //   digitalWrite(DIRA,HIGH); //one way
// //   digitalWrite(DIRB,LOW);
// //   delay(3000);
// //   digitalWrite(ENABLE,LOW); //slow stop
// //   delay(1000);
// //   digitalWrite(ENABLE,HIGH); //enable on
// //   digitalWrite(DIRA,LOW); //one way
// //   digitalWrite(DIRB,HIGH);
// //   delay(3000);
// //   digitalWrite(DIRA,LOW); //fast stop
// //   delay(2000);

// //   Serial.println("PWM full then slow");
// //   //---PWM example, full speed then slow
// //   analogWrite(ENABLE,255); //enable on
// //   digitalWrite(DIRA,HIGH); //one way
// //   digitalWrite(DIRB,LOW);
// //   delay(2000);
// //   analogWrite(ENABLE,180); //half speed
// //   delay(2000);
// //   analogWrite(ENABLE,128); //half speed
// //   delay(2000);
// //   analogWrite(ENABLE,50); //half speed
// //   delay(2000);
// //   analogWrite(ENABLE,128); //half speed
// //   delay(2000);
// //   analogWrite(ENABLE,180); //half speed
// //   delay(2000);
// //   analogWrite(ENABLE,255); //half speed
// //   delay(2000);
// //   digitalWrite(ENABLE,LOW); //all done
// //   delay(10000);
// }
   
#line 1 "/Users/amirhossein/Documents/Projects/ArduinoProjects/servo.ino"
// #include <Servo.h>
// /* After including the corresponding libraries,
//    we can use the "class" like "Servo" created by the developer for us.
//    We can use the functions and variables created in the libraries by creating 
//    objects like the following "myservo" to refer to the members in ".".*/

// Servo myservo;
// //it created an object called myservo.
// /*  you can see Servo as a complex date type(Including functions and various data types)
//     and see myservo as variables.               */

// void setup(){
//   /*"attach" and "write" are both functions,
//      and they are members contained in the complex structure of "Servo". 
//      We can only use them if we create the object "myservo" for the complex structure of "Servo".
//   */
//   myservo.attach(9);//connect pin 9 with the control line(the middle line of Servo) 
//   myservo.write(90);// move servos to center position -> 90°
// } 
// void loop(){
// //   myservo.write(90);// move servos to center position -> 90°
// //   delay(1000);
// //   myservo.write(60);// move servos to center position -> 60°
// //   delay(1000);
// //   myservo.write(90);// move servos to center position -> 90°
// //   delay(1000);
// //   myservo.write(150);// move servos to center position -> 120°
// //   delay(1000);
// }

#line 1 "/Users/amirhossein/Documents/Projects/ArduinoProjects/stepper.ino"
// #include <Stepper.h>

// const int stepsPerRevolution = 2048;  // change this to fit the number of steps per revolution
// const int rolePerMinute = 17;         // Adjustable range of 28BYJ-48 stepper is 0~17 rpm

// // initialize the stepper library on pins 8 through 11:
// Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

// void setup() {
//   myStepper.setSpeed(rolePerMinute);
//   // initialize the serial port:
//   Serial.begin(9600);
// }

// void loop() {  
//   // step one revolution in one direction:
//   Serial.println("clockwise");
//   myStepper.step(stepsPerRevolution);
//   delay(500);

//   // step one revolution in the other direction:
//   Serial.println("counterclockwise");
//   myStepper.step(-stepsPerRevolution);
//   delay(500);
// }
#line 1 "/Users/amirhossein/Documents/Projects/ArduinoProjects/ultrasonic.ino"
// const int trigPin = 9;
// const int echoPin = 10;
// const int LED = 13;
// // defines variables
// long duration;
// int distance;
// void setup() {
//   pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
//   pinMode(echoPin, INPUT); // Sets the echoPin as an Input
//   pinMode(LED, OUTPUT); // Sets the echoPin as an Input
//   Serial.begin(9600); // Starts the serial communication
// }
// void loop() {
//     // digitalWrite(LED, LOW);
//     // delay(400);
//     // digitalWrite(LED, HIGH);
//     // Serial.println("HIGHH");
//     // delay(400);     

//     Serial.print("started: ");
//   // Clears the trigPin
//   digitalWrite(LED, LOW);
//   digitalWrite(trigPin, LOW);
//   delayMicroseconds(2);
//   // Sets the trigPin on HIGH state for 10 micro seconds
//   digitalWrite(trigPin, HIGH);
//   delayMicroseconds(10);
//   digitalWrite(trigPin, LOW);
//   // Reads the echoPin, returns the sound wave travel time in microseconds
//   duration = pulseIn(echoPin, HIGH);
//   // Calculating the distance
//   distance = duration * 0.034 / 2;
//   // Prints the distance on the Serial Monitor
//   Serial.print("Distance: ");
//   Serial.println(distance);
// }
