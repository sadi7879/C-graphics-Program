#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gd = DETECT ,gm;
int x1=10 , x2= 500;
	int y1=200 , y2 =200;
	int radius =100;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	line(x1,y1,x2,y2);
getch();
}