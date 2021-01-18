const int trigPin = 7;
const int echoPin = 8;
long duration;
int distanceCm1;
int distanceCm;
int d;
int e;
void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
Serial.print("Welcome to the water level detection System");
}
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distanceCm1=18;
distanceCm= duration*0.034/2;
d=distanceCm1-distanceCm;
e=d*100/distanceCm1;
Serial.print("Percentage of the water filled:"); 
Serial.println(e);
delay(1000);
}
