#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

int pinRojo = 13;  //pin donde esta conectado el led rojo
int pinVerde = 10; //pin verde
int pinAzul = 9;  //pin azul

char keys[ROWS][COLS] = {
  {'7', '8', '9', '/'},
  {'4', '5', '6', '*'},
  {'1', '2', '3', '-'},
  {'C', '0', '=', '+'}
};

byte rowPin[ROWS] = {12,11,8,7};
byte colPin[COLS] = {6,5,4,2};

Keypad teclado = Keypad(makeKeymap(keys), rowPin, colPin, ROWS, COLS);

void setup() {
  pinMode(pinRojo, OUTPUT);  //inicializar pin rojo
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);
}

void loop() {
  char t = teclado.getKey();
  if(t){
    switch(t){
      case '7':
      analogWrite(pinRojo,255);
      break;

      case '8':
      analogWrite(pinVerde,255);
      break;

      case '9':
      analogWrite(pinAzul,255);
      break; 

      case 'C':
      analogWrite(pinAzul,0);
      analogWrite(pinRojo,0);
      analogWrite(pinVerde,0);
      break;
    }
  }
}
