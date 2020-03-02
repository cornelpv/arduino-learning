/*
when button is pressed/hold, the led should blink 2 with a pause
when the button is not pressed, the led is on

*/

const int buttonPin = 2;
const int ledPin =  13;

int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}
void loop() {
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == LOW) {
    digitalWrite(13, HIGH);
  } else {
    delay(100);
    digitalWrite(13, LOW);
    delay(100);

    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(100);

    delay(500);
    digitalWrite(ledPin, HIGH);
  }
}
