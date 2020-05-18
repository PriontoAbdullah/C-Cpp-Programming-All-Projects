#include<graphics.h>

int main()
{
    int i;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\tc\\bgi");

for(i=0;i<500;i++){
line(50+i,100,190+i,150);

line(190+i,150,260+i,150);

arc(110+i,370,180,360,30);
       setcolor(LIGHTGREEN);{
circle(260+i,150,50);
circle(260+i,150,20);
       }
delay(10);
cleardevice();

line(0,195,650,195);

line(0,200,650,200);

       setcolor(LIGHTCYAN);{
        outtextxy(80+i,300,"Jony Miah");


       }
}

getch();
}

