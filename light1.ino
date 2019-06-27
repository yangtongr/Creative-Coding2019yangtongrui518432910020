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
      colorRGB(random(0,255),random(0,255),random(0,255));
      delay(500);
}

  void colorRGB((int red,int green,int blue){
    analogWrite(redPin,255-red);
    analogWrite(greenPin,255-green);
    analogWrite(bluePin,255-blue);
  }
  
