/*
enable debug print

*/

int sensorPin = A0;
int ledPin = 13;
int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  
  Serial.print(sensorValue);
  Serial.print("\n");

  digitalWrite(ledPin, HIGH);

  delay(sensorValue);

  digitalWrite(ledPin, LOW);

  delay(sensorValue);
}
