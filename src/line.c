#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gd = DETECT ,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	//ground
	line(10,300,500,300);
	line(10,302,500,302);
	//home
	rectangle(50,150,200,298);
	//door
	rectangle(55,185,110,295);
	//windows
	rectangle(140,200,180,240);
	line(140,220,180,220);
	line(160,200,160,240);
	//roof
	line(30,150,220,150);
	line(115,50,220,150);
	line(115,50,28,150);
	//text
	settextstyle(1,HORIZ_DIR,5);
	outtextxy(300,200,"MY HOME");
getch();
}