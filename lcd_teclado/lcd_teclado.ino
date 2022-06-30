#include <LiquidCrystal.h>
#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'7', '8', '9', '/'},
  {'4', '5', '6', '*'},
  {'1', '2', '3', '-'},
  {'C', '0', '=', '+'}
};

byte rowPin[ROWS] = {12,11,8,7};
byte colPin[COLS] = {6,5,4,2};

LiquidCrystal lcd(1,0,A1,A2,10,9); //PINES LED
Keypad teclado = Keypad(makeKeymap(keys), rowPin, colPin, ROWS, COLS);

void setup() {
  lcd.begin(16,2); //16 col;2 filas
  lcd.print("Bienvenido!!");
  delay(1000);
}

void loop() {
  char t = teclado.getKey();
  if(t){
    switch(t){
      case '7':
      lcd.clear();
      lcd.print("presiona 7");
      break;

      case '8':
      lcd.clear();
      lcd.print("presiona 8");
      break;

      case '9':
      lcd.clear();
      lcd.print("presiona " + String(t));
      break; 

      case 'C':
      lcd.clear();
      break;
    }
  }
}
