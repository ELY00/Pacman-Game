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
#include<math.h>

//////////////////////////////////MAIN PAGE///////////////////////////////////////////////////

int i;
int x1=getmaxx()/2-275;
int y1=30;
int p,zz,j,B[100];
char nam[100],ch='y',A[100][100];

class highscore
{
 int n;
 int z;
 char name[100];
 public:
 int rec();
 void add();
 void modify();
 void display();
}t;

int highscore::rec()
 {
   fstream ob3;
   ob3.open("Highscore.txt",ios::in);
   ob3.seekg(0,ios::end);
   z=ob3.tellg()/sizeof(t);
   ob3.close();
   return z;
 }

void highscore::add()
{
  fstream obj;
  obj.open("Highscore.txt",ios::out);
  strcpy(name,"No Name");
  n=0;
  obj.write((char*)&t,sizeof(t));
      obj.close();
}
 void highscore::modify()
{
  cout<<"Enter score ";
  cin>>p;
  cout<<"Enter name ";
  gets(nam);
  fstream ob1,ob;
  ob1.open("Highscore.txt",ios::in);
  i=0;
  zz=rec();
 for(j=1;j<=zz;j++)        //zz=10
{
  ob1.read((char*)&t,sizeof(t));
  strcpy(A[i],name);
  B[i]=n;
  i++;
}
  ob1.close();
  int mt=0;
 for(j=0;j<i;j++)
{
  mt++;
  if(p>B[j])
  break;
}
   for(j=i;j>=mt-1;j--)
   B[j]=B[j-1];
   B[mt-1]=p;
   for(j=i;j>=mt-1;j--)
   strcpy(A[j],A[j-1]);
   strcpy(A[mt-1],nam);
   ob.open("TEMPORARY.txt",ios::out);
   for(j=0;j<=i;j++)
{
   strcpy(name,A[j]);
   n=B[j];
   ob.write((char*)&t,sizeof(t));}
   ob.close();
   remove("Highscore.txt");
   rename("TEMPORARY.txt","Highscore.txt");
}
void highscore::display()
{
  cleardevice();
  void bk();
  void choose();
  fstream ob2;
  zz=rec();
  ob2.open("Highscore.txt",ios::in);
  int oo=0,ko,lp,zx=0,kl;
  char zr[]="0123456789",hr[10],br[10];
  for(j=1;j<=10;j++)  //zz=10
{
  lp=0;
  ob2.read((char*)&t,sizeof(t));
  setcolor(14);
  settextstyle(9,HORIZ_DIR,2);
  outtextxy(getmaxx()/2-125,getmaxy()/2-225+oo ,name);
  while(n>0)
{
  ko=n%10;
  n=n/10;
  hr[lp]=zr[ko];
  lp++;
}
  hr[lp]='\0';
 for(kl=0,zx=strlen(hr)-1;kl<strlen(hr),zx>=0;kl++,zx--)
{
  br[kl]=hr[zx];}
  br[strlen(hr)]='\0';
  outtextxy(getmaxx()/2+40 ,getmaxy()/2-225+oo , br);
  oo+=30;
}
  ob2.close();
  setcolor(15);
  settextstyle(5,HORIZ_DIR,2);
  outtextxy(200,450,"Press (esc) to return to menu");
while (bioskey(1) == 0)
{
  int  key = bioskey(0);
  if(key==283)
{
  bk();
  choose();
} } }


void credits()
{
  cleardevice ();
  setcolor(4);
  settextstyle(3,HORIZ_DIR,7);
  outtextxy(x1+310,y1,"ASA PRODUCTION");
  settextstyle(2,HORIZ_DIR,8);
  setcolor(CYAN);
  outtextxy(40,150,"Produced by ");
  settextstyle(4,HORIZ_DIR,6);
  setcolor(YELLOW);
  outtextxy(75,200,"ANKIT");
  outtextxy(75,240,"ARYA");
  outtextxy(75,280,"SATISH");
  setcolor(GREEN);
  settextstyle(2,HORIZ_DIR,30);
  outtextxy(100,330,"SPECIAL THANKS TO");
  outtextxy(125,360,"SMRITI MA'AM");
  delay(5000);
  exit(0);
}

void bk()
{
  cleardevice();
  int x=getmaxx();
  int y=getmaxy();
  setfillstyle(5,14);
  bar(0,0,x,20);
  bar(0,0,20,y);
  bar(0,y-20,x,y);
  bar(x-20,0,x,y);}

