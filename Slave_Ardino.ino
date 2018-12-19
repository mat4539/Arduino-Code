//#include <TimerOne.h>
#include <Wire.h>

//int state = 0;
//int value;
//long int newtime;

void setup() {
Wire.begin(1);
Wire.onReceive(gotRate);
pinMode(7, OUTPUT);
//digitalWrite(7, state);
}

void loop() {
  
}

void gotRate(){
  if (Wire.available()){

    //state = !state;
    digitalWrite(7, HIGH);
    delay(1000);
  
    //value = Wire.read();
    //newtime = value * 1000000;
    //Timer1.initialize(newtime);
    //Timer1.attachInterrupt(blinkme);
  }
}

//void blinkme(){
  //state = !state;
  //digitalWrite(7, state);
//}
