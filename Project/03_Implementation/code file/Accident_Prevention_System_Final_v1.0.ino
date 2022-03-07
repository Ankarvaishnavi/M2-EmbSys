/**
 * ACCIDENT AVOIDING SYSTEM PROECT
 * Designed, constructed and implemented by: Vaishnavi Ankar
 * Start date: 02/03/2022
 * This project is designed to make a system which can avoid accidents by detecting the obstacle and controlling the speed of the car.
 */


//Pin number for ultrasonic sensors
#define TRIG_PIN 6
#define ECHO_PIN 7 
//Pin number for LED
#define LED_PIN 2
#define DISTANCE_THRESHOLD 100 
//Pin number for buzzer
#define BUZZ_PIN 8
//Pin number for motor driver and motor
#define M1_EA 9
#define M2_EA 5
#define M1_1 10
#define M1_2 4
#define M2_1 11
#define M2_2 12

//Variable for motor speed
int motor_speed;

//Variable for ultrasonic sensor
float duration_us, distance_cm;

//Start main function
void setup() {
  Serial.begin (9600);  //Establishing serial connection       
  pinMode(TRIG_PIN, OUTPUT); //Set TRIG_PIN as output 
  pinMode(ECHO_PIN, INPUT); //Set ECHO_PIN as input  
  pinMode(LED_PIN, OUTPUT); //Set LED_PIN as output 
  pinMode(M1_1,   OUTPUT); //Set M1_1 pin as output
  pinMode(M1_2,   OUTPUT); //Set M1_2 pin as output
  pinMode(M2_1,   OUTPUT); //Set M2_1 pin as output
  pinMode(M2_2,   OUTPUT); //Set M2_2 pin as output
}

//Start loop function
void loop() {
  digitalWrite(TRIG_PIN, HIGH); //Sets TRIG_PIN on HIGH state for 10 micro seconds
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  duration_us = pulseIn(ECHO_PIN, HIGH); //Reads the ECHO_PIN, returns the wave travel time in microseconds
  
  //Calculating distance in cm
  distance_cm = 0.017 * duration_us;
  int a_delay = distance_cm * 10;

  //Checking if the obstacle is within the range
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
  Serial.print("distance: "); //Prints the distance on the serial monitor
  Serial.print(distance_cm);
  Serial.println(" cm");
}
//End of loop function

//This function is called when the obstacle is within the range
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

//This function is called when the obstacle is out of the range
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
    
