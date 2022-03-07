#include "aps_functions.h"
#define TRIG_PIN 6
#define ECHO_PIN 7 
#define LED_PIN 2 
#define DISTANCE_THRESHOLD 100 
#define BUZZ_PIN 8
#define M1_EA 9
#define M2_EA 5
#define M1_1 10
#define M1_2 4
#define M2_1 11
#define M2_2 12

int motor_speed;

float duration_us, distance_cm;

void setup() {
  Serial.begin (9600);       
  pinMode(TRIG_PIN, OUTPUT); 
  pinMode(ECHO_PIN, INPUT);  
  pinMode(LED_PIN, OUTPUT);  
  pinMode(M1_1,   OUTPUT);
  pinMode(M1_2,   OUTPUT);
  pinMode(M2_1,   OUTPUT);
  pinMode(M2_2,   OUTPUT);
}

void loop() {
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  duration_us = pulseIn(ECHO_PIN, HIGH);
  distance_cm = 0.017 * duration_us;
  int a_delay = distance_cm * 10;
  if(distance_cm < DISTANCE_THRESHOLD) {
  LS();
  digitalWrite(LED_PIN, HIGH);
  tone(BUZZ_PIN, 1000);
  delay(a_delay);
  digitalWrite(LED_PIN, LOW);
  noTone(BUZZ_PIN); 
  delay(a_delay); 
    }
else{
    digitalWrite(LED_PIN, LOW); 
    NS();
  }
  Serial.print("distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");
}
