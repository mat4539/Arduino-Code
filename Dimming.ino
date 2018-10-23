int micro = 0;
int read1 = 2;
int LED1 = 3;

void setup(){
  pinMode (LED1, OUTPUT);
}

void loop(){
  Dimming();
}

void Dimming(){
  micro = analogRead(read1);
  delayMicroseconds(micro);
  digitalWrite (LED1,HIGH);

  delayMicroseconds(micro);
  digitalWrite(LED1,LOW);
}
