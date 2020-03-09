/*
make it work with 6 leds
change the direction and the order of the leds
*/

const int analogPin = A0; 
const int ledCount = 6;
int ledPins[] = {2, 3, 4, 5, 6, 7};

void setup() {
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
}
void loop() {
  int sensorReading = analogRead(analogPin);
  
  int ledLevel = map(sensorReading, 0, 1023, 0, ledCount);

  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    if (thisLed < ledLevel) {
      digitalWrite(ledPins[thisLed], LOW);
    }
else {
      digitalWrite(ledPins[thisLed], HIGH);
    }
  }
}
