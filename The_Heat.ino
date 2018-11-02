//Mat & Owen are gods

const int hot = 80; //set hot parameter
const int cold = 76; //set cold parameter

int LED1 = 3;
int LED2 = 4;
int LED3 = 5;
int LED4 = 6;
int LED5 = 7;

void setup() {
pinMode(A1, INPUT);

pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT); 
pinMode(LED4, OUTPUT); 
pinMode(LED5, OUTPUT); 
Serial.begin(9600);
}

void loop() {
int sensor = analogRead(A1);
float voltage = (sensor / 1024.0) * 5.0;
float tempC = (voltage - .5) * 100;
float tempF = (tempC * 1.8) + 32;


Serial.print("temp: ");
Serial.print(tempF);
if (tempF < cold) { //cold
Colds();
Serial.println(" It's Cold.");
}

else if (tempF > hot) { //hot
Hots();
Serial.println(" It's Hot.");
}

else { //fine
Fins();
Serial.println(" It's Fine.");
}
delay(10);
}

void Colds(){
  digitalWrite(LED2,HIGH);
delay(255);
digitalWrite(LED1,HIGH);
delay(255);

digitalWrite(LED1,LOW);
delay(255);
digitalWrite(LED3,HIGH);
delay(255);

digitalWrite(LED2,LOW);
delay(255);
digitalWrite(LED4,HIGH);
delay(255);

digitalWrite(LED3,LOW);
delay(255);
digitalWrite(LED5,HIGH);
delay(255);

digitalWrite(LED5,LOW);
delay(255);
digitalWrite(LED3,HIGH);
delay(255);

digitalWrite(LED4,LOW);
delay(255);
digitalWrite(LED2,HIGH);
delay(255);

digitalWrite(LED3,LOW);
delay(255);
}

void Hots(){
  digitalWrite(LED2,HIGH);
delay(15);
digitalWrite(LED1,HIGH);
delay(15);

digitalWrite(LED1,LOW);
delay(15);
digitalWrite(LED3,HIGH);
delay(15);

digitalWrite(LED2,LOW);
delay(15);
digitalWrite(LED4,HIGH);
delay(15);

digitalWrite(LED3,LOW);
delay(15);
digitalWrite(LED5,HIGH);
delay(15);

digitalWrite(LED5,LOW);
delay(15);
digitalWrite(LED3,HIGH);
delay(15);

digitalWrite(LED4,LOW);
delay(15);
digitalWrite(LED2,HIGH);
delay(15);

digitalWrite(LED3,LOW);
delay(15);
}

void Fins(){
  digitalWrite(LED2,HIGH);
delay(100);
digitalWrite(LED1,HIGH);
delay(100);

digitalWrite(LED1,LOW);
delay(100);
digitalWrite(LED3,HIGH);
delay(100);

digitalWrite(LED2,LOW);
delay(100);
digitalWrite(LED4,HIGH);
delay(100);

digitalWrite(LED3,LOW);
delay(100);
digitalWrite(LED5,HIGH);
delay(100);

digitalWrite(LED5,LOW);
delay(100);
digitalWrite(LED3,HIGH);
delay(100);

digitalWrite(LED4,LOW);
delay(100);
digitalWrite(LED2,HIGH);
delay(100);

digitalWrite(LED3,LOW);
delay(100);
}
