#include <Servo.h>

Servo myservo; 

int potValue = A0;  
int val;  

void setup() {
  Serial.begin(9600);
  myservo.attach(9);  
}

void loop() {
  val = analogRead(potValue);            
  Serial.print(val);
  Serial.print(" ");
  val = map(val, 565, 1023, 60, 30);
  myservo.write(val);
  Serial.print(val);
  Serial.println();
  delay(10);                           
}