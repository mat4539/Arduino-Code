int LED1 = 2;
int pot = 0-255;

void setup(){
     pinMode (LED1, OUTPUT); 
} 

void loop() {
  analogWrite(1,pot);
}
