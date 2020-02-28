/*
Download from http://robotica.md/

*/

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);   // Aprinde LEDul
  delay(1000);              // Pauza 1 secunda
  digitalWrite(13, LOW);    // Stinge LEDul  
  delay(1000);              // Pauza 1 secunda
}
