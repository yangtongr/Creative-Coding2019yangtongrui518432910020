void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int vol = analogRead(A0)*(5.0/1023.0*100);
  if(vol<=31){
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }
    else if(vol>=32&& vol<=40){
       digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    }
     else if(vol>=32&& vol<=40){
       digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    }
}
