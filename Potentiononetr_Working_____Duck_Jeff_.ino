int LED1 = 3;
int LED2 = 4;
int LED3 = 5;
int LED4 = 6;
int LED5 = 7;
int Potentiometer = 2;
int val = 0;
int ledPin = 13;
int num_pins = 6;

void setup ()  {
      pinMode (LED1, OUTPUT); 
      pinMode (LED2, OUTPUT);
      pinMode (LED3, OUTPUT);
      pinMode (LED4, OUTPUT);
      pinMode (LED5, OUTPUT);
      pinMode(Potentiometer, OUTPUT);
      int i;

      for (i = 0; i < num_pins; i++)  
      pinMode(ledPin, OUTPUT);
   } // setup

void loop() {
val = analogRead(Potentiometer);
  
digitalWrite(LED2,HIGH);
delay(val);
digitalWrite(LED1,HIGH);
delay(val);

digitalWrite(LED1,LOW);
delay(val);
digitalWrite(LED3,HIGH);
delay(val);

digitalWrite(LED2,LOW);
delay(val);
digitalWrite(LED4,HIGH);
delay(val);

digitalWrite(LED3,LOW);
delay(val);
digitalWrite(LED5,HIGH);
delay(val);

digitalWrite(LED5,LOW);
delay(val);
digitalWrite(LED3,HIGH);
delay(val);

digitalWrite(LED4,LOW);
delay(val);
digitalWrite(LED2,HIGH);
delay(val);

digitalWrite(LED3,LOW);
delay(val);

} //loop
