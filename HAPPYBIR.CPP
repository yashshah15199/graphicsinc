#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,i,j;
char a[5];
initgraph(&gd,&gm,"..\\bgi");
settextstyle(3,HORIZ_DIR,4);
outtextxy(0,0,"DEAR SISTER");
setviewport(0,40,getmaxx()-50,getmaxy()-50,1);
settextstyle(3,HORIZ_DIR,2);
outtextxy(0,15,"May all your positive deviated dreams come true from ");
outtextxy(0,35,"today's special day. May god shower all his blessings");
outtextxy(0,55,"on you. Many many happy returns of the day. -Ekta");
delay(6000);
clearviewport();
outtextxy(0,15,"Wish you happiest bday, party hard but with us.");
outtextxy(0,35,"-Yash");
delay(3000);
cleardevice();



//settextjustify(CENTER_TEXT, CENTER_TEXT);
/*   settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
   setcolor(RED);

   for (i = 5; i >=0&& !kbhit(); i--)
   {
      sprintf(a, "%d", i);
      outtextxy(getmaxx()/2, getmaxy()/2-50, a);
      delay(1000);

      if (i == 0)
	 break;
      cleardevice();
   }
   cleardevice();

  */

int kk=0;
for(j=100;j<350 && !kbhit();j++)
{
	if(j%20==0)
	{
	setcolor(kk);
	kk=kk+3;
	delay(50);
	}
	ellipse(320,30,0,360,j+100,j+0);
}
for(j=100;j<350;j++)
{
	if(j%20==0)
	{
	setcolor(BLACK);
	delay(2);
	}
	ellipse(320,30,0,360,j+100,j+0);
}
cleardevice();


for(i=2;!kbhit();i++)
{
setcolor(i);
settextstyle(3,0,6);
outtextxy(140,150,"HAPPY  BIRTHDAY");
if(i%2==0)
{
settextstyle(3,1,5);
outtextxy(290,50,"YADHTRIB YPPAH");
}
delay(200);

}
delay(10);
cleardevice();

/*for(i=0;!kbhit();i++)
{
setcolor(1);
settextstyle(3,0,6);
  if(i<=6)
  {
  setbkcolor(i+1);
  }
  else
  {
  i=0;
  }
outtextxy(140,150,"HAPPY  BIRTHDAY");
//settextstyle(3,1,5);
//outtextxy(290,50,"YADHTRIB YPPAH");
delay(40);
} */

getch();
}
