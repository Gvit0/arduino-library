#include <Arduino.h>
class driverControl {
  private:
    int _IN1;
    int _IN2;
    int _IN3;
    int _IN4;
    int _ENA;
    int _ENB;
  public:
    driverControl(int IN1, int IN2, int IN3, int IN4, int PinSpeedA, int PinSpeedB);
    void forward(int SpeedA, int SpeedB);
    void back(int SpeedA, int SpeedB);
    void left(int SpeedA, int SpeedB);
    void right(int SpeedA, int SpeedB);
	void stop();
	void tleft(int SpeedA, int SpeedB);
    void tright(int SpeedA, int SpeedB);
};