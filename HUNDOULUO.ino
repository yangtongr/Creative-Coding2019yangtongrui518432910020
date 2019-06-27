#define NOTE_D0 -1
#define NOTE_D1 294
#define NOTE_D2 330
#define NOTE_D3 350
#define NOTE_D4 393
#define NOTE_D5 441
#define NOTE_D6 495
#define NOTE_D7 556

#define NOTE_DL1 147
#define NOTE_DL2 165
#define NOTE_DL3 175
#define NOTE_DL4 196
#define NOTE_DL5 221
#define NOTE_DL6 248
#define NOTE_DL7 278

#define NOTE_DH1 589
#define NOTE_DH2 661
#define NOTE_DH3 700
#define NOTE_DH4 786
#define NOTE_DH5 882
#define NOTE_DH6 990
#define NOTE_DH7 1112

int tune[]={
  NOTE_DL6,NOTE_DL6,NOTE_DL7,NOTE_DL6,NOTE_D3,NOTE_D2,NOTE_DL7,
  NOTE_DL6,NOTE_DL6,NOTE_DL7,NOTE_DL6,NOTE_D3,NOTE_D2,NOTE_DL7,
  NOTE_DL6,NOTE_DL6,NOTE_DL7,NOTE_DL6,NOTE_D3,NOTE_D2,NOTE_D3,
  NOTE_D2,NOTE_D2,NOTE_D3,NOTE_D2,NOTE_D5,NOTE_D5,NOTE_D3,
  NOTE_D2,NOTE_D2,NOTE_D3,NOTE_D2,NOTE_D5,NOTE_D5,NOTE_D3,
  NOTE_D2,NOTE_D2,NOTE_D3,NOTE_D2,NOTE_D5,NOTE_D5,NOTE_D6,
   
   
  };
  float duration[]={
  0.5,0.5,0.5,0.5,1,1,1,
   0.5,0.5,0.5,0.5,1,1,1,
    0.5,0.5,0.5,0.5,1,1,1,
     0.5,0.5,0.5,0.5,1,1,1,
      0.5,0.5,0.5,0.5,1,1,1,
       0.5,0.5,0.5,0.5,1,1,1,
    
  };
    

int lenght;
int tonePin=8;

void setup()
{
  pinMode(tonePin,OUTPUT);
  lenght = sizeof(tune)/
   sizeof(tune[0]);
}
void loop()
{
  for(int x=0;x<lenght;x++)
{
  tone(tonePin,tune[x]);
  delay(400*duration[x]);
  noTone(tonePin);
}delay(1000);
}
  


  
