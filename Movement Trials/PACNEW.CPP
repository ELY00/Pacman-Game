#include<time.h>
#include<stdlib.h>
#include<dos.h>
#include<stdio.h>
#include<bios.h>
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
int h, k;
////////////////////////////////////MAZE//////////////////////////////

void Maze()
{
 h=getmaxx()/2;
 k=getmaxy()/2;
 setcolor(RED);
 setfillstyle(1,RED);
 bar(h - 310, k - 210, h, k - 208);
 bar(h - 310, k - 210, h - 308, k + 210);
 bar(h - 308, k + 210, h, k + 208);
 setcolor(BLUE);
 setfillstyle(1,BLUE);
 bar(h, k - 210, h + 310, k - 208);
 bar(h + 310, k - 208, h + 308, k + 210);
 bar(h + 308, k + 210, h, k + 208);
 line(h + 310, k + 210, h, k + 210);
 setcolor(RED);

/////////////////////////////////////Left Red Part/////////////////////////////////////////////

 setfillstyle(1,RED);
 bar(h - 280, k - 208, h - 278, k - 31);
 bar(h - 250, k - 178, h - 248, k - 30);
 bar(h - 250, k - 178, h - 30, k - 176);
 bar(h - 220, k - 148, h - 30, k - 146);
 bar(h - 220, k - 148, h - 218, k - 118);
 bar(h - 250, k - 88, h - 115, k - 86);
// bar(h - 220, k - 118, h - 205, k - 116);
 bar(h - 115, k - 56, h , k - 54);
 bar(h - 115, k - 118, h - 113, k - 28);
 bar(h - 280, k + 31, h - 278, k + 180);
 bar(h - 280, k + 180, h - 160, k + 178);
 bar(h - 250, k + 50, h - 130, k + 48);
 bar(h - 250, k + 30, h - 248, k + 70);
 bar(h - 250, k + 100, h - 248, k + 156);
 bar(h - 250, k + 156, h - 188, k + 154);
 bar(h - 190, k + 48, h - 188, k + 68);
 bar(h - 190, k + 98, h - 188, k + 128);
 bar(h - 190, k + 154, h - 188, k + 178);
 bar(h - 220, k + 75, h - 218, k + 130);
 bar(h - 130, k + 87, h - 128, k + 150);
 bar(h - 100, k + 208, h - 102, k + 150);
 bar(h - 128, k + 150, h - 72, k + 148);
 bar(h - 96, k + 120, h - 98, k + 87);
 bar(h - 85, k - 84, h - 31, k - 86);
 bar(h - 2, k - 56, h - 1, k - 178);
 bar(h - 280, k - 1, h - 200, k + 1);
 bar(h - 66, k + 120, h - 64, k + 47);
 bar(h - 64, k + 47, h - 4, k + 49);
 bar(h - 4, k + 47, h - 2, k + 178);
 bar(h - 85, k - 26, h, k - 24);
 bar(h - 85, k + 26, h, k + 24);
 bar(h - 85, k - 26, h - 83, k + 26);

/////////////////////////////////////RIGHT BLUE PART////////////////////////////////////////////////////////

 setfillstyle(1,BLUE);
 bar(h + 280, k - 208, h + 278, k - 31);
 bar(h + 250, k - 178, h + 248, k - 30);
 bar(h + 250, k - 178, h + 30, k - 176);
 bar(h + 220, k - 148, h + 30, k - 146);
 bar(h + 220, k - 148, h + 218, k - 118);
 bar(h + 250, k - 88, h + 115, k - 86);
 bar(h + 220, k - 118, h + 205, k - 116);
 bar(h + 115, k - 56, h , k - 54);
 bar(h + 115, k - 118, h + 113, k - 28);
 bar(h + 280, k + 31, h + 278, k + 180);
 bar(h + 280, k + 180, h + 160, k + 178);
 bar(h + 250, k + 50, h + 130, k + 48);
 bar(h + 250, k + 30, h + 248, k + 70);
 bar(h + 250, k + 100, h + 248, k + 156);
 bar(h + 250, k + 156, h + 188, k + 154);
 bar(h + 190, k + 154, h + 188, k + 178);
 bar(h + 220, k + 75, h + 218, k + 130);
 bar(h + 250, k + 156, h + 188, k + 154);
 bar(h + 190, k + 48, h + 188, k + 68);
 bar(h + 190, k + 98, h + 188, k + 128);
 bar(h + 190, k + 158, h + 188, k + 178);
 bar(h + 130, k + 87, h + 128, k + 150);
 bar(h + 100, k + 208, h + 102, k + 150);
 bar(h + 128, k + 150, h + 72, k + 148);
 bar(h + 96, k + 120, h + 98, k + 87);
 bar(h + 85, k - 84, h + 31, k - 86);
 bar(h, k - 56, h + 1, k - 178);
 bar(h + 280, k - 1, h + 200, k + 1);
 bar(h + 66, k + 120, h + 64, k + 47);
 bar(h + 64, k + 47, h + 4, k + 49);
 bar(h + 4, k + 47, h + 2, k + 178);
 bar(h, k - 26, h + 85, k - 24);
 bar(h, k + 26, h + 85, k + 24);
 bar(h + 85, k - 26, h + 83, k + 26);
}

