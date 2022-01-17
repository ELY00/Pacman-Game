#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>
#include<stdio.h>
#include<bios.h>

int key,i,x,y;

void turn(key,x,y)

{ void up(int x, int y);
  void down(int x, int y);
  void left(int x, int y);
  void right(int x, int y);
  if(key==18432)
 {
// setfillstyle(1,BLACK);
// circle(x,i,10);
 up(x,y);
 }
 else if (key==20480)
  {
// setfillstyle(1,BLACK);
// circle(x,i,10);
 down(x,y);
  }
 else if (key==19200)
  {
// setfillstyle(1,BLACK);
// circle(x,i,10);
 left(x,y);
  }
 else if (key==19712)
  {
// setfillstyle(1,BLACK);
// circle(x,i,10);
 right(x,y);
 }
 else if (key==283)
 exit(0);
}
void up(int x,int y)
{setcolor(BLACK);
for(i=y;;i--)
 { setcolor(BLACK);
  setfillstyle(1, YELLOW);
  pieslice(x,i,0,60,10);
  pieslice(x,i,120,360,10);

  setcolor(YELLOW);
  line(x,i,x+10,i);
   delay(25);
  setcolor(BLACK);
    setfillstyle(1,BLACK);
  pieslice(x,i,0,150,10);
  pieslice(x,i,210,360,10);
  setcolor(BLACK);
  line(x,i,i+10,y);
  setfillstyle(1,BLACK);
  line(x,i,x+10,i);
   setfillstyle(1, BLACK);
  pieslice(x,i,0,60,10);
  pieslice(x,i,120,360,10);

   if(kbhit()!=0)
   {key=bioskey(0);
  break;}
  }
 turn(key,x,i);
}
void down(int x,int y)
{setcolor(BLACK);
for(i=y;;i++)
 {
  setfillstyle(1, YELLOW);
  pieslice(x,i,0,240,10);
  pieslice(x,i,300,360,10);
  setcolor(YELLOW);
  line(x,i,x+10,i);
  /* setfillstyle(1, BLACK);
  pieslice(x,i,0,240,10);
  pieslice(x,i,300,360,10);
  setcolor(BLACK);
  line(x,i,x+10,i); */
   delay(25);
   setcolor(BLACK);
     setfillstyle(1,BLACK);
  pieslice(x,i,0,150,10);
  pieslice(x,i,210,360,10);
  setcolor(BLACK);
  line(x,i,x+10,i);
   setcolor(BLACK);
    setfillstyle(1, BLACK);
     line(x,i,x+10,i);
    setfillstyle(1, BLACK);

 // pieslice(x,i,300,360,10);
 // pieslice(x,i,0,240,10);

   if(kbhit()!=0)
   {key=bioskey(0);
  break;}
  }
 turn(key,x,i);
}
void left(int x,int y)
{setcolor(BLACK);
for(i=x;;i--)
 {

   setcolor(BLACK);
  setfillstyle(1,BLACK);
  pieslice(x,i,0,60,10);
  pieslice(x,i,120,360,10);

  setcolor(BLACK);
  line(x,i,x+10,i);
    setfillstyle(1, BLACK);
    pieslice(i,y,30,330,10);
    setfillstyle(1,YELLOW);
  pieslice(i,y,0,150,10);
  pieslice(i,y,210,360,10);
  setcolor(YELLOW);
  line(i,y,i+10,y);

  delay(25);
  setcolor(BLACK);
  setfillstyle(1,BLACK);
  line(i,y,i+10,y);
 setcolor(BLACK);
// while(kbhit())
// getch();
  // circle(i,y,10);
   if(kbhit()!=0)
   {key=bioskey(0);
  break;}
  }
 turn(key,i,y);
}
void right(int x,int y)
{
setcolor(BLACK);
for(i=x;;i++)
 {    setcolor(BLACK);
    setfillstyle(1,BLACK);
  pieslice(i,y,0,150,10);
  pieslice(i,y,210,360,10);
  setcolor(BLACK);
  line(i,y,i+10,y);

   setfillstyle(1, YELLOW);
    pieslice(i,y,30,330,10);
 //   setcolor(BLACK);
   //  pieslice(i,y,30,330,10);
   delay(25);
   if(kbhit()!=0)
   {key=bioskey(0);
  break;}
  }
 turn(key,i,y);
}


void main()
{
 clrscr();
 int gdriver=DETECT,gmode,errorcode;
 initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
 errorcode=graphresult();
 if(errorcode!=grOk)
{
 cout<<"Graphics error:\n"<<grapherrormsg(errorcode);
 cout<<"Press any key to halt";
 getch();
}
while(bioskey(1)==0);
key=bioskey(0);
 turn(key,getmaxx()/2,getmaxy()/2);
 getch();
}
