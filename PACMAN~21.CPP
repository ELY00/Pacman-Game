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
 bar(h - 310, k - 210, h - 308, k + 210);
 bar(h - 308, k + 210, h, k + 208);
/* line(h, k + 210, h - 310, k + 210);
 line(h - 310, k + 210, h - 310, k - 210);
 line(h - 310, k - 210, h, k - 210);  */
 setcolor(BLUE);
 setfillstyle(1,BLUE);
 bar(h, k - 210, h + 310, k - 208);
 bar(h + 310, k - 208, h + 308, k + 210);
 bar(h + 308, k + 210, h, k + 208);
// line(h, k - 210, h + 310, k - 210);
// line(h + 310, k - 210, h + 310, k + 210);
 line(h + 310, k + 210, h, k + 210);
 setcolor(RED);

/////////////////////////////////////Left Red Part/////////////////////////////////////////////

 setfillstyle(1,RED);
/* line(h - 308, k - 208, h - 292, k - 208);
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
 line(h - 164, k + 168, h - 194, k + 168);   */
// bar(h - 194, k + 168, h - 192, k + 138);
 bar(h - 280, k - 208, h - 278, k - 31);
 bar(h - 250, k - 178, h - 248, k - 30);
 bar(h - 250, k - 178, h - 30, k - 176);
 bar(h - 220, k - 148, h - 30, k - 146);
 bar(h - 220, k - 148, h - 218, k - 118);
 bar(h - 250, k - 88, h - 115, k - 86);
 bar(h - 220, k - 118, h - 205, k - 116);
 bar(h - 115, k - 56, h , k - 54);
 bar(h - 115, k - 118, h - 113, k - 28);
 bar(h - 280, k + 31, h - 278, k + 180);
 bar(h - 280, k + 180, h - 160, k + 178);
 bar(h - 250, k + 50, h - 130, k + 48);
 bar(h - 250, k + 30, h - 248, k + 70);
 bar(h - 190, k + 48, h - 188, k + 68);
 bar(h - 190, k + 98, h - 188, k + 128);
 bar(h - 190, k + 158, h - 188, k + 178);
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

///////////////////////////////////////////MAIN/////////////////////////////////////////////////////////////////////////

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
