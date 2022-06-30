int pinRojo = 13;  //pin donde esta conectado el led rojo
int pinVerde = 10; //pin verde
int pinAzul = 9;  //pin azul

void setup() {
  // put your setup code here, to run once:
  pinMode(pinRojo, OUTPUT);  //inicializar pin rojo
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(pinRojo, 255);
  analogWrite(pinVerde,255);
  analogWrite(pinAzul,255);
  delay(1000);  //1 seg
  analogWrite(pinVerde,0);
  delay(1000);
  
}
