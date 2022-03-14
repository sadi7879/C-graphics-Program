
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gd = DETECT ,gm;

int i;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(i=1; i<200; i++){
	  settextstyle(3,HORIZ_DIR,15);
	  outtextxy(50+i,200,"JOHN");
	  cleardevice();
	  delay(10);
	}
getch();
}