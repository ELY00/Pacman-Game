#include<BIOS.H>
#include<CONIO.H>
#include<CTYPE.H>
#include<FSTREAM.H>
#include<GRAPHICS.H>
#include<MATH.H>
#include<PROCESS.H>
#include<STDIO.H>
#include<STRING.H>
#include<TIME.H>
#include<DOS.H>
void main ()
{clrscr ();
int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
int lpp,kpp,olo=0,c12=0,r12=0,bpp=0;
char kk[]="0123456789",zm[100],mb[100];
settextstyle(3, HORIZ_DIR, 3);
setcolor(BLACK);
for (lpp=0;lpp<=1000;lpp++)
{c12=0;
bar(40,40,250,80);
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
outtextxy(50,50,mb);
delay(100);
}
getch ();
}