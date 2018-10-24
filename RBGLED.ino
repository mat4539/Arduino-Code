int Red = 2;
int Green = 4;
int Blue = 3;
int micro = 0;

//Potentiometer 1
int Potentiometer1 = 0;
int val1 = 0;

//Potentiometer 2
int Potentiometer2 = 1;
int val2 = 0;

//Potentiometer 3
int Potentiometer3 = 2;
int val3 = 0;

void setup() {
  pinMode (Red, OUTPUT); 
  pinMode (Green, OUTPUT);
  pinMode (Blue, OUTPUT);
  pinMode(Potentiometer1, OUTPUT);
  pinMode(Potentiometer2, OUTPUT);
  pinMode(Potentiometer3, OUTPUT);

  int i;
  for (i = 0; i < Red; i++)  
  pinMode(Red, OUTPUT);

  for (i = 0; i < Green; i++)  
  pinMode(Green, OUTPUT);

  for (i = 0; i < Blue; i++)  
  pinMode(Blue, OUTPUT);
}

void loop() {
  val1 = analogRead(Potentiometer1);
    val2 = analogRead(Potentiometer2);
      val3 = analogRead(Potentiometer3);
  
  micro = analogRead(Potentiometer1);
  delayMicroseconds(micro);
  digitalWrite (Red,HIGH);
  delayMicroseconds(micro);
  digitalWrite(Red,LOW);

  micro = analogRead(Potentiometer2);
  delayMicroseconds(micro);
  digitalWrite (Green,HIGH);
  delayMicroseconds(micro);
  digitalWrite(Green,LOW);

  micro = analogRead(Potentiometer3);
  delayMicroseconds(micro);
  digitalWrite (Blue,HIGH);
  delayMicroseconds(micro);
  digitalWrite(Blue,LOW);

}
