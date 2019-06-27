const int TrigPin=4;
const int EchoPin=5;

float cm;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(TrigPin,OUTPUT);
  pinMode(EchoPin,INPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(8,LOW);
digitalWrite(TrigPin,LOW);
delay(2);
digitalWrite(TrigPin,HIGH);
delay(10);
digitalWrite(TrigPin,LOW);

  cm = pulseIn(EchoPin,HIGH)/58.8;
  cm = (int (cm*100.0))/100;
  if (cm >=2 && cm<=10)
  digitalWrite(8,HIGH);
  


}
