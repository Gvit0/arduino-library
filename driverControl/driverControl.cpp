#include <Arduino.h>
#include "driverControl.h"
driverControl::driverControl(int IN1, int IN2, int IN3, int IN4, int ENA, int ENB) {
  _IN1 = IN1;
  _IN2 = IN2;
  _IN3 = IN3;
  _IN4 = IN4;
  _ENA = ENA;
  _ENB = ENB;
  pinMode(_IN1, OUTPUT);
  pinMode(_IN2, OUTPUT);
  pinMode(_IN3, OUTPUT);
  pinMode(_IN4, OUTPUT);
  pinMode(_ENA, OUTPUT);
  pinMode(_ENB, OUTPUT);
}

void driverControl::forward(int SpeedA, int SpeedB) {
  digitalWrite(_IN1, 1);
  digitalWrite(_IN2, 0);
  digitalWrite(_IN3, 1);
  digitalWrite(_IN4, 0);
  analogWrite(_ENA, SpeedA);
  analogWrite(_ENB, SpeedB);
}

void driverControl::back(int SpeedA, int SpeedB) {
  digitalWrite(_IN1, 0);
  digitalWrite(_IN2, 1);
  digitalWrite(_IN3, 0);
  digitalWrite(_IN4, 1);
  analogWrite(_ENA, SpeedA);
  analogWrite(_ENB, SpeedB);
}

void driverControl::left(int SpeedA, int SpeedB) {
  digitalWrite(_IN1, 0);
  digitalWrite(_IN2, 0);
  digitalWrite(_IN3, 1);
  digitalWrite(_IN4, 0);
  analogWrite(_ENA, SpeedA);
  analogWrite(_ENB, SpeedB);
}

void driverControl::right(int SpeedA, int SpeedB) {
  digitalWrite(_IN1, 1);
  digitalWrite(_IN2, 0);
  digitalWrite(_IN3, 0);
  digitalWrite(_IN4, 0);
  analogWrite(_ENA, SpeedA);
  analogWrite(_ENB, SpeedB);
}

void driverControl::stop(){
  digitalWrite(_IN1, 0);
  digitalWrite(_IN2, 0);
  digitalWrite(_IN3, 0);
  digitalWrite(_IN4, 0);
}

void driverControl::tleft(int SpeedA, int SpeedB) {
  digitalWrite(_IN1, 0);
  digitalWrite(_IN2, 1);
  digitalWrite(_IN3, 1);
  digitalWrite(_IN4, 0);
  analogWrite(_ENA, SpeedA);
  analogWrite(_ENB, SpeedB);
}

void driverControl::tright(int SpeedA, int SpeedB) {
  digitalWrite(_IN1, 1);
  digitalWrite(_IN2, 0);
  digitalWrite(_IN3, 0);
  digitalWrite(_IN4, 1);
  analogWrite(_ENA, SpeedA);
  analogWrite(_ENB, SpeedB);
}