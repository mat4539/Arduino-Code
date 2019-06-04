int LED1 = 4;
int LED2 = 5;
int LED3 = 6;
int LED4 = 7;
int LED5 = 8;

int val = 1000;

void setup ()  {
      pinMode (LED1, OUTPUT); 
      pinMode (LED2, OUTPUT);
      pinMode (LED3, OUTPUT);
      pinMode (LED4, OUTPUT);
      pinMode (LED5, OUTPUT);
   } // setup

void loop() {
  
digitalWrite(LED1,HIGH);
delay(val);
digitalWrite(LED2,HIGH);
delay(val);

digitalWrite(LED3,HIGH);
delay(val);
digitalWrite(LED1,LOW);
delay(val);

digitalWrite(LED4,HIGH);
delay(val);
digitalWrite(LED2,LOW);
delay(val);

digitalWrite(LED5,HIGH);
delay(val);
digitalWrite(LED3,LOW);
delay(val);

digitalWrite(LED4,LOW);
delay(val);
digitalWrite(LED5,LOW);
delay(val);

//Hafe

digitalWrite(LED5,HIGH);
delay(val);
digitalWrite(LED4,HIGH);
delay(val);

digitalWrite(LED3,HIGH);
delay(val);
digitalWrite(LED5,LOW);
delay(val);

digitalWrite(LED2,HIGH);
delay(val);
digitalWrite(LED4,LOW);
delay(val);

digitalWrite(LED1,HIGH);
delay(val);
digitalWrite(LED3,LOW);
delay(val);

digitalWrite(LED2,LOW);
delay(val);
digitalWrite(LED1,LOW);
delay(val);
}
