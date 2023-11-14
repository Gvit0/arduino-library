#include <joystick.h>

joystick myJoystick(A0, A1, 2);
/*
conecting:
but-2
x-A0
y-A1
*/
int x;
int y;

void setup() {
  Serial.begin(9600);
}

void loop() {
  but=myJoystick.Rbut();
  Serial.print("But:   ");
  x,y = myJoystick.Read();

  x,y,but= myJoystick.ReadAll();
  Serial.print("ReadAll    ");
}
