# Introduction 
## Content
1. Problem statement
2. Solution
3. Abstract
4. Introduction about proposed system
5. 5W’s and 1H
6. SWOT analysis
7. Future Scope
8. Research 
9. Referances

# Requirements
## Content
1. High level requirements
2. Low level requirements

## INTRODUCTION

### Problem statement
- Sudden appearance of obstacle while driving is a major reason for vehicle accidents.
- The response time varies from person to person in this situation.
- At that point of time, controlling the vehicle becomes a difficult task.

### Solution
In this proposed system I am trying to lower the number of accidence by giving the alert to the driver and decrease the speed of the vehicle.

### Abstract

- An accident is an undesirable event that occurs without warning and usually results in property damage or injuries. Accident Controller Using Microcontroller (ATmega328) is a way for preventing accidents by using ultrasonic sensors. Automatic and Manual driving modes are included in the proposed system. Sensors will be engaged in automatic mode, and depending on which sensor detects impediments, it will undertake the relevant task of turning, slowing down, and applying brakes. Sensors will be deactivated in manual mode, and the steering and braking systems will be controlled by the driver.



### Introducation about proposed syatem
- Driving is a necessary action for the majority of people.
- The number of vehicles on the road is growing by the day. Every year, hundreds of people are killed in highway accidents. Accidents can happen at any time and in any place, causing environmental damage or human violations and death. Most accidents occur as a result of a delay in applying brakes.
- The proposed method is intended to advance a new system that can provide a solution to a problem. If the driver fails to apply the brakes manually, the car's speed can be reduced as a result of the sensors detecting obstacles.
- By regulating the car in a timely manner, the proposed device assists the dryer in avoiding accidents. The ultrasonic wave emitter, which is situated in front of the car and produces and emits ultrasonic waves, is part of the accident prevention system. It will also receive ultrasonic vibrations, which will indicate the distance between the obstacle and the vehicle.

- The microcontroller is programmed to operate in such a way that it can control the car's speed based on the data collected.

- Ultrasonic sensors and a buzzer are employed as inputs in this system. These are used to receive signals if an obstacle enters the range and provide an alarm to the driver so that the driver may take the required precautions to avoid an accident.
A motor is also included in this arrangement.

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

### Referances
- [1] Swetha I Hiremath, Shruti M Sampagoan Shubha
D Ojanahalli, Santosh Bhajantri, Kaushik M,
“Adaptive Cruise Control System for Two Wheelers
to Avoid and Reduce Accidents”, pp. 92-99.

- [2]Jessen Joseph Leo, R.Monisha, B.T.Tharani Sri
Sakthi, A. John Clement Sunder, “Vehicle Movement
Control and Accident Avoidance in Hilly Track”,
International Conference on Electronics and
Communication System JCECS -2014, pp. 1-5.
 
 
 
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
| H02-LLR01 | Buzzer shall start buzzing as the object detected under 1m |
| H02-LLR01 | As the distance of the obstacle decrease at 0.25 m the intensity of the buzzer shall increase |

| ID |  Low level requirements for HLR03|
|--- | ---------------------- |
| H03-LLR01 | LCD display shall display the value of distance on the screen |
| H03-LLR02 | It shall display how far or near the object is |

| ID | Low level requirement for HLR04 |
| ---| ----------- |
| H03-LLR01 | Potentiometer shall detect the correct voltage |
| H03-LLR02 | Speed of the motor shall decrease according to the information |   



    

