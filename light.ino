int redPin=7;
int greenPin =6;
int bluePin = 5;


void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  
    setColor(255,0,0);
    delay(500);
    setColor(0,255,0);
    delay(500);
     
    setColor(0,0,255);
    delay(500);
    setColor(255,255,0);
    delay(500);
     
    setColor(80,80,0);
    delay(500);
     
    setColor(0,255,255);
    delay(500);
    setColor(100,0,100);
    delay(500);
    setColor(80,0,80);
    delay(500);
    
      
    
    

}


 void setColor(int red,int green,int blue){
    analogWrite(redPin,255-red);
    analogWrite(greenPin,255-green);
    analogWrite(bluePin,255-blue);
  
 }
