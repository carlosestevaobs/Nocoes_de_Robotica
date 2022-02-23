const int Potenciometro = 0;
const int LedX = 13;
int ValorPoten = 0;
int ValorPwm = 0;
 
void setup() {
  pinMode(LedX, OUTPUT);
}
 
void loop() {
  ValorPoten = analogRead(Potenciometro);
  ValorPwm = map(ValorPoten, 0, 1023, 0, 255);
  analogWrite(LedX, ValorPwm);
}
