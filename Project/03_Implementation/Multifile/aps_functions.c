#include "aps_functions.h"

void LS(){
  
  int low_speed = analogRead(A0)/8;
  analogWrite(M1_EA,low_speed);
  analogWrite(M2_EA,low_speed);
  digitalWrite(M1_1, HIGH);
  digitalWrite(M1_2, LOW);
  digitalWrite(M2_1, HIGH);
  digitalWrite(M2_2, LOW);
  Serial.println(analogRead(A0));
  Serial.println(low_speed); 
}

void NS(){
  motor_speed = analogRead(A0)/4;
  analogWrite(M1_EA,motor_speed);
  analogWrite(M2_EA,motor_speed);
  digitalWrite(M1_1, HIGH);
  digitalWrite(M1_2, LOW);
  digitalWrite(M2_1, HIGH);
  digitalWrite(M2_2, LOW);
  Serial.println(analogRead(A0));
  Serial.println(motor_speed); 
}
