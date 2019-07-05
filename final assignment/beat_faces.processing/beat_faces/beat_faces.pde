import processing.serial.*;
Serial number;
int remain=20;
int credit=0;
int hit=0;
PFont font;
class plane
{
  int x;
  int y;
  int flag;
  int speed;
  plane(int x, int y)
  {
    this.x=x;
    this.y=y;
    speed=3;
    flag=-1;
  }
  void fly()
  {
    if (flag==-1)
    {
      x+=speed;
      if (x>=600)
      {
        x-=600;
        y=(int)random(20, 300);
      }
    }
    if (flag==1)
    {
      flag=-1;
      x=0;
      speed++;
    }
  }
  void crash(cannonball c)
  {
    if (dist(x, y, c.x, c.y)<30)
    {
      credit+=100;
      flag=1;
      hit=1;
    }
  }
  void display()
  {
    if (x<600)
    {
      fill(#FAE077);
      ellipse(x, y, 45, 45);
      fill(255);
      rect(x-18, y-6, 12, 8);
      rect(x+6, y-6, 12, 8);
      rect(x-12, y+4, 24, 8);
      line(x-12, y+7, x+12, y+7);
      fill(0);
      rect(x-16, y-11, 10, 2);
      rect(x+6, y-11, 10, 2);
    }
  }
}
class cannonball
{
  int x;
  int y;
  int flag;
  cannonball()
  {
    x=600;
    y=600;
    flag=1;
  }
  void fire(int x, int y)
  {
    this.x=x;
    this.y=y;
    flag=-1;
  }
  void fly()
  {
    if (flag==-1) y-=5;
  }
  void display()
  {
    if (y<600)
    {
      fill(random(255),random(255),random(255),102);
      ellipse(x, y, random(20,40), random(20,40));
    }
  }
}
class cannon
{
  int x;
  cannon(int x)
  {
    this.x=x;
  }
  void display()
  {
    fill(165);
    ellipse(mouseX, 575, 65, 65);
    fill(60);
    ellipse(mouseX, 575, 40, 40);
    rect(mouseX-15,520,30,55);
  }
  void fire(cannonball c)
  {
    c.fire(mouseX, 580);
  }
}
cannon a=new cannon((int)random(20, 500));
cannonball[] c=new cannonball[20];
plane p=new plane(0, (int)random(20, 200));
void setup()
{
  size(600, 600);
  smooth();
  background(255);
  for (int i=0; i<20; i++)
  {
    c[i]=new cannonball();
  }
  
 String COM3 = Serial.list()[0];
  number = new Serial(this, COM3, 9600);
}

void mousePressed()
{
  int i=0;
  for (i=0; i<20; i++)
  {
    if (c[i].flag==1) break;
  }
  if (i==20) return;
  a.fire(c[i]);
  remain--;
}
void keyPressed()
{
  if (key == 'r')
  {
    remain=20;
    credit=0;
    
  }
}
void draw()
{
  background(255);
  a.display();
  for (int i=0; i<20; i++)
  {
    if (c[i].flag==-1)
    {
      c[i].fly();
      c[i].display();
    }
  }
  
      
     
      if(number.available()>0){
      char m = number.readChar();
      println(m);      
      switch(m){
        case'1':
        p.speed++;      
      }
      switch(m){
        case'2':
        p.speed--;
      }
      }
  for (int i=0; i<20; i++)
  {
    p.crash(c[i]);
  }
  p.fly();
  p.display();
  if (hit==1)
  {
    hit=0;
    int j=5;
    for (int i=0; i<20; i++)
    {
      if (c[i].flag==-1)
      {
        c[i]=new cannonball();
        j--;
        remain++;
        if (j==0) break;
      }
    }
  }
  textSize(20);
  text("remain: "+remain, 450, 50);
  text("credit: "+credit, 450, 100);
  if (remain==0)
  {
    // for (int i=0; i<20; i++){
    //  c[i].flag=-1;
    //  c[i].y=-50;
    //}
    textSize(50);
    text("run out of ammo…", 100, 150);
    text("final score is: "+credit, 100, 220);
    text("press 'r' to restart..", 100, 280);
  }
}
