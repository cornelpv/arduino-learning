const int temperaturePin = A0;
void setup()
{
  Serial.begin(9600); // inițializăm portul serial la 9600 biți pe secundă (bps)
}
void loop()
{
  float voltage, degreesC, degreesF; // declarăm 3 variabile, pentru tensiune, grade C si grade F 
  voltage = getVoltage(temperaturePin); // măsoară tensiunea pe senzor
  degreesC = (voltage - 0.5) * 100.0; // formula de convertire a tensiunei în grade Celsius
  degreesF = degreesC * (9.0 / 5.0) + 32.0; // formula de convertire a gradelor Celsius la Fahrenheit
  
  //Printare date, seteaza Seriala la 9600
  Serial.print("voltage: ");
  Serial.print(voltage);
  Serial.print("  deg C: ");
  Serial.print(degreesC);
  Serial.print("  deg F: ");
  Serial.println(degreesF);
  delay(1000); // reînoire de date fiecare 1 s
}
float getVoltage(int pin)   // citire și întoarcere
{
return (analogRead(pin) * 0.004882814);// convertirea valorii analogice în tensiune (0 - 5V) 
}
