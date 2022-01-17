#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>
#include<stdio.h>
#include<bios.h>

////////////////////////////////////MAZE//////////////////////////////

void Maze()
{
 int h, k;
 h=getmaxx()/2;
 k=getmaxy()/2;
 setcolor(RED);
 setfillstyle(1,RED);
 bar( h - 310, k - 210, h, k - 208);
 bar(h - 310, k - 210, h - 308, k);
 line(h, k + 210, h - 310, k + 210);
 line(h - 310, k + 210, h - 310, k - 210);
 line(h - 310, k - 210, h, k - 210);
 setcolor(BLUE);
 setfillstyle(6,BLUE);
 line(h, k - 210, h + 310, k - 210);
 line(h + 310, k - 210, h + 310, k + 210);
 line(h + 310, k + 210, h, k + 210);
 setcolor(RED);
//Left Red Part
 setfillstyle(5,RED);
 line(h - 308, k - 208, h - 292, k - 208);
 line(h - 292, k - 208, h - 292, k - 16);
 line(h - 292, k - 16, h - 290, k - 16);
 line(h - 290, k - 16, h - 290, k - 208);
 line(h - 290, k - 208, h, k - 208);
 line(h - 308, k - 208, h - 308, k - 1);
 line(h - 308, k - 1, h - 256, k - 1);
 line(h - 256, k - 1, h - 256, k - 16);
 line(h - 256, k - 16, h - 246, k - 16);
 line(h - 246, k - 16, h - 246, k + 6);
 line(h - 246, k + 6, h - 226, k + 6);
 line(h - 226, k + 6, h - 226, k + 8);
 line(h - 226, k + 8, h - 256, k + 8);
 line(h - 256, k + 8, h - 256, k + 1);
 line(h - 256, k + 1, h - 308, k + 1);
 line(h - 308, k + 1, h - 308, k + 208);
 line(h - 308, k + 208, h - 164, k + 208);
 line(h - 164, k + 208, h - 164, k + 168);
 line(h - 164, k + 168, h - 194, k + 168);
 bar(h - 194, k + 168, h - 192, k + 138);
{
 setfillstyle(4,RED);
 bar(h - 292, k - 208, h - 290, k - 16);
 getch();
}
}

///////////////////////////////MAIN////////////////////////////////

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
 getch();
}
