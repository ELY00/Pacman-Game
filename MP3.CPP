#include<fstream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<bios.h>
#include<stdlib.h>
#include<process.h>
int i;
int x1=getmaxx()/2-275;
int y1=30;
int p,zz,j,B[100];
char nam[100],ch='y',A[100][100];
class highscore
{int n;
 int z;
 char name[100];
 public:
 int rec();
 void add();
 void modify();
 void display();
}t;
int highscore::rec()
 { fstream ob3;
   ob3.open("Highscore.txt",ios::in);
   ob3.seekg(0,ios::end);
   z=ob3.tellg()/sizeof(t);
   ob3.close();
   return z;
   }
 void highscore::add()
 { fstream obj;
   obj.open("Highscore.txt",ios::out);
   strcpy(name,"No Name");
  n=0;
  obj.write((char*)&t,sizeof(t));

     obj.close();
  }
 void highscore::modify()
 {cout<<"Enter score ";
  cin>>p;
  cout<<"Enter name ";
  gets(nam);
  fstream ob1,ob;
  ob1.open("Highscore.txt",ios::in);
  i=0;
  zz=rec();
 for(j=1;j<=zz;j++)        //zz=10
 { ob1.read((char*)&t,sizeof(t));
  strcpy(A[i],name);
  B[i]=n;
  i++;
  }
  ob1.close();
  int mt=0;
  for(j=0;j<i;j++)
  {mt++;
   if(p>B[j])
    break;}
   for(j=i;j>=mt-1;j--)
   B[j]=B[j-1];
   B[mt-1]=p;
   for(j=i;j>=mt-1;j--)
   strcpy(A[j],A[j-1]);
   strcpy(A[mt-1],nam);
   ob.open("TEMPORARY.txt",ios::out);
   for(j=0;j<=i;j++)
   {strcpy(name,A[j]);
    n=B[j];
    ob.write((char*)&t,sizeof(t));}
    ob.close();
    remove("Highscore.txt");
 rename("TEMPORARY.txt","Highscore.txt");
   }
void highscore::display()
{cleardevice();
 void bk();
 void choose();
 fstream ob2;
 zz=rec();
 ob2.open("Highscore.txt",ios::in);
 int oo=0,ko,lp,zx=0,kl;
 char zr[]="0123456789",hr[10],br[10];

 for(j=1;j<=10;j++)  //zz=10
{lp=0;
ob2.read((char*)&t,sizeof(t));
setcolor(14);
settextstyle(9,HORIZ_DIR,2);
outtextxy(getmaxx()/2-125,getmaxy()/2-225+oo ,name);
while(n>0)
{ko=n%10;
 n=n/10;
 hr[lp]=zr[ko];
 lp++;
 }
hr[lp]='\0';
for(kl=0,zx=strlen(hr)-1;kl<strlen(hr),zx>=0;kl++,zx--)
{br[kl]=hr[zx];}
 br[strlen(hr)]='\0';
outtextxy(getmaxx()/2+40 ,getmaxy()/2-225+oo , br);
oo+=30;
}
 ob2.close();
 setcolor(15);
settextstyle(5,HORIZ_DIR,2);
 outtextxy(200,450,"Press (esc) to return to menu");
while (bioskey(1) == 0)
{int  key = bioskey(0);
 if(key==283)
{bk();
choose();} }
}


void credits()
{cleardevice ();
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
{cleardevice();
int x=getmaxx();
int y=getmaxy();
setfillstyle(5,14);
bar(0,0,x,20);
bar(0,0,20,y);
bar(0,y-20,x,y);
bar(x-20,0,x,y);}

void zoom1()
{void game();
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
{int  key = bioskey(0);
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
{void instructions();
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
{int  key = bioskey(0);
if(key==20480)
zoom3();
else if(key==18432)
zoom1();
else if(key==7181)
instructions();
}
}
void zoom3()
{void choose();
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
{int  key = bioskey(0);
if(key==20480)
zoom4();
else if(key==18432)
zoom2();
else if (key==7181)
t.display();


}
}
void zoom4()
{void zoom3();
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
{int  key = bioskey(0);
if(key==20480)
zoom1();
else if(key==18432)
zoom3();
else if (key==7181)
credits();
}
}
void choose ()
{int n=0,m=0;
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
{ key = bioskey(0);
if(key==20480)
n++;
else if(key==18432)
m++;
}
if(abs(n-m)%4==1)
zoom1();
 }
void instructions()
{cleardevice ();
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
{int  key = bioskey(0);
if(key==283)
{bk();
choose();}
 }
}

void main ()
{clrscr();
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
{bar(0,0,i,20);
delay(2);}
for(i=0;i<=y;i++)
{bar(x-20,0,x,i);
delay(2);}
for(i=x;i>=0;i--)
{bar(i,y-20,x,y);
delay(2);}
for(i=y;i>=0;i--)
{bar(0,i,20,y);
delay(2);}
choose();
getch();
}