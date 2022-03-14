
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gd = DETECT ,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	settextstyle(1,HORIZ_DIR,15);
	outtext("JOHN");

getch();
}