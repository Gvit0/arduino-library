#include <Arduino.h>
class driverControl {
  private:
    int _sPR;
    int _sPL;
    int _IN1;
    int _IN2;
    int _IN3;
    int _IN4;
    int _ENA;
    int _ENB;
    int _Speed;
    int _jX;
    int _jY;
  public:
    driverControl(int IN1, int IN2, int IN3, int IN4, int ENA, int ENB);
    void forward(int _Speed);
    void back(int _Speed);
    void left(int _Speed);
    void right(int _Speed);
    void stop();
    void tleft(int _Speed);
    void tright(int _Speed);
    void joystick(int _jX,int _jY);
};
