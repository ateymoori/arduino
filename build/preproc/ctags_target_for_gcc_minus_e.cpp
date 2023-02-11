# 1 "/Users/amirhossein/Documents/Projects/ArduinoProjects/Hello.ino"

int MTR_1_EN = 6 ;
int MTR_1_in1 = 25 ;
int MTR_1_in2 = 23 ;

int MTR_2_EN = 9 ;
int MTR_2_in1 = 29 ;
int MTR_2_in2 = 27 ;

int MTR_3_EN = 3 ;
int MTR_3_in1 = 37 ;
int MTR_3_in2 = 35 ;

int MTR_4_EN = 5 ;
int MTR_4_in1 = 33 ;
int MTR_4_in2 = 31 ;

int MTR_1_SPEED = 130;
int MTR_2_SPEED = 140;
int MTR_3_SPEED = 140;
int MTR_4_SPEED = 140;

const int ultraPower = 12;
const int trigPin = 11;
const int echoPin = 10;
long duration;
 int distance;
int LED_PIN = 13 ;

void setup (){

  pinMode(ultraPower, 0x1); // Sets the trigPin as an Output
  digitalWrite(ultraPower, 0x1);
  pinMode(trigPin, 0x1); // Sets the trigPin as an Output
  pinMode(echoPin, 0x0); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication

  //  pinMode(LED_PIN, OUTPUT);

  // pinMode(MTR_1_EN, OUTPUT);
  // pinMode(MTR_1_in1, OUTPUT);
  // pinMode(MTR_1_in2, OUTPUT);

  // pinMode(MTR_2_EN, OUTPUT);
  // pinMode(MTR_2_in1, OUTPUT);
  // pinMode(MTR_2_in2, OUTPUT);

  // pinMode(MTR_3_EN, OUTPUT);
  // pinMode(MTR_3_in1, OUTPUT);
  // pinMode(MTR_3_in2, OUTPUT);

  // pinMode(MTR_4_EN, OUTPUT);
  // pinMode(MTR_4_in1, OUTPUT);
  // pinMode(MTR_4_in2, OUTPUT);

  // digitalWrite(MTR_1_in1, LOW);
  // digitalWrite(MTR_1_in2, HIGH);
  // analogWrite(MTR_1_EN, 140);

  // digitalWrite(MTR_2_in1, HIGH);
  // digitalWrite(MTR_2_in2, LOW);
  // analogWrite(MTR_2_EN, 130);

  // digitalWrite(MTR_3_in1, HIGH);
  // digitalWrite(MTR_3_in2, LOW);
  // analogWrite(MTR_3_EN, 140);

  // digitalWrite(MTR_4_in1, HIGH);
  // digitalWrite(MTR_4_in2, LOW);
  // analogWrite(MTR_4_EN, 140);

}

void loop(){
  // delay(100) ;
  // stopAll(); 
  // delay(100) ;


  digitalWrite(LED_PIN, 0x1);

  if( getDistance() > 20){
      goFront() ;
  }else{
     // stopAll();
      goReverse();
  }

}

int getDistance(){
    digitalWrite(trigPin, 0x0);
    delayMicroseconds(2);
    digitalWrite(trigPin, 0x1);
    delayMicroseconds(10);
    digitalWrite(trigPin, 0x0);
    duration = pulseIn(echoPin, 0x1);
    distance = duration * 0.034 / 2;
    return distance ;
}

void goFront(){
  delay(100);
  mtr1F();
  mtr2F();
  mtr3F();
  mtr4F();
}

void goReverse(){
  delay(100);
  mtr1R();
  mtr2R();
  mtr3R();
  mtr4R();
}

void mtr1F(){
  digitalWrite(MTR_1_in1, 0x0);
  digitalWrite(MTR_1_in2, 0x1);
  analogWrite(MTR_1_EN, MTR_1_SPEED);
}

void mtr2F(){
  digitalWrite(MTR_2_in1, 0x1);
  digitalWrite(MTR_2_in2, 0x0);
  analogWrite(MTR_2_EN, MTR_1_SPEED);

}

void mtr3F(){
  digitalWrite(MTR_3_in1, 0x1);
  digitalWrite(MTR_3_in2, 0x0);
  analogWrite(MTR_3_EN, MTR_1_SPEED);
}

void mtr4F(){
  digitalWrite(MTR_4_in1, 0x1);
  digitalWrite(MTR_4_in2, 0x0);
  analogWrite(MTR_4_EN, MTR_1_SPEED);
}


void mtr1R(){
  digitalWrite(MTR_1_in1, 0x1);
  digitalWrite(MTR_1_in2, 0x0);
  analogWrite(MTR_1_EN, MTR_1_SPEED);
}