//////////////////////////////////////////OBSTACLES RED///////////////////////////////////////////////////////////////////////////////////////////////
void Obstacles()
{
 setfillstyle(1,RED);
 bar(h - 188, k - 118, h - 186, k - 116);
 bar(h - 155, k - 118, h - 153, k - 116);
 bar(h - 89, k - 118, h - 87, k - 116);
 bar(h - 56, k - 118, h - 54, k - 116);
 bar(h - 56, k - 118, h - 54, k - 116);


/////////////////////////////////////////OBSTACLES BLUE////////////////////////////////////////////////////////////////////////////////////////

 setfillstyle(1,BLUE);
 bar(h + 188, k - 118, h - 186, k - 116);
 bar(h + 155, k - 118, h - 153, k - 116);
 bar(h + 89, k - 118, h - 87, k - 116);
 bar(h + 56, k - 118, h - 54, k - 116);
 bar(h + 56, k - 118, h - 54, k - 116);



}

void turn(key,x,y)

{ void up(int x, int y);
  void down(int x, int y);
  void left(int x, int y);
  void right(int x, int y);
  if(key==18432)
 {
// setfillstyle(1,BLACK);
// circle(x,y,10);
 up(x,y);
 }
 else if (key==20480)
  {
// setfillstyle(1,BLACK);
 //circle(x,y,10);
 down(x,y);
  }
 else if (key==19200)
  {
// setfillstyle(1,BLACK);
 //circle(x,y,10);
 left(x,y);
  }
 else if (key==19712)
  {
 //setfillstyle(1,BLACK);
// circle(x,y,10);
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
  line(x,i,x+10,i);
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
 { setcolor(BLACK);
  setfillstyle(1, YELLOW);
  pieslice(x,i,0,240,10);
  pieslice(x,i,300,360,10);
  setcolor(YELLOW);
  line(x,i,x+10,i);

 /*  setfillstyle(1, BLACK);
  pieslice(x,i,0,240,10);
  pieslice(x,i,300,360,10);
  setcolor(BLACK);
  line(x,i,x+10,i);         */
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
  pieslice(i,y,0,60,10);
  pieslice(i,y,120,360,10);

  setcolor(BLACK);
  line(i,y,i+10,y);
    setfillstyle(1, BLACK);
    pieslice(i,y,30,330,10);
     setcolor(BLACK);
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
 Maze();
 Obstacles();
while(bioskey(1)==0);
key=bioskey(0);
 turn(key,getmaxx()/2,getmaxy()/2);
 getch();
}