void zoom1()
{
   void game();
   void zoom2();
   void zoom4();
   void zoom3();
   void bk();
  int x1=getmaxx()/2-275;
  int y1=30;
  bk();
  setcolor(2);
  settextstyle(0,HORIZ_DIR,10);
  outtextxy(x1+50,y1,"PACMAN");
  setcolor(14);
  settextstyle(9,HORIZ_DIR,4);
  outtextxy(getmaxx()/2-125,getmaxy()/2-50,"PLAY GAME");
  setcolor(4);
  settextstyle(9,HORIZ_DIR,2);
  outtextxy(getmaxx()/2-125,getmaxy()/2+25,"INSTRUCTIONS");
  outtextxy(getmaxx()/2-125,getmaxy()/2+100,"HIGH SCORES");
  outtextxy(getmaxx()/2-125,getmaxy()/2+175,"EXIT");
   while (bioskey(1) == 0)
{
   int  key = bioskey(0);
  if(key==20480)
  zoom2();
  else if(key==18432)
  zoom4();
//else if (key==7181)
//whatever function you call to play game remember to call
//t.modify() to change scoreboard if changes required
}
}

void zoom2()
{
  void instructions();
  void zoom1();
  void zoom3();
  void zoom4();
  void bk();
  int x1=getmaxx()/2-275;
  int y1=30;
  bk();
  setcolor(2);
  settextstyle(0,HORIZ_DIR,10);
  outtextxy(x1+50,y1,"PACMAN");
  setcolor(14);
  settextstyle(9,HORIZ_DIR,4);
  outtextxy(getmaxx()/2-125,getmaxy()/2+25,"INSTRUCTIONS");
  setcolor(4);
  settextstyle(9,HORIZ_DIR,2);
  outtextxy(getmaxx()/2-125,getmaxy()/2-50,"PLAY GAME");
  outtextxy(getmaxx()/2-125,getmaxy()/2+100,"HIGH SCORES");
  outtextxy(getmaxx()/2-125,getmaxy()/2+175,"EXIT");
  while (bioskey(1) == 0)
{
  int  key = bioskey(0);
  if(key==20480)
  zoom3();
  else if(key==18432)
  zoom1();
  else if(key==7181)
  instructions();
}
}

void zoom3()
{
  void choose();
  void credits();
  void zoom4();
  void zoom2();
  void zoom1();
  int x1=getmaxx()/2-275;
  int y1=30;
  void bk();
  bk();
 setcolor(2);
 settextstyle(0,HORIZ_DIR,10);
 outtextxy(x1+50,y1,"PACMAN");
 setcolor(14);
 settextstyle(9,HORIZ_DIR,4);
 outtextxy(getmaxx()/2-125,getmaxy()/2+100,"HIGH SCORES");
 setcolor(4);
 settextstyle(9,HORIZ_DIR,2);
 outtextxy(getmaxx()/2-125,getmaxy()/2-50,"PLAY GAME");
 outtextxy(getmaxx()/2-125,getmaxy()/2+25,"INSTRUCTIONS");
 outtextxy(getmaxx()/2-125,getmaxy()/2+175,"EXIT");
 settextstyle(5,HORIZ_DIR,2);
 while (bioskey(1) == 0)
{
  int  key = bioskey(0);
  if(key==20480)
  zoom4();
  else if(key==18432)
  zoom2();
  else if (key==7181)
  t.display();
}
}


void zoom4()
{
  void zoom3();
  void zoom1();
  void zoom2();
   int x1=getmaxx()/2-275;
   int y1=30;
   void bk();
   bk();
    setcolor(2);
    settextstyle(0,HORIZ_DIR,10);
    outtextxy(x1+50,y1,"PACMAN");
    setcolor(14);
    settextstyle(9,HORIZ_DIR,4);
   outtextxy(getmaxx()/2-125,getmaxy()/2+150,"EXIT");
   setcolor(4);
   settextstyle(9,HORIZ_DIR,2);
   outtextxy(getmaxx()/2-125,getmaxy()/2-50,"PLAY GAME");
  outtextxy(getmaxx()/2-125,getmaxy()/2+25,"INSTRUCTIONS");
  outtextxy(getmaxx()/2-125,getmaxy()/2+100,"HIGH SCORES");
while (bioskey(1) == 0)
{
   int  key = bioskey(0);
   if(key==20480)
   zoom1();
  else if(key==18432)
   zoom3();
  else if (key==7181)
   credits();
}
}

