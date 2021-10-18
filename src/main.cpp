#include <Arduino.h>

int delay_on = 250;
int delay_total = 1000;

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delay_on);              // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(delay_total-delay_on);              // wait for a second
}
