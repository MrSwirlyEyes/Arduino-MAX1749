/**
 * MAX1749 example: Toggle
 * 
 * Toggles MAX1749 ON and OFF for a fixed period of time.
 * Assumes the device the MAX1749 is switching on is a vibration motor.
 */

#include <MAX1749.h>

#define ENABLE 6

#define DELAY 500

MAX1749 vibe = MAX1749(ENABLE);

void setup() {
}

void loop() {
  vibe.on(); // Toggle vibration motor ON

  delay(DELAY);

  vibe.off(); // Toggle vibration motor OFF
 
  delay(DELAY);
}
