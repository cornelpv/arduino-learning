/*
12 steps of intensity
*/

int led = 9;
int brightness = 0;
int fadeAmount = 21;
void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  analogWrite(led, brightness);

  brightness = brightness + fadeAmount;
  if(brightness > 255) brightness = 255;
  if(brightness < 0) brightness = 0;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  
  delay(50);
}
