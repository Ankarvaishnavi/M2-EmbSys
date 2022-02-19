![Untitled Diagram (5)](https://user-images.githubusercontent.com/93757351/154632060-719faf07-187a-46db-bcb7-1627fb29aa93.jpg)

##  INTRODUCTION:

- Washing machine provides extensive support in home automation applications. It mainy contains sensors, actuators, control unit and application specific user interfaces like keyboards, display units. LED’s for accepting user’s inputs and providing visual indications.

- These user interfaces are used to find and  giving inputs and outputs.
- It contain sensors like water level sensors, temperature sensors, ph sensors, etc.

- Contains actuators like spin and agitators, control motor units. Actuators are the electric pulses that controls any particular devices. eg. Solenoid valves, agitatiors .

- Embedded controllers for controlling the washing operations.

- Sensors, actuators and I/O devices are interfaced to the I/P sub-system of embedded control unit.
- Once you prepare a particular microcontroller for particular task then it cannot be used in any other applications. That means the microcontroller that is used in washing machine cannot be used in any other applications.

## COMPONENTS
In this washing machine various components can be used. These components can be divided into different modules.
Such as Main board, interface module, power and power unit module.
#### Main Board:
##### A 32-bit microcontroller - Let's take STM32. It belongs to microcontroller ICs based on 32 bit RISC. It licences the ARM Processor IP. The ARM core design have numerious configurable options and ST chooses the individual configuration to use for each design.
##### 

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
