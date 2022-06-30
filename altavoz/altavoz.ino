int pinAltavoz = 3;
int nota = 220;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  tone(pinAltavoz, nota);
  delay(1500);
  noTone(pinAltavoz);
  delay(500);
}