void choose ()
{
  int n=0,m=0;
  int x1=getmaxx()/2-275;
  int y1=30;
  void zoom1 ();
  void zoom2 ();
  void zoom3 ();
  void zoom4 ();
   setcolor(2);
  settextstyle(0,HORIZ_DIR,10);
  outtextxy(x1+50,y1,"PACMAN");
  setcolor(4);
  settextstyle(9,HORIZ_DIR,2);
  outtextxy(getmaxx()/2-125,getmaxy()/2-50,"PLAY GAME");
  outtextxy(getmaxx()/2-125,getmaxy()/2+25,"INSTRUCTIONS");
  outtextxy(getmaxx()/2-125,getmaxy()/2+100,"HIGH SCORES");
  outtextxy(getmaxx()/2-125,getmaxy()/2+175,"EXIT");
   int key;
  while (bioskey(1) == 0);
{
   key = bioskey(0);
   if(key==20480)
   n++;
   else if(key==18432)
   m++;
}
 if(abs(n-m)%4==1)
   zoom1();
}

void instructions()
{
  cleardevice ();
  settextstyle(4,HORIZ_DIR,8);
  outtextxy(0,0,"INSTRUCTIONS");
  setcolor(5);
  settextstyle(2,HORIZ_DIR,8);
  outtextxy(50,125,"Use the up, down, left, right arrow ");
  outtextxy(50,150,"keys on your keyboard to move up, ");
  outtextxy(50,175,"down, left, right on the screen. ");
  outtextxy(50,200,"Like every man has a fate, so is ");
  outtextxy(50,225,"yours in the hands of 4 ghosts who ");
  outtextxy(50,250,"will constantly try to take you to ");
  outtextxy(50,275,"the other world with themselves. ");
  outtextxy(50,300,"Your only hope to survive is to ");
  outtextxy(50,325,"collect all the nimbus to make ");
  outtextxy(50,350,"nimbu mirchi to ward off the ghosts ");
  setcolor(14);
   settextstyle(2,HORIZ_DIR,8);
   outtextxy(50,400," PLEASE MEET GAME-MAKER FOR HACKS ");
  setcolor(15);
  settextstyle(5,HORIZ_DIR,2);
  outtextxy(200,450,"Press (esc) to return to menu");

while (bioskey(1) == 0)
{
  int  key = bioskey(0);
  if(key==283)
{
   bk();
   choose();}
}
}

void main ()
{
   clrscr();
   int n=0,m=0;
   void zoom1 ();
void zoom2 ();
void zoom3 ();

   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
}
  int x=getmaxx();
  int y=getmaxy();
  setfillstyle(5,14);
  for(i=0;i<=x;i++)
{
  bar(0,0,i,20);
  delay(2);}
  for(i=0;i<=y;i++)
{
  bar(x-20,0,x,i);
  delay(2);}
  for(i=x;i>=0;i--)
{
   bar(i,y-20,x,y);
   delay(2);}
   for(i=y;i>=0;i--)
{
   bar(0,i,20,y);
   delay(2);}
   choose();
   getch();
}

//////////////////////////////PACMAN COORDINATES//////////////////////////////////////////

int key,i,x,y,abc,ab,last=220;
long int lpp;
//void stop()

//{
// turn(

