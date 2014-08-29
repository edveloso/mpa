#include <LiquidCrystal.h>
 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int PinoSensor = 2;
int ValorSensor = 2;

boolean leu = false;

void setup() {                
 lcd.begin(16,2);
 Serial.begin(9600);
}

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
