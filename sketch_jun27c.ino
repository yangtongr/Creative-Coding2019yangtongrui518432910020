


int redPin = 7;

int greenPin = 6;

int bluePin = 5;

 

void setup(){

     pinMode(redPin, OUTPUT);

     pinMode(greenPin, OUTPUT);

     pinMode(bluePin, OUTPUT);

}

 

void loop(){

      colorRGB(random(0,255),random(0,255),random(0,255));  

      delay(1000);

}

 

void colorRGB(int red, int green, int blue){

      analogWrite(redPin,constrain(red,0,255));

      analogWrite(greenPin,constrain(green,0,255));

      analogWrite(bluePin,constrain(blue,0,255));}