void Score(long int lpp)
{
long int kpp,olo=0,c12=0,r12=0;
 long int bpp=0;
 char kk[]="0123456789",zm[5000],mb[5000];
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
 int h=getmaxx()/2,k=getmaxy()/2;

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
     for(ab=x-12;ab<=x+12;ab++)

       if(ab==h+310 && i>=k-109 && i=<k+109)
   {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
   }
 else if(ab==h+279 && i>=k-208 && i<=k-31)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
   }
 else if(ab==h+249 && i>=k-178 && i<=k-30)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
   }
 else if(ab==h+279 && i>=k+31 && i<=k+180)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
   }
 else if(ab==h+219 && i>=k-148 && i<=k-118)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);                                }
  else if(ab==h+114 && i>=k-118 && i<=k-28)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
   }
   else if(ab==h+279 && i>=k+31 && i<=k+180)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
    else if(ab==h+249 && i>=k+30 && i<=k+70)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
     else if(ab==h+189 && i>=k+48 && i<=k+68)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
      else if(ab==h+189 && i>=k+98 && i<=k+128)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
       else if(ab==h+189 && i>=k+158 && i<=k+178)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
      else if(ab==h+129 && i>=k+87 && i<=k+150)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(ab==h+101 && i>=k+150 && i<=k+208)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(ab=h+97 && i>=k+87 && i<=k+120)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(ab=h+.5 && i>=k-178 && i<=k-56)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
      else if(ab=h+65 && i>=k+47 && i<=k+120)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(ab=h+3 && i>=k+47 && i<=k+128)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(ab=h+84 && i>=k-26 && i<=k+26)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
      else if(i=k-177 && ab>=h+30 && ab<=h+250)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
    else if(i=k-147 && ab>=h+30 && ab<=h+220)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
    else if(i=k-87 && ab>=h+115 && ab<=h+250)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
      else if(i=k-117 && ab>=h+205 && ab<=h+220)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(i=k-55 && ab>=h && ab<=h+115)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
     else if(i=k+179 && ab>=h+160 && ab<=h+280)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
      else if(i=k+49 && ab>=h+130 && ab<=h+250)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(i=k+149 && ab>=h+72 && ab<=h+128)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
      else if(i=k-85 && ab>=h+31 && ab<=h+85)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(i=k && ab>=h+200 && ab<=h+280)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(i=k+48 && ab>=h+4 && ab<=h+64)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(i=k-25 && ab>=h && ab<=h+85)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(i=k+25 && ab>=h && ab<=h+85)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
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
 int h=getmaxx()/2,k=getmaxy()/2;

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
     for(ab=x-12;ab<=x+12;ab++)

      if(ab==h+310 && i>=k-109 && i=<k+109)
   {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
   }
 else if(ab==h+279 && i>=k-208 && i<=k-31)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
   }
 else if(ab==h+249 && i>=k-178 && i<=k-30)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
   }
 else if(ab=h+279 && i>=k+31 && i<=k+180)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
   }
 else if(ab=h+219 && i>=k-148 && i<=k-118)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
   }
  else if(ab=h+114 && i>=k-118 && i<=k-28)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
   }
   else if(ab=h+279 && i>=k+31 && i<=k+180)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
    else if(ab=h+249 && i>=k+30 && i<=k+70)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
     else if(ab=h+189 && i>=k+48 && i<=k+68)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
      else if(ab=h+189 && i>=k+98 && i<=k+128)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
       else if(ab=h+189 && i>=k+158 && i<=k+178)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
      else if(ab=h+129 && i>=k+87 && i<=k+150)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(ab=h+101 && i>=k+150 && i<=k+208)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(ab=h+97 && i>=k+87 && i<=k+120)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(ab=h+.5 && i>=k-178 && i<=k-56)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
      else if(ab=h+65 && i>=k+47 && i<=k+120)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(ab=h+3 && i>=k+47 && i<=k+128)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(ab=h+84 && i>=k-26 && i<=k+26)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
      else if(i=k-177 && ab>=h+30 && ab<=h+250)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
    else if(i=k-147 && ab>=h+30 && ab<=h+220)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
    else if(i=k-87 && ab>=h+115 && ab<=h+250)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
      else if(i=k-117 && ab>=h+205 && ab<=h+220)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(i=k-55 && ab>=h && ab<=h+115)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
     else if(i=k+179 && ab>=h+160 && ab<=h+280)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
      else if(i=k+49 && ab>=h+130 && ab<=h+250)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(i=k+149 && ab>=h+72 && ab<=h+128)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }
      else if(i=k-85 && ab>=h+31 && ab<=h+85)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(i=k && ab>=h+200 && ab<=h+280)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(i=k+48 && ab>=h+4 && ab<=h+64)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(i=k-25 && ab>=h && ab<=h+85)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
    }

      else if(i=k+25 && ab>=h && ab<=h+85)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,i);
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
 int h=getmaxx()/2,k=getmaxy()/2;


setcolor(BLACK);

