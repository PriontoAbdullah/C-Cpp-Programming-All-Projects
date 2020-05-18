#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int a,b,c,d,e,f,g,h;

void background();
void background2();
main()
{

int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");

background();

//man
circle(280,340,8);
circle(284,338,1);
line(282,343,285,343);
line(278,348,278,355);
line(282,348,282,355);
rectangle(275,355,285,375);
line(280,360,310,355);
line(280,363,310,358);
line(285,375,287,395);
line(275,375,282,395);
rectangle(282,395,288,398);
line(288,395,290,398);

delay(1000);
cleardevice();
background();


//man
circle(290,325,7);
circle(294,323,1);
line(292,328,294,328);
line(290,333,290,338);
line(293,333,293,338);
rectangle(287,340,294,355);
//leg
line(287,355,305,370);
line(294,355,304,366);
//hand
line(289,345,305,340);
line(290,342,305,338);




//man climbing
d=0;
for(c=0;c<75;c++)
{
circle(290,325-d,7);
circle(294,323-d,1);
line(292,328-d,294,328-d);
line(290,333-d,290,338-d);
line(293,333-d,293,338-d);
rectangle(287,340-d,294,355-d);

//leg
line(287,355-(d-1),305,370-(d-1));
line(294,355-(d-1),304,366-(d-1));


if(c%3==0)
{

//hand
line(289,345-d,305,340-d);
line(290,342-d,305,338-d);
delay(200);
line(289,345-d,305,340-d+3);
line(290,342-d,305,338-d+3);
delay(200);
}
//leg
line(287,355-d,305,370-d);
line(294,355-d,304,366-d);


d=d+2;
 delay(40);
 cleardevice();

background();

}
//man top
circle(290,325-d,7);
circle(294,323-d,1);
line(292,328-d,294,328-d);
line(290,333-d,290,338-d);
line(293,333-d,293,338-d);
rectangle(287,340-d,294,355-d);

//leg
line(287,355-(d-1),305,370-(d-1));
line(294,355-(d-1),304,366-(d-1));
//hand
line(289,345-d,305,340-d);
line(290,342-d,305,338-d);

delay(500);
cleardevice();
{

background();


//man top
circle(290,325-d,7);
circle(294,323-d,1);
line(292,328-d,294,328-d);
line(290,333-d,290,338-d);
line(293,333-d,293,338-d);
rectangle(287,340-d,294,355-d);

//leg
line(287,355-(d-1),305,370-(d-1));
line(294,355-(d-1),304,366-(d-1));

//new hand
//hand
line(289,345-d,305,347-d);
line(290,342-d,288,321-d);
}
delay(500);
 e=0;
 //falling coc
for(c=0;c<90;c++)
{
circle(285,160+e,10);
floodfill(286,162+e,WHITE);

line(285,150+e,276,145+e);
line(285,150+e,293,145+e);

e=e+3;

delay(20);
cleardevice();

background2();

//man top
circle(290,325-d,7);
circle(294,323-d,1);
line(292,328-d,294,328-d);
line(290,333-d,290,338-d);
line(293,333-d,293,338-d);
rectangle(287,340-d,294,355-d);

//leg
line(287,355-(d-1),305,370-(d-1));
line(294,355-(d-1),304,366-(d-1));

//hand
line(289,345-d,305,340-d);
line(290,342-d,305,338-d);

}
circle(285,160+e,10);
floodfill(286,162+e,WHITE);
line(285,150+e,276,145+e);
line(285,150+e,293,145+e);

delay(1000);
//man comng dwn
f=0;
for(c=0;c<60;c++)
{
//man top
circle(290,325-d+f,7);
circle(294,323-d+f,1);
line(292,328-d+f,294,328-d+f);
line(290,333-d+f,290,338-d+f);
line(293,333-d+f,293,338-d+f);
rectangle(287,340-d+f,294,355-d+f);

//leg
line(287,355-d+f,305,370-d+f);
line(294,355-d+f,304,366-d+f);

//hand
line(289,345-d+f,305,340-d+f);
line(290,342-d+f,305,338-d+f);
f=f+3;
delay(30);
cleardevice();
circle(285,160+e,10);
floodfill(286,162+e,WHITE);

line(285,150+e,276,145+e);
line(285,150+e,293,145+e);
background2();
}
//man top
circle(290,325-d+f,7);
circle(294,323-d+f,1);
line(292,328-d+f,294,328-d+f);
line(290,333-d+f,290,338-d+f);
line(293,333-d+f,293,338-d+f);
rectangle(287,340-d+f,294,355-d+f);

//leg
line(287,355-d+f,305,370-d+f);
line(294,355-d+f,304,366-d+f);

//hand
line(289,345-d+f,305,340-d+f);
line(290,342-d+f,305,338-d+f);

getch();
}
void background()
{

line(300,150,300,400);
line(320,150,320,400);
b=0;

for(a=0;a<10;a++)
{
line(300,155+b,320,155+b);
b=b+25;
 }
ellipse(320,430,0,90,35,30);
ellipse(300,430,90,180,35,30);



b=0;
for(a=0;a<10;a++)
{
line(300,155+b,320,155+b);
b=b+25;
 }
ellipse(320,430,0,90,35,30);
ellipse(300,430,90,180,35,30);
//1st leaf
line(295,140,240,130);
line(240,130,180,160);
line(180,160,210,155);
line(210,155,205,160);
line(205,160,235,150);
line(235,150,225,158);
line(225,158,275,145);
//2nd leaf
line(325,145,385,130);
line(385,130,420,160);
line(420,160,395,155);
line(395,155,400,160);
line(400,160,365,150);
line(365,150,370,155);
line(370,155,330,150);

line(296,130,220,110);
line(220,110,200,140);
line(200,140,215,135);
line(325,135,390,100);
line(390,100,410,130);
line(410,130,400,125);
line(390,115,410,142);
line(410,142,400,140);

line(300,120,390,80);
line(390,80,400,110);
line(310,110,260,80);
line(260,80,230,110);
circle(285,160,10);
floodfill(286,162,WHITE);
line(285,150,276,145);
line(285,150,293,145);
circle(280,157,10);
floodfill(271,158,WHITE);
circle(275,157,10);
circle(330,159,10);
floodfill(329,157,WHITE);
circle(330,164,10);
circle(335,160,10);


}
void background2()
{

 line(300,150,300,400);
line(320,150,320,400);
b=0;

for(a=0;a<10;a++)
{
line(300,155+b,320,155+b);
b=b+25;
 }
ellipse(320,430,0,90,35,30);
ellipse(300,430,90,180,35,30);
//1st leaf
line(295,140,240,130);
line(240,130,180,160);
line(180,160,210,155);
line(210,155,205,160);
line(205,160,235,150);
line(235,150,225,158);
line(225,158,275,145);
//2nd leaf
line(325,145,385,130);
line(385,130,420,160);
line(420,160,395,155);
line(395,155,400,160);
line(400,160,365,150);
line(365,150,370,155);
line(370,155,330,150);
terrace
line(296,130,220,110);
line(220,110,200,140);
line(200,140,215,135);
line(325,135,390,100);
line(390,100,410,130);
line(410,130,400,125);
line(390,115,410,142);
line(410,142,400,140);

line(300,120,390,80);
line(390,80,400,110);
line(310,110,260,80);
line(260,80,230,110);
circle(280,157,10);
floodfill(271,158,WHITE);
circle(275,157,10);
circle(330,159,10);
floodfill(329,157,WHITE);
circle(330,164,10);
circle(335,160,10);


}
