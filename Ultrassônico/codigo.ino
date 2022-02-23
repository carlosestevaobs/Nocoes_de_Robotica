#define Echo 7
#define Trig 8

int tempo = 0;
int dist = 0;
int red = 13;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(Trig, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 digitalWrite(Trig, HIGH);
 delayMicroseconds(10);
 digitalWrite(Trig, LOW);
  
 tempo = pulseIn(Echo, HIGH);
 dist = tempo * 0.017;  
 
  if (dist < 120) {
     digitalWrite(red, HIGH); 
  } else {
   digitalWrite(red, LOW); 
  }
    
 Serial.print(dist);
 Serial.println(" cm");
 delay(100);
    
}
