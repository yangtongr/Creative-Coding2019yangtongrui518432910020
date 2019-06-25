void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   for( int a=0;a<=255;a++)
   {
    analogWrite(10,a);
    delay(8);
    
   }
  
   for( int a=255;a<=0;a--)
   {
    analogWrite(10,a);
    delay(8);
   }
   delay(100);
}