void mtr2R(){
  digitalWrite(MTR_2_in1,0x0 );
  digitalWrite(MTR_2_in2,0x1 );
  analogWrite(MTR_2_EN, MTR_2_SPEED);

}

void mtr3R(){
  digitalWrite(MTR_3_in1,0x0 );
  digitalWrite(MTR_3_in2, 0x1);
  analogWrite(MTR_3_EN, MTR_3_SPEED);
}

void mtr4R(){
  digitalWrite(MTR_4_in1, 0x0);
  digitalWrite(MTR_4_in2,0x1 );
  analogWrite(MTR_4_EN, MTR_4_SPEED);
}

void stopAll(){
  digitalWrite(MTR_1_in1, 0x0);
  digitalWrite(MTR_1_in2, 0x0);
  analogWrite(MTR_1_EN, 0);

  digitalWrite(MTR_2_EN, 0x0);
  digitalWrite(MTR_2_in1, 0x0);
  analogWrite(MTR_2_in2, 0);

  digitalWrite(MTR_3_in1, 0x0);
  digitalWrite(MTR_3_in2, 0x0);
  analogWrite(MTR_3_EN, 0);

  digitalWrite(MTR_4_in1, 0x0);
  digitalWrite(MTR_4_in2, 0x0);
  analogWrite(MTR_4_EN, 0);

  digitalWrite(MTR_4_EN, 0x0);
  digitalWrite(MTR_4_in1, 0x0);
  pinMode(MTR_4_in2, 0);
}



void on(){
    // digitalWrite(LED_PIN, HIGH);

    // digitalWrite(MTR_1_in1, HIGH);
    // digitalWrite(MTR_1_in2, LOW);
   // analogWrite(MTR_1_EN, 150);

    // digitalWrite(MTR_2_in3, HIGH);
    // digitalWrite(MTR_2_in4, LOW);
    // analogWrite(MTR_2_EN, 150);

}

void off(){
  // digitalWrite(LED_PIN, LOW);

  // digitalWrite(MTR_1_in1, LOW);
  // digitalWrite(MTR_1_in2, LOW);
  // analogWrite(MTR_1_EN, 0);

  // digitalWrite(MTR_2_in3, LOW);
  // digitalWrite(MTR_2_in4, LOW);
  // analogWrite(MTR_2_EN, 0);
}

// int inl =2;
// int in2=4; 
// int enA=3;
// int LED_PIN = 13;
// int in3 =5;
// int in4=7; 

// int in5 =8;
// int in6 =9; 
// int in7 =10;
// int in8 =11; 

// void setup (){
//     Serial.begin(9600);
//     pinMode(LED_PIN, OUTPUT);
//     pinMode(enA, OUTPUT);
//     pinMode(inl, OUTPUT);
//     pinMode(in2, OUTPUT);
//     pinMode(in3, OUTPUT);
//     pinMode(in4, OUTPUT);
//     pinMode(in5, OUTPUT);
//     pinMode(in6, OUTPUT);
//     pinMode(in7, OUTPUT);
//     pinMode(in8, OUTPUT);

//     digitalWrite(inl, HIGH);
//     digitalWrite(in2, LOW);
//     digitalWrite(in3, HIGH);
//     digitalWrite(in4, LOW);

//     digitalWrite(in5, HIGH);
//     digitalWrite(in6, LOW);
//     digitalWrite(in7, HIGH);
//     digitalWrite(in8, LOW);

//     // digitalWrite(enA, 110);
//       digitalWrite(LED_PIN, HIGH);
//     // delay(1500) ;




//     // digitalWrite(inl, LOW);
//     // digitalWrite(in2, LOW);
//     // digitalWrite(enA, 0);
//     // digitalWrite(LED_PIN, LOW);
//     // delay(1500) ;


// }

// void loop(){
//     digitalWrite(inl, HIGH);
//     digitalWrite(in2, LOW);
//     digitalWrite(in3, HIGH);
//     digitalWrite(in4, LOW);

//     digitalWrite(in5, HIGH);
//     digitalWrite(in6, LOW);
//     digitalWrite(in7, HIGH);
//     digitalWrite(in8, LOW);

//     // digitalWrite(inl, HIGH);
//     // digitalWrite(in2, LOW);
//     //  digitalWrite(LED_PIN, HIGH);
//     // digitalWrite(enA, 100);
//     // digitalWrite(LED_PIN, HIGH);
//     // delay(1500) ;

