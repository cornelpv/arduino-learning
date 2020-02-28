/*
Download from http://robotica.md/

*/

const int sensorPin = 0;
const int ledPin = 9;
// setam variabile globale pentru nivel de lumină:
int lightLevel;
int calibratedlightLevel; // calibrăm nivel lumină 
int maxThreshold = 0;     // nivel maxim lumină
int minThreshold = 1023;   // nivel minim lumină

void setup()
{
  pinMode(ledPin, OUTPUT);    // LED setat OUTput
  Serial.begin(9600);
}
void loop()
{
  lightLevel = analogRead(sensorPin);  // citește tensiunea de pe senzor
  Serial.print(lightLevel);
  calibratedlightLevel = map(lightLevel, 0, 1023, 0, 255);  // scalare nivel de la 0 la 255
Serial.print("\t");       // caracter tab
  Serial.print(calibratedlightLevel);   // o linie după
  analogWrite(ledPin, calibratedlightLevel);    // setează luminozitate LED
}
