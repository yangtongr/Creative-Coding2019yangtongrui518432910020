void setup() {
  for(int i=8;i<=13;i++)
{
  pinMode(i,OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
   digitalWrite(10,HIGH); 
  digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
  delay(200);
    for(int x=8;x<=13;x++)
 {
     
    digitalWrite(x,LOW);
    delay(200);
 }
  
  
}
