#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i,j;
initgraph(&gd,&gm,"..//bgi");
for(i=0;i<15 && !kbhit();i++)
{
settextstyle(1,0,10);
outtextxy(10+i,30,"Happy");
delay(100);

settextstyle(1,0,10);
outtextxy(10+i,120,"DIWALI");
delay(100);
}


setcolor(WHITE);
line(0,400,640,400);
rectangle(400,330,440,400);
rectangle(410,320,430,330);
setcolor(4);
line(419,280,419,398);
line(420,280,420,398);
rectangle(420,280,430,300);
settextstyle(1,0,1);
outtextxy(10,240,"PRESS ANY KEY TO FIRE THE ROCKET");
getch();
for(j=400;j<640;j++)
{
cleardevice();
setcolor(WHITE);
line(0,j,640,j);
rectangle(400,j-70,440,j);
rectangle(410,j-80,430,j-70);

setcolor(RED);
line(419,280,419,400);
line(420,280,420,400);
rectangle(420,280,430,300);

setcolor(YELLOW);
circle(425,300,2);

delay(5);
}

for(i=400;i>340;i--)
{
cleardevice();

setcolor(RED);
line(419,i,419,i-120);
line(420,i,420,i-120);
rectangle(420,i-120,430,i-100);

setcolor(YELLOW);
circle(425,i-100,2);
delay(25);
}
cleardevice();


	for (i=30; i<160; i++)
	{

		delay(20);
		setcolor(i/10);
		arc(415, 235, 0, 180, i-10);
	}




/*for(i=0;i<100 && !kbhit();i++)
{   // setcolor(i);
     circle(425,235,10+i);
     delay(30);
}    */
delay(500);


//cleardevice();


settextstyle(1,0,2);
outtextxy(10,250,"May every lamp that u lit bring to u new colours and light.");
delay(300);

settextstyle(1,0,3);
outtextxy(10,270,"Wishing you a happy and safe diwali");
delay(150);
outtextxy(400,300,"-Yash");

delay(3500);
cleardevice();
settextstyle(1,0,3);
setcolor(YELLOW);
outtextxy(50,65,"May this Diwali bring to you");
delay(200);
outtextxy(450,400,"-Yash");
settextstyle(2,0,5);
outtextxy(50,265,"     joy");
outtextxy(250,265,"    peace");
outtextxy(450,265,"and prosperity");

for(i=0;i<401;i=i+200)
{

setcolor(RED);
arc(100+i,200,180,0,100);

ellipse(100+i,200,180,0,100,30);
setcolor(YELLOW);
ellipse(105+i,180,0,360,15,50);

}



getch();
}