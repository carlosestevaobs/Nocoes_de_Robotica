int LED = 12; 
int LDR = A0; 
int limiar = 600;  

void setup(){  
  pinMode(LED, OUTPUT); 
  pinMode(LDR, INPUT); 
  // 9600 bits por segundo - velocidade de comunicação
  Serial.begin(9600);
}    
void loop(){
  Serial.println(analogRead(LDR));
  if(analogRead(LDR) > limiar){ 
    digitalWrite(LED, HIGH); 
  }  
  else{ 
    digitalWrite(LED, LOW); 
  }  
}
