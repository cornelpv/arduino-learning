/*
Download from http://robotica.md/

*/

int sensorPin = A0;    // pin intrare pentru potentiometru (neaparat pin analogic!)
int ledPin = 13;      // pin intrare LED
int sensorValue = 0;  // variabilă pentru a stoca valoarea provenită de la senzor

void setup() {
  // inițializarea pin LED ca fiind OUTput (ieșire)  pinMode(ledPin, OUTPUT);
}

void loop() {
  // citirea valorii de la senzor
  sensorValue = analogRead(sensorPin);
  // aprindere LED
  digitalWrite(ledPin, HIGH);
  // oprire program pt <sensorValue> milisecunde:
  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(ledPin, LOW);
// oprire program pt <sensorValue> milisecunde:  delay(sensorValue);
}
