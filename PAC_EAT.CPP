#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
#include<bios.h>

void Food()
{
 int h=0, k=0;
  for(int i=0; i<2200; i++)
{
  setcolor(RED);
  setfillstyle(1,RED);
  circle(h+(300*i),k,2);
  circle(h+(300*i),k+20,2);
  circle(h+(300*i),k+40,2);
  circle(h+(300*i),k+60,2);
  circle(h+(300*i),k+80,2);
  circle(h+(300*i),k+100,2);
  circle(h+(300*i),k+120,2);
  circle(h+(300*i),k+140,2);
  circle(h+(300*i),k+160,2);
  circle(h+(300*i),k+180,2);
  circle(h+(300*i),k+200,2);
  circle(h+(300*i),k+220,2);
  circle(h+(300*i),k+240,2);
  circle(h+(300*i),k+260,2);
  circle(h+(300*i),k+280,2);
  circle(h+(300*i),k+300,2);
  circle(h+(300*i),k+320,2);
  circle(h+(300*i),k+340,2);
  circle(h+(300*i),k+360,2);
  circle(h+(300*i),k+380,2);
  circle(h+(300*i),k+400,2);
  circle(h+(300*i),k+420,2);
  circle(h+(300*i),k+440,2);
  circle(h+(300*i),k+460,2);
  circle(h+(300*i),k+480,2);
  circle(h+(300*i),k+500,2);
  circle(h+(300*i),k+520,2);
}
}

void Move()
{
 int sa,ea,sa1,sa2,ea1,ea2,change,key;
 float x=100,y=200;
 key=19712;
 re:
 //right
 if(key==19712)
 {
  sa=0,ea=360,change=4;
  for(;;x+=4)
  {
   if(kbhit())
   {
    key=bioskey(0);
    goto re;
   }
   delay(60);
   cleardevice();
   setcolor(14);
   setfillstyle(1,14);
   pieslice(x,y,sa,ea,15);
   sa=sa+change;
   ea=ea-change;
   if(sa<=0 || sa>=30)
    change*=(-1);
  }
 }
 //left
 else if(key==19200)
 {
   sa1=0,ea1=150,sa2=210,ea2=360,change=4;
  for(;;x-=4)
  {
   if(kbhit())
   {
    key=bioskey(0);
    goto re;
   }
   delay(60);
   cleardevice();
   setcolor(14);
   setfillstyle(1,14);
   //circle(x,y,15);
   //setcolor(0);
   //setfillstyle(1,0);
   pieslice(x,y,sa1,ea1,15);
   pieslice(x,y,sa2,ea2,15);
   ea1=ea1+change;
   sa2=sa2-change;
   if(ea1<=150 || ea1>=180)
    change*=(-1);
  }
 }
 //up
 else if(key==18432)
 {
  sa1=90,ea1=360,sa2=0,ea2=90,change=4;
  for(;;y-=4)
  {
   if(kbhit())
   {
    key=bioskey(0);
    goto re;
   }
   delay(60);
   cleardevice();
   setcolor(14);
   setfillstyle(1,14);
   pieslice(x,y,sa1,ea1,15);
   pieslice(x,y,sa2,ea2,15);
   sa1=sa1+change;
   ea2=ea2-change;
   if(sa1>=120 || sa1<=90)
    change*=(-1);
  }
 }
 else if(key==20480)
 {
  sa1=0,ea1=240,sa2=300,ea2=360,change=4;
  for(;;y+=4)
  {
   if(kbhit())
   {
    key=bioskey(0);
    goto re;
   }
   delay(60);
   cleardevice();
   setcolor(14);
   setfillstyle(1,14);
   pieslice(x,y,sa1,ea1,15);
   pieslice(x,y,sa2,ea2,15);
   ea1=ea1+change;
   sa2=sa2-change;
   if(ea1<=240 || ea1>=270)
    change*=(-1);
  }
 }
}

void Compile()
{
 if(kbhit())

}

void main()
{
 clrscr();
 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode,"c:\\turboc3\\bgi");
 Food();
 Move();
 getch();
}