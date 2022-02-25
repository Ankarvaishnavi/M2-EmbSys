### Structural diagram

- BLOCK DIAGRAM

![APS_Block diagram](https://user-images.githubusercontent.com/93757351/155698624-d690b5a2-77a3-46d5-9b59-7b185c4d2075.png)

- UML DIAGRAM

![Untitled Diagram (10)](https://user-images.githubusercontent.com/93757351/155726091-f0118ec7-6fee-4062-833c-d494a5091716.jpg)

## Components description

***Microcontroller***

This is the brain of the system 

**Atmega328**
- Here we used Atmega328, it supports 8-bit data processing. Atmega328 has 32KB internal flash memory and 1KB electrically
- Erasable programmable read-only memory : If the electric supply supplied to the microcontroller is removed, even then it can store the data and can provides results after providing it with the electric supply.

***Sensor***

**Ultrasonic sensor**
- It sends an ultrasonic pulse out at 40KHz which travels through the air and if there is an obstacle or object, it will bounce back to the sensor. 
- By calculating the travel time and speed of sound, the distance can be calculated. 
- Ultrasonic sensors are a great solution for the detection of the clear objects.

**Potentiometer**
- Potentiometer can also be used to control motor speed.
- When used to vary voltage, a potentiometer can be connected to a motor through motor driver and vary the voltage and therefore power delivered to  motor which will control its speed.

***Actuator***

**DC Motor**
- An electric motor is an electrical machine that converts electrical energy into mechanical energy. 
- Most electric motors operate through the interaction between the motor's magnetic field and electric current in a wire winding to generate force in the form of torque applied on the motor's shaft.

**Motor driver**
- Motor drivers acts as an interface between the motors and the control circuits.
- Motor require high amount of current whereas the controller circuit works on low current signals. 
- So the function of motor drivers is to take a low-current control signal and then turn it into a higher-current signal that can drive a motor.

***Output***

**Buzzer**
- The buzzer is a sounding device that can convert audio signals into sound signals. It is usually powered by DC voltage. 
- It is widely used in alarms, computers, printers and other electronic products as sound devices.

**LCD Display**
- LCD display is used to see the distance between the vehicle and obstacle