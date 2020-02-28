/*
Download from http://robotica.md/

*/

const int buttonPin = 2;     // numărul pinului buton
const int ledPin =  13;      // numărul pinului LED

int buttonState = 0;         // variabilă pentru citirea stării butonului

void setup() {
  // inițializarea pin LED ca fiind OUTput (ieșire)
  pinMode(ledPin, OUTPUT);

  // inițializarea pin buton ca fiind INput (intrare)
  pinMode(buttonPin, INPUT);
}
void loop() {
  // citirea valorii butonului:
  buttonState = digitalRead(buttonPin);

  // verificare dacă butonul este apăsat.  
  if (buttonState == HIGH) {
    // aprindere LED
    digitalWrite(ledPin, HIGH);
  } else {
    // stingere LED
    digitalWrite(ledPin, LOW);
  }
}
