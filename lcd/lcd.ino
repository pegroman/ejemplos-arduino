#include <LiquidCrystal.h>
int ledRojo = 13;
LiquidCrystal lcd(1,0,A1,A2,10,9); //PINES LED

void setup() {
  pinMode(ledRojo, OUTPUT);
  lcd.begin(16,2); //16 col;2 filas
  lcd.print("hola mundo");
  delay(1000);
}

void loop() {
  analogWrite(ledRojo,255);
  lcd.clear();
  lcd.print("org y arqui");
  lcd.setCursor(0,1);
  lcd.print("cursor");
  delay(1000);

}
