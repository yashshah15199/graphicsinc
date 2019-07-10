#include<stdlib.h>
#include<dos.h>
#include<graphics.h>

main()
{
   int i = 0,x, key, num, midx, gd = DETECT, gm;
   char a[10];

   initgraph(&gd,&gm,"..\\bgi");

   midx = getmaxx()/2;

   settextstyle(2,HORIZ_DIR,8);
   settextjustify(CENTER_TEXT,CENTER_TEXT);
   setcolor(WHITE);
   outtextxy(midx,20,"CAPTCHA");
   settextstyle(SCRIPT_FONT,HORIZ_DIR,4);
   outtextxy(midx,125,"Press any key to change captcha");
   outtextxy(midx,150,"Press escape key to quit");

   setcolor(WHITE);
   setviewport(100,200,600,400,1);
   setcolor(RED);
   randomize();

   while(1)
   {
      while(i<6)
      {
	 num = random(3);

	 if ( num == 0 )
	    a[i] = 65 + random(26);
	 else if ( num == 1)
	    a[i] = 97 + random(26);
	 else
	    a[i] = 48 + random(10);

	 i++;

      }
      a[i] = '\0';
      x= random(10);
       settextstyle(x,HORIZ_DIR,3);
      outtextxy(210,100,a);
      key = getch();

      if( key == 27 )                     /* escape key is numbered as 27*/
	 exit(0);
      clearviewport();
      i = 0;
   }
}