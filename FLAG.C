#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;


initgraph(&gd,&gm,"..\\bgi");

setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
bar(20,40,120,60);
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
bar(20,20,120,40);
setcolor(BLUE);
circle(70,30,10);
//floodfill(71,30,BLUE);
setcolor(6);
setfillstyle(SOLID_FILL,6);
bar(20,0,120,20);
setcolor(8);
setfillstyle(SOLID_FILL,8);
bar(10,300,20,0);
getch();
}
