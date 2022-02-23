# Case Study On Washing Machine

### Table of content
1. About
    - Description
    - Features
    - 4W's and 1H
    - SWOT analysis
2. Requirements
    - High level requirements
    - Low level requirements
3. Block diagram and description
4. Application



## Description:
A washing machine is a machine that washes dirty clothes. It contains a barrel into which the clothes are placed. This barrel is filled with water, and then rotated very quickly to make the water remove dirt from the clothes.

## Features: 

- Washing machine provides extensive support in home automation applications. It mainy contains sensors, actuators, control unit and application specific user interfaces like keyboards, display units. LED’s for accepting user’s inputs and providing visual indications.In this washing machine 32 bit microcontroller is used.
- These user interfaces are used to find and  giving inputs and outputs.
- It contain sensors like water level sensors, temperature sensors, ph sensors, etc.
- Contains actuators like spin and agitators, control motor units. Actuators are the electric pulses that controls any particular devices. eg. Solenoid valves, agitatiors .
- Embedded controllers for controlling the washing operations.
- Sensors, actuators and I/O devices are interfaced to the I/P sub-system of embedded control unit.
- Once you prepare a particular microcontroller for particular task then it cannot be used in any other applications. That means the microcontroller that is used in washing machine cannot be used in any other applications.

## 4W's and 1H

#### WHAT
- 32-bit microcontroller based washing machine
#### WHO
- People who wants to improve cleaning standards of clothes 
#### WHY
- It improves efficiency both domestically and commertially, saving time and labor required for cleaning of the clothes
#### WHEN
- When user wants to wash clothes
#### WHERE
- Home, hotels, laundry
#### HOW
- By implementating a user interface and functionalities to use it efficiently





## UML Diagram
![UML](https://user-images.githubusercontent.com/93757351/154840281-45c67ba9-cd24-411d-b5d7-d5b80f4f3621.JPG)

### Block diagram of washing controller
![Untitled Diagram (6)](https://user-images.githubusercontent.com/93757351/154830924-320d5f71-0366-4eb7-b7e6-9157d8710dff.jpg)


## COMPONENTS
In this washing machine various components can be used. These components can be divided into different modules.
Such as Main board, interface module, power and power unit module.
#### Main Board:
##### A 32-bit microcontroller 
- Let's take STM32. It belongs to microcontroller ICs based on 32 bit RISC. It licences the ARM Processor IP. The ARM core design have numerious configurable options and ST chooses the individual configuration to use for each design.
##### Input sensors 
- These sensors provides real-time monitoring and feedback to shorteen or improve some functions
##### USB Module 
- All modules communicate using serial communication network. It enables fast connection of the sensors to the computer. It provides power from the PC to the sensors and communication between the PC and sensors
##### RS485 Communication: 
- RS485 defines the electrical interface and physical layer of communication of electrical device
##### EEPROM (washing program) 
- It is electrically erasable programmable read only memory. It is user modifiable read only memory that can be erased and reprogrammed.
##### Buzzer 
- The buzzer is used as an indicator for starting as well as stopping of washing cycle.
#### Interface section 
##### There are two types of interfaces 
1. Input 
2. Output.
-  It also can be common washing machine interface or also be a touch screen containing different options for program
#### Power driver 
- This module communicates with host controller using analog signalor one of typical serial bus. It controls the drive
##### Motor module 
- The controller sends signals to motor to rotate.  
#### Power unit
- Low voltage approximately 3.2V, 5V, 15V
- High voltage 230 V



