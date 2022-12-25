

int LED_PIN = 13 ;
int LedStatus = 0 ;



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
 