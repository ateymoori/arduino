
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

  pinMode(ultraPower, OUTPUT); // Sets the trigPin as an Output
  digitalWrite(ultraPower, HIGH);
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
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


  digitalWrite(LED_PIN, HIGH);
  
  if( getDistance() > 20){
      goFront() ;
  }else{
     // stopAll();
      goReverse();
  }

}

int getDistance(){
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
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
  digitalWrite(MTR_1_in1, LOW);
  digitalWrite(MTR_1_in2, HIGH);
  analogWrite(MTR_1_EN, MTR_1_SPEED);
}

void mtr2F(){
  digitalWrite(MTR_2_in1, HIGH);
  digitalWrite(MTR_2_in2, LOW);
  analogWrite(MTR_2_EN, MTR_1_SPEED);

}

void mtr3F(){
  digitalWrite(MTR_3_in1, HIGH);
  digitalWrite(MTR_3_in2, LOW);
  analogWrite(MTR_3_EN, MTR_1_SPEED);
}

void mtr4F(){
  digitalWrite(MTR_4_in1, HIGH);
  digitalWrite(MTR_4_in2, LOW);
  analogWrite(MTR_4_EN, MTR_1_SPEED);
}


void mtr1R(){
  digitalWrite(MTR_1_in1, HIGH);
  digitalWrite(MTR_1_in2, LOW);
  analogWrite(MTR_1_EN, MTR_1_SPEED);
}

void mtr2R(){
  digitalWrite(MTR_2_in1,LOW );
  digitalWrite(MTR_2_in2,HIGH );
  analogWrite(MTR_2_EN, MTR_2_SPEED);

}

void mtr3R(){
  digitalWrite(MTR_3_in1,LOW );
  digitalWrite(MTR_3_in2, HIGH);
  analogWrite(MTR_3_EN, MTR_3_SPEED);
}

void mtr4R(){
  digitalWrite(MTR_4_in1, LOW);
  digitalWrite(MTR_4_in2,HIGH );
  analogWrite(MTR_4_EN, MTR_4_SPEED);
}

void stopAll(){
  digitalWrite(MTR_1_in1, LOW);
  digitalWrite(MTR_1_in2, LOW);
  analogWrite(MTR_1_EN, 0);

  digitalWrite(MTR_2_EN, LOW);
  digitalWrite(MTR_2_in1, LOW);
  analogWrite(MTR_2_in2, 0);

  digitalWrite(MTR_3_in1, LOW);
  digitalWrite(MTR_3_in2, LOW);
  analogWrite(MTR_3_EN, 0);

  digitalWrite(MTR_4_in1, LOW);
  digitalWrite(MTR_4_in2, LOW);
  analogWrite(MTR_4_EN, 0);

  digitalWrite(MTR_4_EN, LOW);
  digitalWrite(MTR_4_in1, LOW);
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
