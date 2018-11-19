#define echoPin 6
#define trigPin 5

long duration;
long distance;

void setup() {
  Serial.begin(9600);
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin,HIGH);

  distance = duration/58.2; //CM

  Serial.println("Centimeters:");
  Serial.println(distance);

  delay(50);
}
