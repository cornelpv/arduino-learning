/*
Download from http://robotica.md/

*/

int ledPins[] = {2,3,4,5,6,7,8,9};   // pinii la care sunt conectați LEDurile 
  void setup()
{

  // configurarea pinilor ca fiind de ieșire (numeratoarea începe de la 0)

  pinMode(ledPins[0],OUTPUT);  // ledPins[0] = 2
  pinMode(ledPins[1],OUTPUT);  // ledPins[1] = 3
  pinMode(ledPins[2],OUTPUT);  // ledPins[2] = 4
  pinMode(ledPins[3],OUTPUT);  // ledPins[3] = 5
  pinMode(ledPins[4],OUTPUT);  // ledPins[4] = 6
  pinMode(ledPins[5],OUTPUT);  // ledPins[5] = 7
  pinMode(ledPins[6],OUTPUT);  // ledPins[6] = 8
  pinMode(ledPins[7],OUTPUT);  // ledPins[7] = 9
}
void loop()
{
  oneAfterAnother();  // se aprind LEDurile în consecutivitate
  //oneOnAtATime();         // se aprind toate odata
  //pingPong();             // fix ca oneAfterAnother, doar ca după ce ajunge la ultimul led se schimbă direcția
}

// #program 1 LEDuri aprinse consecutiv
void oneAfterAnother()
{
  int index;
  int delayTime = 100; //  100ms pauză între Leduri
                       
  for(index = 0; index <= 7; index = ++index)
  {
    digitalWrite(ledPins[index], HIGH);
    delay(delayTime);                
  }                                  
  for(index = 7; index >= 0; index = --index)  
  {
    digitalWrite(ledPins[index], LOW);
    delay(delayTime);
  }               
}
 
// #program2 toate LEDurile aprinse odate

void oneOnAtATime()
{
  int index;
  int delayTime = 100; //  100ms pauză între Leduri                       
  
  for(index = 0; index <= 7; index = ++index)
  {
 digitalWrite(ledPins[index], HIGH);  // aprinde LEDuri
    delay(delayTime);                    // pauză digitalWrite(ledPins[index], LOW);   // stinge LEDuri
  }
}
// #program3 joc ping pong
void pingPong()
{
  int index;
  int delayTime = 100; //  100ms pauză între Leduri   
  for(index = 0; index <= 7; index = ++index)   
  {
 digitalWrite(ledPins[index], HIGH);  // aprinde LEDuri
    delay(delayTime);                    // pauză
  digitalWrite(ledPins[index], LOW);   // stinge LEDuri
  }
 
  for(index = 7; index >= 0; index = --index)   
  {
 digitalWrite(ledPins[index], HIGH);  // aprinde LEDuri
    delay(delayTime);                    // pauză    digitalWrite(ledPins[index], LOW);   // stinge LEDuri
  }
}
