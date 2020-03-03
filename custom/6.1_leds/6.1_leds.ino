/*
reverse order of leds, make them change quicker
*/
int timer = 55;

void setup() {
  for (int thisPin = 2; thisPin < 8; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  for (int thisPin = 7; thisPin >=2; thisPin--) {
    digitalWrite(thisPin, HIGH);
    delay(timer);
digitalWrite(thisPin, LOW);
  }

  for (int thisPin = 2; thisPin < 8; thisPin++) {
    digitalWrite(thisPin, HIGH);
    delay(timer);
digitalWrite(thisPin, LOW);
  }
}
