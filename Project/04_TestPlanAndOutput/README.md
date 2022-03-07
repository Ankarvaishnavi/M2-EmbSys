## This folder contains the project's test plan and output.

# TEST PLAN AND OUTPUT

## High level test plan

| Test ID | Description | Input | Expcted output | Actual output | Status |
|---------| -----------| ------- | ------------- | ------------- | ------- |
| 01 | Detecting signal | Pulse | Object detected | Object detected | ✅ |
| 02 | Buzzer | Signal | Buzzing sound | Buzzing sound | ✅ | 
| 03 | LED | Signal | Glow | Glow | ✅ |
| 04 | DC Motor 1 | Data from microcontroller | Shall change speed | Shall change speed | ✅ |
| 05 | DC Motor 2 | Data from microcontroller | Shall chnage the speed | Shall change speed | ✅ |

## Low level test plan

| Test ID for Ultrasonic sensor | Description | Input | Expected output | Actual output | Status |
| ------------------------------| ----------- | ----- | --------------- | ------------- | ------ |
| 01 | TRIG_PIN | Pulse | HIGH | HIGH | ✅ |
| 02 | ECHO_PIN | Pulse | HIGH | HIGH | ✅ |

| Test ID for ADC | Description | Input | Expected output | Actual output | Status |
| ------------------------------| ----------- | ----- | --------------- | ------------- | ------ |
| 01 | Check for AnalogRead | 5V | 1023 | 1023 | ✅ |
| 02 | Check for AnalogRead | 0V | 0 | 0 | ✅ |

| Test ID for Buzzer | Description | Input | Expected output | Actual output | Status |
| ------------------------------| ----------- | ----- | --------------- | ------------- | ------ |
| 01 | Buzzing sound | Distance less than threshold | High intensity buzzing sound | High intensity buzzing sound | ✅ |
| 01 | Buzzing sound | Distance greater than threshold | No sound | No sound | ✅ |



