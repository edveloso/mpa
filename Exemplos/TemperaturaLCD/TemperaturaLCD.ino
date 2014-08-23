#include <LiquidCrystal.h>

/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int PinoSensor = 2;
int ValorSensor = 2;

boolean leu = false;
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
 lcd.begin(16,2);
 Serial.begin(9600);

}

// the loop routine runs over and over again forever:
void loop() {
 
 if (leu == false){
 ValorSensor = analogRead(PinoSensor);
 lcd.setCursor(0,0);
 lcd.print("Valor do Sensor : ");
 lcd.setCursor(0,1);
 lcd.println(ValorSensor);
 leu = true;
 }
}
