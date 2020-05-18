#include<graphics.h>

main()
{
    int graphdriver= DETECT, graphmode;
    initgraph(&graphdriver, &graphmode, "c\tc\bgi");

    int a=80,b= -70;
    int c=50,d= -40;

    float x=0.5, y=0.5;
    float m=0.5, n=0.5;

    //clouds 1
    ellipse(40,30,60,240,10,15);
    ellipse(65,20,345,165,20,15);
    ellipse(103,29,340,160,20,15);
    ellipse(109,42,230,50,20,10);
    ellipse(66,46,163,340,31,17);

    //clouds 2
    ellipse(200,30,60,240,10,15);
    ellipse(225,20,345,165,20,15);
    ellipse(262,27,340,160,20,15);
    ellipse(268,42,230,50,20,10);
    ellipse(226,46,163,340,31,15);
    ellipse(300,21,20,182,21,19);
    ellipse(325,31,290,100,21,15);
    ellipse(299,45,228,20,33,11);


    //clouds 3
    ellipse(450,30,60,240,10,15);
    ellipse(475,20,345,165,20,15);
    ellipse(512,27,340,160,20,15);
    ellipse(518,42,230,50,20,10);
    ellipse(476,46,163,340,31,15);

    //Mountain
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(0,150,100,75);
    line(100,75,200,150);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(175,131,275,75);
    line(275,75,375,150);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(350,131,450,75);
    line(450,75,550,150);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(525,131,600,75);
    line(600,75,750,180);

    line(0,150,750,150);
    floodfill(100,136,WHITE);
    floodfill(275,136,WHITE);
    floodfill(450,136,WHITE);
    floodfill(600,136,WHITE);


    //tree 1
    line(240,420,275,420);
    line(240,420,245,405);
    line(275,420,270,405);
    line(245,405,240,405);
    line(270,405,275,405);
    line(240,405,245,390);
    line(275,405,270,390);
    line(245,390,240,390);
    line(270,390,275,420);
    line(240,390,258,370);
    line(275,390,257,370);

    line(250,460,250,420);
    line(265,460,265,420);
    line(250,460,265,460);
    line(250,420,265,420);

    //tree 2
    line(240+c,420+d,275+c,420+d);
    line(240+c,420+d,245+c,405+d);
    line(275+c,420+d,270+c,405+d);
    line(245+c,405+d,240+c,405+d);
    line(270+c,405+d,275+c,405+d);
    line(240+c,405+d,245+c,390+d);
    line(275+c,405+d,270+c,390+d);
    line(245+c,390+d,240+c,390+d);
    line(270+c,390+d,275+c,420+d);
    line(240+c,390+d,258+c,370+d);
    line(275+c,390+d,257+c,370+d);

    line(250+c,460+d,250+c,420+d);
    line(265+c,460+d,265+c,420+d);
    line(250+c,460+d,265+c,460+d);
    line(250+c,420+d,265+c,420+d);

    //house 1
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    line(88,400,163,400);
    line(100,370,88,400);
    line(100,370,112,400);
    line(100,370,150,370);
    line(150,370,163,400);
    floodfill(100,375,WHITE);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,8);
    line(112,400,112,400);
    line(88,440,112,440);
    line(88,400,88,440);
    line(112,440,163,440);
    floodfill(105,375,WHITE);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,8);
    line(163,400,163,440);
    line(112,440,163,440);
    line(112,400,112,440);
    line(88,400,163,400);
    floodfill(115,405,WHITE);

//DOOR
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,8);
    line(94,440,94,420);
    line(106,440,106,420);
    line(94,420,106,420);
    floodfill(97,435,WHITE);

    //house 2
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,YELLOW);
    line(88+a,400+b,163+a,400+b);
    line(100+a,370+b,88+a,400+b);
    line(100+a,370+b,112+a,400+b);
    line(100+a,370+b,150+a,370+b);
    line(150+a,370+b,163+a,400+b);
    floodfill(100,375,WHITE);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    line(112+a,400+b,112+a,400+b);
    line(88+a,440+b,112+a,440+b);
    line(88+a,400+b,88+a,440+b);
    line(112+a,440+b,163+a,440+b);
    floodfill(105,375,WHITE);

    line(163+a,400+b,163+a,440+b);
    line(112+a,440+b,163+a,440+b);
    line(112+a,400+b,112+a,440+b);
    line(88+a,400+b,163+a,400+b);

    //DOOR
    line(94+a,440+b,94+a,420+b);
    line(106+a,440+b,106+a,420+b);
    line(94+a,420+b,106+a,420+b);


    getch();
    closegraph();
}
