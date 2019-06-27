void setup() {
  // put your setup code here, to run once:


}

void loop() {
 
  for(int i= 200;i<=800;i++){
    pinMode(8,OUTPUT);
    tone(8,i);
    delay(5);
    
  }
  delay(2000);
  for(int i=800;i>=200;i--){
    pinMode(8,OUTPUT);
    tone(8,i);
    delay(10);
    
  }

}
