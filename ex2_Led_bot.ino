int BOTAO = 2;
int LED = 13;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT);
}
void loop() {
  if (digitalRead(BOTAO) == HIGH) {
    digitalWrite(LED, LOW);
  } else {
    digitalWrite(LED, HIGH);
  }
}
