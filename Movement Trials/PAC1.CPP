#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>
#include<stdio.h>
#include<bios.h>
#include<string.h>



int key,i,x,y,lpp,abc,ab,last=2;
//void stop()
//{
// turn(

void Score(int lpp)
{
 int kpp,olo=0,c12=0,r12=0,bpp=0;
 char kk[]="0123456789",zm[100],mb[100];
 settextstyle(3, HORIZ_DIR, 3);
 setcolor(BLUE);
// for (lpp=0;lpp<=1000;lpp++)
 {c12=0;
 bar(getmaxx()/2-80,getmaxy()/2-20,getmaxx()/2+80,getmaxy()/2+20);
 /* if(lpp==1000)
 { exit(0);}*/
  bpp=lpp;
  while(bpp>0)
  {r12=bpp%10;
  bpp=bpp/10;
  zm[c12]=kk[r12];
  c12++;}
  zm[c12]='\0';
 for(kpp=0,olo=strlen(zm)-1;kpp<strlen(zm),olo>=0;kpp++,olo--)
 mb[kpp]=zm[olo];
 mb[strlen(zm)]='\0';
 outtextxy(getmaxx()/2-25,getmaxy()/2-18,mb);
 delay(10);
 }
}
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


void turn(key,x,y)

{       setcolor(BLACK);
     circle(x,y,10);
  void up(int x, int y);
  void down(int x, int y);
  void left(int x, int y);
  void right(int x, int y);
  if(key==18432)
 {
 up(x,y);
 }
 else if (key==20480)
  {
 down(x,y);
  }
 else if (key==19200)
  {
 left(x,y);
  }
 else if (key==19712)
  {

 right(x,y);
 }
 else if (key==283)
 exit(0);
}
void up(int x,int y)
{
 int u=getmaxx()/2,v=getmaxy()/2;
int Ax[]={u-310,u-310,u-310};
int Ay[]={v,v+1,v-1};
 setcolor(BLACK);
    setfillstyle(1,BLACK);
  pieslice(x,y,0,150,10);
  pieslice(x,y,210,360,10);
   setcolor(BLACK);
  line(x,y,x+10,y);
for(i=y;;i--)
 {
 for(abc=0;abc<=last;abc++)
   {
     for(ab=x-10;ab<=x+10;ab++)

       if(y+12==Ay[abc] && ab==Ax[abc])
	     {
	       break;
	      }
   }

  setcolor(BLACK);
  setfillstyle(1, YELLOW);
  pieslice(x,i,0,60,10);
  pieslice(x,i,120,360,10);

  setcolor(YELLOW);
  line(x,i,x+10,i);
   delay(10);


/*  setfillstyle(1,BLACK);
  line(x,i,x+10,i);
   setfillstyle(1, BLACK);
  pieslice(x,i,0,60,10);
  pieslice(x,i,120,360,10);
 */
   if(kbhit()!=0)
   {key=bioskey(0);
  break;}
 lpp=(lpp+1);
 Score(lpp);


  }
 turn(key,x,i);
}
void down(int x,int y)
{
 int u=getmaxx()/2,v=getmaxy()/2;
 int Ax[]={u-310,u-310,u-310};
 int Ay[]={v,v+1,v-1};
 setcolor(BLACK);
     setfillstyle(1,BLACK);
  pieslice(x,y,0,150,10);
  pieslice(x,y,210,360,10);
  setcolor(BLACK);
  line(x,y,x+10,y);
   setcolor(BLACK);
    setfillstyle(1, BLACK);
     line(x,y,x+10,y);
for(i=y;;i++)
 {
  for(abc=0;abc<=last;abc++)
   {
     for(ab=x-10;ab<=x+10;ab++)

       if(y-12==Ay[abc] && ab==Ax[abc])
	     {
	       break;
	      }
   }

  setcolor(BLACK);
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
   delay(10);

    setfillstyle(1,YELLOW);
    lpp=(lpp+1);
   Score(lpp);

 // pieslice(x,i,300,360,10);
 // pieslice(x,i,0,240,10);

   if(kbhit()!=0)
   {key=bioskey(0);
  break;}
  }
 turn(key,x,i);
}
void left(int x,int y)
{
 int u=getmaxx()/2,v=getmaxy()/2;
int Ax[]={u-310,u-310,u-310};
int Ay[]={v,v+1,v-1};
setcolor(BLACK);

for(i=x;;i--)
 {

 for(abc=0;abc<=last;abc++)
   {
     for(ab=y-12;ab<=y+12;ab++)
     {
       if(i-15==Ax[abc] && ab==Ay[abc])
       {

	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,i,y);

       }

     }
   }

 // if((i-12)==(getmaxx()/2-310))// && y>=0 && y<=2*v)
  // exit(0);

   setcolor(BLACK);
  setfillstyle(1,BLACK);
  pieslice(i,y,0,60,10);
  pieslice(i,y,120,360,10);

  setcolor(BLACK);
 line(i,y,i+10,y);
  //  setfillstyle(1, BLACK);
  // pieslice(i,y,30,330,10);
    setfillstyle(1,YELLOW);
 pieslice(i,y,0,150,10);
 pieslice(i,y,210,360,10);
  setcolor(YELLOW);
  line(i,y,i+10,y);
  //

  delay(10);
  setcolor(BLACK);
  setfillstyle(1,BLACK);
 line(i,y,i+10,y);

 setcolor(BLACK);
 setfillstyle(1,YELLOW);
  lpp=(lpp+1);
  Score(lpp);
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
 int u=getmaxx()/2,v=getmaxy()/2;
int Ax[]={u-310,u-310,u-310};
int Ay[]={v,v+1,v-1};
 setcolor(BLACK);
for(i=x;;i++)
 {
    for(abc=0;abc<=last;abc++)
   {
     for(ab=y-10;ab<=y+10;ab++)

       if(x+12==Ax[abc] && ab==Ay[abc])
	     {
	       break;
	      }
   }

   setcolor(BLACK);
    setfillstyle(1,BLACK);
  pieslice(i,y,0,150,10);
  pieslice(i,y,210,360,10);
  setcolor(BLACK);
  line(i,y,i+10,y);

   setfillstyle(1, YELLOW);
    pieslice(i,y,30,330,10);
 //   setcolor(BLACK);
   //  pieslice(i,y,30,330,10);
  delay(10);
   if(kbhit()!=0)
   {key=bioskey(0);
  break;}
  setfillstyle(1,YELLOW);
  lpp=(lpp+1);
  Score(lpp);
  }
 turn(key,i,y);
}


void main()
{
 int gdriver=DETECT,gmode,errorcode;
 initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
 /*
 errorcode=graphresult();
 if(errorcode!=grOk)
{
 cout<<"Graphics error:\n"<<grapherrormsg(errorcode);
 cout<<"Press any key to halt";
 getch();
}
*/
setcolor(GREEN);
circle(getmaxx()/2-310,getmaxy()/2,1);
while(bioskey(1)==0);
key=bioskey(0);
 Maze();
 turn(key,getmaxx()/2,getmaxy()/2);
 getch();
}

