/*
leds move from the sides to the middle and back
*/
int timer = 300;

void setup() {
  for (int thisPin = 2; thisPin < 8; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  int inversePin = 2;
  for (int thisPin = 7; thisPin >=5; thisPin--) {
    digitalWrite(thisPin, HIGH);
    digitalWrite(inversePin, HIGH);
    delay(timer);
    digitalWrite(thisPin, LOW);
    digitalWrite(inversePin, LOW);
    inversePin++;
  }

  inversePin = 4;
  for (int thisPin = 5; thisPin <= 7; thisPin++) {
    digitalWrite(thisPin, HIGH);
    digitalWrite(inversePin, HIGH);
    delay(timer);
    digitalWrite(thisPin, LOW);
    digitalWrite(inversePin, LOW);
    inversePin--;
  }
}
