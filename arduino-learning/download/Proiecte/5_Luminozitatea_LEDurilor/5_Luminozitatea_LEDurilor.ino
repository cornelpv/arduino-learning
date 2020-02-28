/*
Download from http://robotica.md/

*/

int led = 9;           // pin PWM conectat LED
int brightness = 0;    // nivel luminozitate LED
int fadeAmount = 5;    // nr. devizărilor luminozității
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
}
void loop() {
 // setarea luminozității LED
  analogWrite(led, brightness);

  // modificarea luminozității pentru următorul ciclu
  brightness = brightness + fadeAmount;

  // creșterea/descreșterea luminozității
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // pauză 30 milisecunde între cicluri
  delay(30);
}
