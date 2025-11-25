#include <Arduino.h>

// LED on GPIO22, blink once every 2 seconds (1s on, 1s off)
const int LED_PIN = 22;

void setup() {
	pinMode(LED_PIN, OUTPUT);
	digitalWrite(LED_PIN, LOW);
}

void loop() {
	digitalWrite(LED_PIN, HIGH); // LED on
	delay(1000);                 // wait 1 second
	digitalWrite(LED_PIN, LOW);  // LED off
	delay(1000);                 // wait 1 second
}