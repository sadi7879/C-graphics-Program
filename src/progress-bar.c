
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gd = DETECT ,gm;

int i;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(i=1; i<200; i++){
	  setcolor(GREEN);
	  outtextxy(50,180,"Loading...");
	  line(50+i,200,50+i,220);
	  delay(10);
	}
	if(i==200){
	   cleardevice();
	   setcolor(3);
	   settextstyle(4,HORIZ_DIR,12);
	   outtextxy(30,100,"WELCOME");
	   settextstyle(1,HORIZ_DIR,2);
	   outtextxy(210,250,"Loading Finished");
	}
getch();
}