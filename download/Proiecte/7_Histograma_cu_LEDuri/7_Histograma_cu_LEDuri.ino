/*
Download from http://robotica.md/

*/

const int analogPin = A0;   // 
const int ledCount = 10;    // Nr. LEDuri
int ledPins[] = {
  2, 3, 4, 5, 6, 7, 8, 9, 10, 11
};   // pinii la care sunt conectati LEDurile

void setup() {
  // setam toti pinii ca fiind iesiri
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
}
void loop() {
  // citirea datelor de la potentiometru
  int sensorReading = analogRead(analogPin);
  // intervalul de la 0 la nr. de LEDuri
  int ledLevel = map(sensorReading, 0, 1023, 0, ledCount);
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    if (thisLed < ledLevel) {
      digitalWrite(ledPins[thisLed], HIGH);
    }
else {
      digitalWrite(ledPins[thisLed], LOW);
    }
  }
}
