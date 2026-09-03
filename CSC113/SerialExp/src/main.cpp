#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()){
    String test = Serial.readStringUntil('\n'); 
    Serial.println(test);
  }

}