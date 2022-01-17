#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
#include<bios.h>

void main()
{
 clrscr();
  //setbkcolor(BLUE);
 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode,"c:\\turboc3\\bgi");
 int sa,ea,sa1,sa2,ea1,ea2,change,key;
 float x=100,y=200;
 key=19712;
 re:
 setbkcolor(BLUE);
 //right
 if(key==19712)
 {
  sa=0,ea=360,change=2;
  for(;;x+=2)
  {
   if(kbhit())
   {
    key=bioskey(0);
    goto re;
   }
   delay(30);
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
   sa1=0,ea1=150,sa2=210,ea2=360,change=2;
  for(;;x-=2)
  {
   if(kbhit())
   {
    key=bioskey(0);
    goto re;
   }
   delay(30);
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
  sa1=90,ea1=360,sa2=0,ea2=90,change=2;
  for(;;y-=2)
  {
   if(kbhit())
   {
    key=bioskey(0);
    goto re;
   }
   delay(30);
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
  sa1=0,ea1=240,sa2=300,ea2=360,change=2;
  for(;;y+=2)
  {
   if(kbhit())
   {
    key=bioskey(0);
    goto re;
   }
   delay(30);
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
 getch();
}
