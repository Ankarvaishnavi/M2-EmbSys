# Introduction 
## Content
1. Problem statement
2. Solution
3. Abstract
4. 5W’s and 1H
5. SWOT analysis
6. Future Scope
7. Research 

## INTRODUCTION

### Problem statement
- Sudden appearance of obstacle while driving is a major reason for vehicle accidents.
- The response time varies from person to person in this situation.
- At that point of time, controlling the vehicle becomes a difficult task.

### Solution
In this proposed system I am trying to lower the number of accidence by giving the alert to the driver and decrease the speed of the vehicle.

### Abstract
The proposed system helps the drier to avoid the accidents by controlling the car on time. The accident prevention system includes ultrasonic wave emitter installed in front of the car producing and emitting the ultrasonic waves. It will also receive ultrasonic waves and gives the distance between the obstacle and car.

The micro-controller is used to operate in such a way that it can controls the speed of car based on the information detected.

In this system include ultrasonic sensors and buzzer is used as an input. These are used to receive the signals if any obstacle comes under the range and will give the alert signal to the driver so that driver can take necessary actions to avoid accidents.
This system also includes motor driver and potentiometer to control the speed of the car.

### 5W’s and 1H

1. What?
- Accident prevention system

2. Where?
- In any vehicle like car, bike, truck, etc

3. When?
- When any obstacle appears while driving

4. Who?
- People who wants to have a safe drive

5. Why?
- To avoid accidents

6. How?
- With the help of ultrasonic sensors and micro-controller

### S.W.O.T Analysis
- The following image represents analysis made on the project
![SWOT_Analsys](https://user-images.githubusercontent.com/93757351/155708877-995139e6-d04a-4e43-911b-97568ba8d3b1.JPG)

### Future scope
- GPS(Global Positioning System) and GSM(Globalization Management System) can be use. 
- Both of these are useful after the accidents had happened as GPS is used to give information regarding the location
- GSM is used for sending messages from the user mobile to indicate the authority that accident happened.



### Research
- Publisher Name: International Journal of engineering research and technology (IJERT)
- ISSN: 2278-0181
- Paper ID: IJERTV10IS050237

 
## REQUIREMENTS

### High level requirement
| ID | High level requirements |
|----| ----------- |
| HLR01 | It shall have detect the obstacle |
| HLR02 | It shall have give alert signal to driver |
| HLR03 | It shall have display the distance between the obstacle and vehicle |
| HLR04 | It shall control the speed according to the voltage |

### Low level requirements
| ID | Low level requirements for HLR01 |
| --- |-----------------------------------|
| H01-LLR01 | Ultrasonic sensor shall detect the object under the range of 5m |
| H01-LLR02 | As the distance decrease the buzzer shall have beep more |

| ID | Low level requirements for HLR02 |
|--- | -------------------------- |
| H02-LLR01 | Buzzer shall start buzzing as the object detected under 5m |
| H02-LLR01 | As the distance of the obstacle decrease at 2.5 m the intensity of the buzzer shall increase |

| ID |  Low level requirements for HLR03|
|--- | ---------------------- |
| H03-LLR01 | LCD display shall display the value of distance on the screen |
| H03-LLR02 | It shall display how far or near the object is |

| ID | Low level requirement for HLR04 |
| ---| ----------- |
| H03-LLR01 | Potentiometer shall detect the correct voltage |
| H03-LLR02 | Speed of the motor shall decrease according to the information |   



    

