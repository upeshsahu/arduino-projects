  #define rb 8
#define rf 9
#define lf 11
#define lb 10
#define l1 digitalRead(A0)
#define l2 digitalRead(A1)
#define m digitalRead(A2)
//#define r1 analogRead(3)
//#define r2 analogRead(4)

void setup() 
{
 pinMode(lf,OUTPUT);
 pinMode(lb,OUTPUT);
 pinMode(rb,OUTPUT); 
 pinMode(rf,OUTPUT); 

}

void loop()
{ void forward();
  void backward();
  void left();
  void right();
  void STOP();
if(l2==0&&l1==1&&m==1)
 {
  forward();
 }
 else if(l1==0&&l2==0||m==0)
 {
  left();
 }
 else if(m==0&&l2==0||l1==0)
 
  right();
 
 
 }

  
  /*if(m<500&&l1>500&&l2>500&&r2>500)
  {
    forward();  
  } 
/*  else if(m>500&&l1>500&&l2>500&&r1>500&&r2>500)
  {
    backward();
  }
  
 else if(l1<500&&l2<500)
    {
      left();
       delay(60);
    }
    else 
    forward();
  /*yelse if(r1>500)
  {
    left();
   // delay(200);
    }  
    
  else if(l1>500&&l2>500)
    {
      left();
   //   delay(750);
    }
  else if(r1>500&&r2>500)
   {
    right();
    //delay(750);
  }
  else if(m>500&&l1>500&&l2>500&&r1>500&&r2>500)
  { backward();
  */
  

  
   

void forward()  
{
digitalWrite(lf,1);
digitalWrite(lb,0);
digitalWrite(rb,0);
digitalWrite(rf,1);
}
void backward()
{
  digitalWrite(lf,0);
digitalWrite(lb,1);
digitalWrite(rb,1);
digitalWrite(rf,0);
}
void right()
{
  digitalWrite(lf,1);
digitalWrite(lb,0);
digitalWrite(rb,0);
digitalWrite(rf,0);
}
void left()
{
  digitalWrite(lf,0);
digitalWrite(lb,0);
digitalWrite(rb,0);
digitalWrite(rf,1);
}
 void STOP(){
 digitalWrite(lf,0);
digitalWrite(lb,0);
digitalWrite(rb,0);
digitalWrite(rf,0);}