for(i=x;;i--)
 {

 for(abc=0;abc<=last;abc++)
   {
     for(ab=y-12;ab<=y+12;ab++)
     {
	if(i+12==h+310 && ab>=k-109 && ab=<k+109)
   {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
   }
 else if(i+12==h+279 && ab>=k-208 && ab<=k-31)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
   }
 else if(i+12==h+249 && ab>=k-178 && ab<=k-30)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
   }
 else if(i+12==h+279 && ab>=k+31 && ab<=k+180)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
   }
 else if(i+12==h+219 && ab>=k-148 && ab<=k-118)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
   }
  else if(i+12==h+114 && ab>=k-118 && ab<=k-28)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
   }
   else if(i+12==h+279 && ab>=k+31 && ab<=k+180)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
    else if(i+12==h+249 && ab>=k+30 && ab<=k+70)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
     else if(i+12==h+189 && ab>=k+48 && ab<=k+68)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
      else if(i+12==h+189 && ab>=k+98 && ab<=k+128)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
       else if(i+12==h+189 && ab>=k+158 && ab<=k+178)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
      else if(i+12==h+129 && ab>=k+87 && ab<=k+150)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(i+12==h+101 && ab>=k+150 && ab<=k+208)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(i+12==h+97 && ab>=k+87 && ab<=k+120)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(i+12==h+.5 && ab>=k-178 && ab<=k-56)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
      else if(i+12==h+65 && ab>=k+47 && ab<=k+120)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(i+12==h+3 && ab>=k+47 && ab<=k+128)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(i+12==h+84 && ab>=k-26 && ab<=k+26)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
      else if(ab==k-177 && i+12>=h+30 && i+12<=h+250)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
    else if(ab==k-147 && i+12>=h+30 && i+12<=h+220)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
    else if(ab==k-87 && i+12>=h+115 && i+12<=h+250)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
      else if(ab==k-117 && ab>=h+205 && ab<=h+220)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(ab==k-55 && i+12>=h && i+12<=h+115)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
     else if(ab==k+179 && i+12>=h+160 && i+12<=h+280)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
      else if(ab==k+49 && i+12>=h+130 && i+12<=h+250)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(ab==k+149 && i+12>=h+72 && i+12<=h+128)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
      else if(ab==k-85 && i+12>=h+31 && i+12<=h+85)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(ab==k && i+12>=h+200 && i+12<=h+280)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(ab==k+48 && i+12>=h+4 && i+12<=h+64)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(ab==k-25 && i+12>=h && i+12<=h+85)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(ab==k+25 && i+12>=h && i+12<=h+85)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
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
 int h=getmaxx()/2,k=getmaxy()/2;

 setcolor(BLACK);
for(i=x;;i++)
 {
    for(abc=0;abc<=last;abc++)
   {
     for(ab=y-12;ab<=y+12;ab++)

	if(i-12==h+310 && ab>=k-109 && ab=<k+109)
   {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
   }
 else if(i-12==h+279 && ab>=k-208 && ab<=k-31)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
   }
 else if(i-12==h+249 && ab>=k-178 && ab<=k-30)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
   }
 else if(i-12==h+279 && ab>=k+31 && ab<=k+180)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
   }
 else if(i-12==h+219 && ab>=k-148 && ab<=k-118)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
   }
  else if(i-12==h+114 && ab>=k-118 && ab<=k-28)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
   }
   else if(i-12==h+279 && ab>=k+31 && ab<=k+180)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
    else if(i-12==h+249 && ab>=k+30 && ab<=k+70)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
     else if(i-12==h+189 && ab>=k+48 && ab<=k+68)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
      else if(i-12==h+189 && ab>=k+98 && ab<=k+128)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
       else if(i-12==h+189 && ab>=k+158 && ab<=k+178)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
      else if(i-12==h+129 && ab>=k+87 && ab<=k+150)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(i-12==h+101 && ab>=k+150 && ab<=k+208)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(i-12==h+97 && ab>=k+87 && ab<=k+120)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(i-12==h+.5 && ab>=k-178 && ab<=k-56)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
      else if(i-12==h+65 && ab>=k+47 && ab<=k+120)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(i-12==h+3 && ab>=k+47 && ab<=k+128)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(i-12==h+84 && ab>=k-26 && ab<=k+26)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
      else if(ab==k-177 && i-12>=h+30 && i-12<=h+250)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
    else if(ab==k-147 && i-12>=h+30 && i-12<=h+220)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
    else if(ab==k-87 && i-12>=h+115 && i-12<=h+250)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
      else if(ab==k-117 && i-12>=h+205 && i-12<=h+220)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(ab==k-55 && i-12>=h && i-12<=h+115)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
     else if(ab==k+179 && i-12>=h+160 && i-12<=h+280)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
      else if(ab==k+49 && i-12>=h+130 && i-12<=h+250)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(ab==k+149 && i-12>=h+72 && i-12<=h+128)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }
      else if(ab==k-85 && i-12>=h+31 && i-12<=h+85)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(ab==k && i-12>=h+200 && i-12<=h+280)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(ab==k+48 && i-12>=h+4 && i-12<=h+64)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(ab==k-25 && i-12>=h && i-12<=h+85)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
    }

      else if(ab==k+25 && i-12>=h && i-12<=h+85)
    {
	while(bioskey(1)==0);
	key=bioskey(0);
	turn(key,x,ab);
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

