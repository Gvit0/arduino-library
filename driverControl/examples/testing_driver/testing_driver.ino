#include <driverControl.h>
/*
conecting:
IN1-2
IN2-3
IN3-4
IN4-5
ENA-9
ENB-10
*/
driverControl drive1(2, 3, 4, 5, 9, 10);

void setup() {
  drive1.forward(255, 255);
  delay(1000);
  drive1.forward(128, 128);
  delay(1000);
  drive1.back(255, 255);
  delay(1000);  
  drive1.left(255, 255);
  delay(1000); 
  drive1.right(255, 255);
  delay(1000);   
  drive1.tright(255, 255);
  delay(1000); 
  drive1.tleft(255, 255);
  delay(1000); 
  drive1.stop();
}

void loop() {

}
