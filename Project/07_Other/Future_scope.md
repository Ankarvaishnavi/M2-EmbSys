## Accidents prevention system can be implemented on major level

## Abstract
- Accidents nowadays are mostly caused by the driver's failure to hit the brakes or by the driver's negligence. 
- The project's goal is to create a prototype system that provides collision functionality in production vehicles, a system that can operate automatically with the help of high-profile sensors based on relay circuits and some changes in traditional braking systems, and a system that can apply the brake automatically in an emergency situation. The resulting system is capable of high-accuracy measurements as well as improved short-distance measurement. 
- This measurement of distance is used to control a smart braking system for safety applications. The system's brain can be built on an Arduino Nano microcontroller.
The Ultrasonic sensors are the system's eyes, and they are less expensive and require less demanding technology. 
- The 3/2solenoid valve, which actuates the brakes and clutch, is used for braking.

## Introduction
- Vehicle technology has advanced rapidly in recent years, particularly in terms of braking and sensing systems. ASS (active safety systems) are being researched and developed to help prevent accidents and mitigate damage. 
- The project seeks to distinguish between current systems in production, such as traction control (TC), electronic brake force distribution (EBD), anti-lock braking system (ABS), and electronic stability control (ESC), and future systems in development. 
- When considering a vehicle, the braking system is such an important component that it is unavoidable. It reduces the kinetic energy of the vehicle in situations where the vehicle must slow down or stop.

## Components can be used in this project: 
1. Ultrasonic sensor 
2. Arduinonano 
3. 3/2Solenoid valve 
4. Single acting pneumatic cylinde

### Ultrasonic sensor

![image](https://user-images.githubusercontent.com/93757351/156927400-b3a734b4-8c47-4828-aa39-64f74ae8cf56.png)

- The ultrasonic sensor detects an obstruction in the direction of movement and sends a control signal to the microcontroller. 
- It serves as the control unit's eyes. 
- The HC-SR04 Ultrasonic Sensor is a low-cost proximity or distance sensor that has been utilised in a variety of robotics applications for obstacle avoidance. 
- It essentially gives your Arduino special awareness and sight. It comprises of two connecting terminals, T and R, where T stands for wave transmission and R for wave reception.

### Arduino Nano

![image](https://user-images.githubusercontent.com/93757351/156927473-9f149533-8058-40dd-8158-eca09e81ae42.png)

- Arduino Nano  is one  of the easiest and most commonly used microcontrollers.
- Arduinonano  is  user  friendly  type  of microcontroller  for  the  beginners  and  also  for coding/programming.  
- There  are  many  other microcontrollers which are being used for different purposes are per required. 

### Solenoid valve

![image](https://user-images.githubusercontent.com/93757351/156927523-fcb96082-7f6b-4697-a63e-406a6dd7013f.png)

- A solenoid valve is an electromechanically operated valve that is controlled by an electric current. In the case of a two-port valve, the flow is switched on or off, while in the case of a three-port valve, the outflow is switched between the two outlet ports. 
- It has the ability to operate both manually and automatically.
- Solenoid valves are the most commonly used fluid and pneumatic control elements. Their responsibilities include turning off, releasing, dosing, distributing, and mixing fluids.

### Single Acting cylinder

![image](https://user-images.githubusercontent.com/93757351/156927716-1e95df2b-8679-4d00-8fe9-80df10b4cd2d.png)

- A single-acting pneumatic cylinder is a mechanical device that uses compressed air to actuate the piston and reciprocates in a straight line.
- In most types of reciprocating engines, single-acting cylinders are used. Pneumatic cylinders are employed in most technical applications since they are clean and take up less space.

## Circuit
- The system consist of two ultrasonic sensors, kit of electronic control unit(microcontrollers, relays)  to give  input  and  output  for  sensor  and  Pneumatic circuit.
- The sensor  is  having  12volt  supply  and  can  measure hurdle up to 5m. 
- Consider a vehicle that is constantly travelling at 30 km/h, and when an accident occurs due to a variety of factors such as driver negligence, or in the worst-case scenario, the driver has fallen asleep and the vehicle is approaching an obstacle at the same speed, the role of a smart braking system comes into play.

## Working
- The ultrasonic sensor detects obstacles in the vehicle's route and provides continuous input to the microcontroller.
- The microcontroller, which has been programmed specifically for the vehicle on which it is used.
- Now the microcontroller sends a signal to the brake actuation system, which regulates the braking system to lessen the vehicle's speed or bring it to a complete stop to avoid accidents.
- The braking system consists of brakes (disc brakes or drum brakes) that must be actuated manually by the driver as well as automatically by the smart braking system using solenoids.
- Solenoids are electromechanically actuated valves that open and close when electrical energy is applied to them. When the ultrasonic sensor detects an obstacle, the solenoid is powered by a 12v relay and the pneumatic cylinder is actuated.
- The designed smart braking system includes braking constraints, which instruct the vehicle when it needs to stop automatically by sensing the range or distance of an obstacle while driving.

## Conclusion
The following are some of the smart braking system conclusions that can be drawn utilising ultrasonic sensors:
- The Arduino nano microcontroller is simple to use and assists beginning mechanical engineers in providing better coding/programming for automatic braking systems.
- Ultrasonic sensors are less expensive than other sensors and have a greater sensing range of up to 5 metres.
- The pneumatic actuation system used is lighter and more compact, and it provides better actuation than the hydraulic actuation system.
- The smart braking system makes a decision based on microcontroller inputs and automatically applies the brakes and controls the car in the event of a dangerous accident. As a result, putting this system in place can help to lessen the risk of close-call incidents.
- It can also be concluded that the current project work is not exhaustive because it can be expanded by using different range sensors and actuating mechanisms. For engineers, current paper work becomes a ready reckoner in future project development.

## Referances

- G.V.Sairam,  B.Suresh,  CH.SaiHemanth  and K.KrishnaSai,“Intelligent  mechatronic  braking system”,  International  Journal  of  Emerging Technology  and  Advanced  Engineering,  ISSN 2250-2459,  ISO  9001:2008  Certified  Journal, Volume 3,Issue 4, April 13
- NishadVivekKumbhojkar&ChaitanyaAvadhutchintanKuber  Ultrasonic  Automatic Braking System  For  Forward  Collision  Avoidance  With Accelerator  Pedal  Disengagement Mechanism,International  journal  &  magazine  of engineering, technology, management and research registrar of Newspapers  of India(RNI) Regd  No: APENG/2011/47294 

