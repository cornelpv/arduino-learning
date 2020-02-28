/*
Download from http://robotica.md/

*/

const int RED_PIN = 9;
const int GREEN_PIN = 10;
const int BLUE_PIN = 11;

const int DISPLAY_TIME = 1000;  // timp rulare culoare
void setup()  //setarea pinilor ca fiind OUTput
{
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop()
{
  mainColors();        // combinații de culori
  //  showSpectrum();    // gradienți
}
void mainColors()
{
  digitalWrite(RED_PIN, LOW); // toate LEDurile stinse
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
  delay(DISPLAY_TIME);

  digitalWrite(RED_PIN, HIGH); // culoarea roșie
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
  delay(DISPLAY_TIME);

  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH); // culoarea verde
  digitalWrite(BLUE_PIN, LOW);
  delay(DISPLAY_TIME);
 
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH); // culoarea albastră
  delay(DISPLAY_TIME);

  // culoarea galbena (roșu și verde)
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
  delay(DISPLAY_TIME);

  // Cyan (verde și albastru)
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
  delay(DISPLAY_TIME);

  // culoarea violeta (roșu și albastru)
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
  delay(DISPLAY_TIME);

}

void showSpectrum()
{
  for (int x = 0; x <= 767; x++)
  {
    RGB(x);      // se incrementează valoarea lui x și se modifică nuanța culorii
    delay(10);   // întârziere de timp 10 ms (1/100 din secundă) - pentru a ajuta la "netezirea"  
  }
}

void RGB(int color)
{
  int redIntensity;
  int greenIntensity;
  int blueIntensity;

  color = constrain(color, 0, 767); // constrângerea valoarilor de intrare la un interval de la 0 la 767


if (color <= 255)       // interval 1 de la roșu la verde
  {
    redIntensity = 255 - color;    // roșu merge de la pornit la oprit   
 greenIntensity = color;        // verde merge de la oprit la pornit
    blueIntensity = 0;             // alabstru este mereu oprit
  }
  else if (color <= 511)  // (256 - 511) interval 2 de la verde la albastru
  {
    redIntensity = 0;                     // roșu mereu oprit
    greenIntensity = 511 - color;         // verde la pornit la oprit
    blueIntensity = color - 256;          // albastru de la oprit la pornit
  }
  else                    // interval 3 ( >= 512) de la albastru la roșu
  {
    redIntensity = color - 512;         // roșu de la oprit la pornit
    greenIntensity = 0;                 // verde mereu oprit
    blueIntensity = 767 - color;        // albastru de la pornit la oprit
  }

  // Se "trimit" valorile de intensitate (roșu, verde, albastru) folosind pin analogWrite ()
  analogWrite(RED_PIN, redIntensity);
  analogWrite(GREEN_PIN, greenIntensity);
  analogWrite(BLUE_PIN, blueIntensity);
}
