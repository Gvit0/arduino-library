#include <driverControl.h>

driverControl drive1(2, 3, 4, 5, 9, 10);
/*
conecting:
IN1-2
IN2-3
IN3-4
IN4-5
ENA-9
ENB-10
VRx-A0
VRy-A1
*/
int x;
int y;

void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}

void loop() {
  x = analogRead(A0);
  y = analogRead(A1);
  drive1.joystick(x,y);
}
