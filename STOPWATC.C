#include <graphics.h>
#include <dos.h>
#include <conio.h>
 
int main()
{
   int gd = DETECT, gm, i;
   char a[5];
 
   initgraph(&gd, &gm, "..\\bgi");
 
   settextjustify(CENTER_TEXT, CENTER_TEXT);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
   setcolor(RED);

   for (i = 10; i >=0 && !kbhit(); i--)
   {
   rectangle(getmaxx()/2-50, getmaxy()/2-50,getmaxx()/2+50, getmaxy()/2+50);
      sprintf(a, "%d", i);
      outtextxy(getmaxx()/2, getmaxy()/2, a);
      delay(1000);
 
      if (i == 0)
         break;
      cleardevice();
   }
 
   getch();
   closegraph();
   return 0;
}