/*
Download from http://robotica.md/

*/
int timer = 100;           // Timpul de pauza 

void setup() {
  // bucla pentru a initializarea iesirilor
  for (int thisPin = 2; thisPin < 8; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // bucla de la cel mai mic pana la cel mai mare
  for (int thisPin = 2; thisPin < 8; thisPin++) {
    digitalWrite(thisPin, HIGH);
    delay(timer);
digitalWrite(thisPin, LOW);
  }

  // bucla de la cel mai mare pana la cel mai mic
  for (int thisPin = 7; thisPin >= 2; thisPin--) {
    digitalWrite(thisPin, HIGH);
    delay(timer);
digitalWrite(thisPin, LOW);
  }
}
