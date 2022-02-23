int led = 8;
int botao = 9;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);  
}

void loop()
{
  if (digitalRead(botao) == LOW) {
    digitalWrite(led, HIGH);
    delay(3000);
    digitalWrite(led, LOW); 
  }
    
}
