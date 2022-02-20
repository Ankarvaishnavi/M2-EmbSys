## Washing Machine
### Block diagram
![Untitled Diagram (5)](https://user-images.githubusercontent.com/93757351/154632060-719faf07-187a-46db-bcb7-1627fb29aa93.jpg)

##  INTRODUCTION:

- Washing machine provides extensive support in home automation applications. It mainy contains sensors, actuators, control unit and application specific user interfaces like keyboards, display units. LED’s for accepting user’s inputs and providing visual indications.In this washing machine 32 bit microcontroller is used.

- These user interfaces are used to find and  giving inputs and outputs.
- It contain sensors like water level sensors, temperature sensors, ph sensors, etc.

- Contains actuators like spin and agitators, control motor units. Actuators are the electric pulses that controls any particular devices. eg. Solenoid valves, agitatiors .

- Embedded controllers for controlling the washing operations.

- Sensors, actuators and I/O devices are interfaced to the I/P sub-system of embedded control unit.
- Once you prepare a particular microcontroller for particular task then it cannot be used in any other applications. That means the microcontroller that is used in washing machine cannot be used in any other applications.
### Block diagram of washing controller
![Untitled Diagram (6)](https://user-images.githubusercontent.com/93757351/154830924-320d5f71-0366-4eb7-b7e6-9157d8710dff.jpg)


## COMPONENTS
In this washing machine various components can be used. These components can be divided into different modules.
Such as Main board, interface module, power and power unit module.
#### Main Board:
##### A 32-bit microcontroller - Let's take STM32. It belongs to microcontroller ICs based on 32 bit RISC. It licences the ARM Processor IP. The ARM core design have numerious configurable options and ST chooses the individual configuration to use for each design.
##### Input sensors - These sensors provides real-time monitoring and feedback to shorteen or improve some functions
##### USB Module - All modules communicate using serial communication network. It enables fast connection of the sensors to the computer. It provides power from the PC to the sensors and communication between the PC and sensors
##### RS485 Communication: RS485 defines the electrical interface and physical layer of communication of electrical device
##### EEPROM (washing program) - It is electrically erasable programmable read only memory. It is user modifiable read only memory that can be erased and reprogrammed.
##### Buzzer - The buzzer is used as an indicator for starting as well as stopping of washing cycle.
#### Interface section 
##### There are two types of interfaces 1. Input 2. Output. It also can be common washing machine interface or also be a touch screen containing different options for program
#### Power driver 
##### This module communicates with host controller using analog signalor one of typical serial bus. It controls the drive
##### Motor module - The controller sends signals to motor to rotate.  
#### Power unit
##### - Low voltage approximately 3.2V, 5V, 15V
##### - High voltage 230 V
## REQUREMENTS:

### HIGH LEVEL REQUIREMENTS:

- Primary requiremnt is to wash cloths
- Should be able to control the level of water according to the ammount of cloths present in the drum
- Depending upon the cloths and the material of the cloths, water level should be adjusted
- To know the amount of detergent should be used for cloths present in the machine
- Turning on and off the rotation should be done effectively
- Door must be locked during the washing process
- User must be able to see the detailed information about the washing methods and its functions
- Can be able to save a sufficient amount of water.
- Should detect the imbalance in washing machine
- Should not consume more power in drying process

### LOW LEVEL REQUIREMENTS
Various components can be used to achieve high level requirements stated above.

- Pressure switch: water level sensor that can be used to control how high the tub can fill the water. It uses a pressure switch to detect the water level in the tub
- Temperature control switch: This switch contains the temperature sensor. 
- Actuarors: Actuators like agitator or water pump. It can be used to turn on or turn off the device that control the rest of machine
- Proximity sensors: This sensors can verify that the door is closed and latched before starting the washing machine
- For imbalance detection in washing machine, TE connectivity provides vibration sensing.
- Humidity sensors: This can be used to monitor the humidity and stops the dryer when cloths are dry instead of running longer. This can consume less power
- LCD Indicators: This can be used as display of washing machine. This gives the detailed information about the washing methods 