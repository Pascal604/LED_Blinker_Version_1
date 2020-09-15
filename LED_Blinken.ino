/*
 * LED blinken mit Ausgabe an der Seriellen Schnittstelle
 * 
 * Funktion: LED blinkt im Sekundentakt
 * Programmierer: Pascal Meyer
 * letzte Änderung: 11.09.2020
 * Version: 0.01
 * 
 * Hardware: grüne LED an Pin 3 / Widerstand 220 Ohm
 * 
 */



void setup() 
{
  pinMode (3, OUTPUT);    //LED grün
  Serial.begin (9600);    //zur Kontrolle
}

void loop() 
{
  /*********LED im sekundentakt ein- und ausschalten**********/
  digitalWrite (3, HIGH);     //LED an
  Serial.println ("LED an");
  delay (1000);               //1 Sekunde warten
  digitalWrite (3, LOW);      //LED aus
  Serial.println ("LED aus");
  delay (1000);               //1 Sekunde warten

}