//     // digitalWrite(inl, LOW);
//     // digitalWrite(in2, LOW);
//     // digitalWrite(enA, 0);
//     // digitalWrite(LED_PIN, LOW);
//     // delay(1500) ;


//     // digitalWrite(LED_PIN, HIGH);
//     // delay(1500) ;
//     // digitalWrite(LED_PIN, LOW);
//     // delay(1500) ;
// }


// // int LED_PIN = 13;
// // int MOTOR_A_ENABLE = 6;
// // int MOTO = 6;

// // void setup()
// // {
// //     Serial.begin(9600);
// //     pinMode(LED_PIN, OUTPUT);
// //     pinMode(MOTOR_A_ENABLE, OUTPUT);
// // }

// // void loop()
// // {
// //     digitalWrite(MOTOR_A_ENABLE, HIGH);

// //     digitalWrite(LED_PIN, HIGH);
// //     delay(500);
// //     digitalWrite(LED_PIN, LOW);
// //     delay(500);

// //     Serial.write("Hello from Arduino") ;
// // }
# 1 "/Users/amirhossein/Documents/Projects/ArduinoProjects/bluetooth.ino"


// int LED_PIN = 13;
// int LedStatus = 0;

// void setup()
// {
//     Serial.begin(9600);
//     pinMode(LED_PIN, OUTPUT);
// }

// void loop()
// {

//     if (Serial.available() > 0)
//     {
//         String readValue = Serial.readString();
//         // i = Serial.read() ;
//         Serial.println(readValue);

//         if (readValue.equalsIgnoreCase("LED_ON"))
//         {
//             LedStatus = 1;
//         }
//         if (readValue.equalsIgnoreCase("LED_OFF"))
//         {
//             LedStatus = 0;
//         }
//     }

//     if (LedStatus == 0)
//     {
//         digitalWrite(LED_PIN, LOW);
//     }
//     if (LedStatus == 1)
//     {
//         digitalWrite(LED_PIN, HIGH);
//     }
// }
# 1 "/Users/amirhossein/Documents/Projects/ArduinoProjects/dc.ino"
// #define ENABLE 5
// #define DIRA 3
// #define DIRB 4

// int i;

// void setup() {
//   //---set pin direction
//   pinMode(ENABLE,OUTPUT);
//   pinMode(DIRA,OUTPUT);
//   pinMode(DIRB,OUTPUT);
//   Serial.begin(9600);
// }

// void loop() {
//   //---back and forth example
//     Serial.println("One way, then reverse");
//     digitalWrite(ENABLE,HIGH); // enable on
//     for (i=0;i<5;i++) {
//     digitalWrite(DIRA,HIGH); //one way
//     digitalWrite(DIRB,LOW);
//     delay(500);
//     digitalWrite(DIRA,LOW);  //reverse
//     digitalWrite(DIRB,HIGH);
//     delay(500);
//   }
//   digitalWrite(ENABLE,LOW); // disable
//   delay(2000);

//   Serial.println("fast Slow example");
//   //---fast/slow stop example
//   digitalWrite(ENABLE,HIGH); //enable on
//   digitalWrite(DIRA,HIGH); //one way
//   digitalWrite(DIRB,LOW);
//   delay(3000);
//   digitalWrite(ENABLE,LOW); //slow stop
//   delay(1000);
//   digitalWrite(ENABLE,HIGH); //enable on
//   digitalWrite(DIRA,LOW); //one way
//   digitalWrite(DIRB,HIGH);
//   delay(3000);
//   digitalWrite(DIRA,LOW); //fast stop
//   delay(2000);

//   Serial.println("PWM full then slow");
//   //---PWM example, full speed then slow
//   analogWrite(ENABLE,255); //enable on
//   digitalWrite(DIRA,HIGH); //one way
//   digitalWrite(DIRB,LOW);
//   delay(2000);
//   analogWrite(ENABLE,180); //half speed
//   delay(2000);
//   analogWrite(ENABLE,128); //half speed
//   delay(2000);
//   analogWrite(ENABLE,50); //half speed
//   delay(2000);
//   analogWrite(ENABLE,128); //half speed
//   delay(2000);
//   analogWrite(ENABLE,180); //half speed
//   delay(2000);
//   analogWrite(ENABLE,255); //half speed
//   delay(2000);
//   digitalWrite(ENABLE,LOW); //all done
//   delay(10000);
// }
# 1 "/Users/amirhossein/Documents/Projects/ArduinoProjects/servo.ino"
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
# 1 "/Users/amirhossein/Documents/Projects/ArduinoProjects/stepper.ino"
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
# 1 "/Users/amirhossein/Documents/Projects/ArduinoProjects/ultrasonic.ino"
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
