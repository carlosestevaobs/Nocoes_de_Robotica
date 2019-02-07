int BOTAO = 5;
int LED = 9;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT);
}

void loop() {  
  if (digitalRead(BOTAO) == HIGH) {
    digitalWrite(LED, HIGH); 
    delay(1000);
  } else {
    digitalWrite(LED, LOW);
    
  }
}