
# Accident prevention system

## Contents

1. Introduction 
    - Problem statement
    - Solution
    - Abstract
    - 5W’s and 1H
    - SWOT analysis
    - Feature
2. Requirements
    - High level requirements
    - Low level requirements
3. Diagrams
    - Structural diagram
    - Behavioral diagram
4. Description of components
5. Test Plan
6. Future scope



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




## REQUIREMENTS

### High level requirement
| ID | High level requirements |
|----| ----------- |
| HLR01 | It shall have detect the obstacle |
| HLR02 | It shall have give alert signal to driver |
| HLR03 | It shall control the speed according to the voltage |

### Low level requirements
| ID | Low level requirements for HLR01 |
| --- |-----------------------------------|
| H01-LLR01 | Ultrasonic sensor shall detect the object under the range of 5m |
| H01-LLR02 | As the distance decrease the buzzer shall have beep more |

| ID | Low level requirements for HLR02 |
|--- | -------------------------- |
| H02-LLR01 | Buzzer shall start buzzing as the object detected under 5m |
| H02-LLR01 | As the distance of the obstacle decrease at 2.5 m the intensity of the buzzer shall increase |

| ID | Low level requirement for HLR03 |
| ---| ----------- |
| H03-LLR01 | Potentiometer shall detect the correct voltage |
| H03-LLR02 | Speed of the motor shall decrease according to the information |


## Diagrams 

### Structural diagram

- BLOCK DIAGRAM
![APS_Block diagram](https://user-images.githubusercontent.com/93757351/155698624-d690b5a2-77a3-46d5-9b59-7b185c4d2075.png)

### Behavioural diagram

- WORKFLOW DIAGRAM
