/*
blink the SOS code: 3 long, 3 short, 3 long, pause, repeat
*/

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  blinkShort();
  blinkLong();
  blinkShort();
  delay(2000);
}

void blinkLong(){
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(800);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(800);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(800);
}

void blinkShort(){
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(800);
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(800);
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(800);
}
