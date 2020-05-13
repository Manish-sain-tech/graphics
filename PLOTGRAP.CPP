#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
putpixel(100,100,WHITE);
setcolor(RED);
line(10,10,40,40);
setcolor(GREEN);
circle(200,200,100);
getch();
}
