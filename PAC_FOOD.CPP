#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
#include<bios.h>

void main()
{
 clrscr();
 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode,"c:\\turboc3\\bgi");
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
  getch();
}