#include "Arduino.h"
#include "max1749.h"

MAX1749::MAX1749(uint8_t pin) {
  _pin = pin;

  initialize();
}

void MAX1749::initialize() {
  pinMode(_pin,OUTPUT);

  off();
}

void MAX1749::on() {
  actuate(HIGH);
}

void MAX1749::off() {
  actuate(LOW);
}

bool MAX1749::getState() {
  return _state;
}

uint8_t MAX1749::getPin() {
  return _pin;
}

void MAX1749::actuate(bool state) {
  _state = state;

  digitalWrite(_pin,_state);
}
