# ROBOTIC ARM USING ARDUINO

## Abstract
This project presents a joystick-controlled robotic arm developed using an Arduino Uno and servo motors.
The system allows real-time manual control of the robotic arm by translating analog joystick inputs into precise servo movements.
The project focuses on simplicity, affordability, and hands-on learning of basic robotics and embedded system concepts.

## Objective
- To design a manually controlled robotic arm using Arduino
- To understand servo motor control using PWM
- To process analog inputs from a joystick
- To gain practical exposure to robotics and embedded systems

## Components Used
- Arduino Uno
- Servo Motors (2)
- Analog Joystick Module
- Breadboard
- Jumper Wires
- Battery Pack
- Ice cream sticks (arm structure)

## Working Principle
The robotic arm is controlled using a two-axis analog joystick connected to an Arduino Uno.
The joystick provides analog voltage values corresponding to its X and Y axis movements.
These values are read by the Arduino through its analog input pins.

The Arduino maps the joystick input values to angular positions for the servo motors.
Based on the mapped values, PWM signals are generated to control the servo motors.
One servo controls the horizontal movement of the arm, while the other controls the vertical movement.

A small dead-zone is implemented in the control logic to avoid unwanted jitter when the joystick is near the center position.
This allows smooth, stable, and real-time control of the robotic arm.


📌 Status: Code and implementation details will be added step by step.
