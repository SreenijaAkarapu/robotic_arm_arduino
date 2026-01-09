#include <Servo.h>

// Create servo objects
Servo servo1;
Servo servo2;

// Joystick analog pins
int joyX = A0;
int joyY = A1;

// Variables to store joystick values
int joyValX, joyValY;

// Initial servo positions
int currentPos1 = 90;
int currentPos2 = 90;

// Dead-zone to avoid jitter
int deadZone = 30;

void setup() {
  // Attach servos to PWM pins
  servo1.attach(3);
  servo2.attach(5);

  // Set initial position
  servo1.write(currentPos1);
  servo2.write(currentPos2);
}

void loop() {
  // Read joystick values
  joyValX = analogRead(joyX);
  joyValY = analogRead(joyY);

  // Calculate deviation from center
  int deltaX = joyValX - 512;
  int deltaY = joyValY - 512;

  // Horizontal movement
  if (abs(deltaX) > deadZone) {
    currentPos1 = constrain(currentPos1 + deltaX / 50, 0, 180);
    servo1.write(currentPos1);
  }

  // Vertical movement
  if (abs(deltaY) > deadZone) {
    currentPos2 = constrain(currentPos2 + deltaY / 50, 0, 180);
    servo2.write(currentPos2);
  }

  delay(50); // Smooth motion
}
