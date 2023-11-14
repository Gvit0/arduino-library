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

void driverControl::forward(int Speed) {
  digitalWrite(_IN1, 1);
  digitalWrite(_IN2, 0);
  digitalWrite(_IN3, 1);
  digitalWrite(_IN4, 0);
  analogWrite(_ENA, _Speed);
  analogWrite(_ENB, _Speed);
}

void driverControl::back(int Speed) {
  digitalWrite(_IN1, 0);
  digitalWrite(_IN2, 1);
  digitalWrite(_IN3, 0);
  digitalWrite(_IN4, 1);
  analogWrite(_ENA, _Speed);
  analogWrite(_ENB, _Speed);
}

void driverControl::left(int Speed) {
  digitalWrite(_IN1, 0);
  digitalWrite(_IN2, 0);
  digitalWrite(_IN3, 1);
  digitalWrite(_IN4, 0);
  analogWrite(_ENA, _Speed);
  analogWrite(_ENB, _Speed);
}

void driverControl::right(int Speed) {
  digitalWrite(_IN1, 1);
  digitalWrite(_IN2, 0);
  digitalWrite(_IN3, 0);
  digitalWrite(_IN4, 0);
  analogWrite(_ENA, _Speed);
  analogWrite(_ENB, _Speed);
}

void driverControl::stop(){
  digitalWrite(_IN1, 0);
  digitalWrite(_IN2, 0);
  digitalWrite(_IN3, 0);
  digitalWrite(_IN4, 0);
}

void driverControl::tleft(int Speed) {
  digitalWrite(_IN1, 0);
  digitalWrite(_IN2, 1);
  digitalWrite(_IN3, 1);
  digitalWrite(_IN4, 0);
  analogWrite(_ENA, _Speed);
  analogWrite(_ENB, _Speed);
}

void driverControl::tright(int Speed) {
  digitalWrite(_IN1, 1);
  digitalWrite(_IN2, 0);
  digitalWrite(_IN3, 0);
  digitalWrite(_IN4, 1);
  analogWrite(_ENA, _Speed);
  analogWrite(_ENB, _Speed);
}

void driverControl::joystick(int _jX,int _jY) {
  _jX = map(_jX, 0, 1023, -255, 255);
  _jY = map(_jY, 0, 1023, -255, 255);
  _sPR = _jY - _jX;
  _sPL = _jY + _jX;
  if (_sPR < 3 ){
    digitalWrite(_IN1, LOW);
    digitalWrite(_IN2, HIGH);
    _sPR = - _sPR;
  }
  else if (_sPR > 3 ){
    digitalWrite(_IN2, LOW);
    digitalWrite(_IN1, HIGH);
  }
  else if (_sPL < 3 ){
    digitalWrite(_IN3, LOW);
    digitalWrite(_IN4, HIGH);
    _sPL = - _sPL;
  }
  else if (_sPL > 3 ){
    digitalWrite(_IN4, LOW);
    digitalWrite(_IN3, HIGH);
  }


  analogWrite(_ENB, _sPL);
  analogWrite(_ENA, _sPR);
}