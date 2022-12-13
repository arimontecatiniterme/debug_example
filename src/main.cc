#include <Arduino.h>

#define LED_BUILTIN 2

int rit=1000; // indica i ms di ritardo
int var=0;    // una variabile di prova

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  var++; // incrementa la variabile di prova
  
  
  digitalWrite(LED_BUILTIN, HIGH);   // Arduino: turn the LED on (HIGH)
                                     // D1 Mini: turns the LED *off*
  delay(rit);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // Arduino: turn the LED off (LOW)
                                     // D1 Mini: turns the LED *on*
  delay(rit);                       // wait for a second
}
