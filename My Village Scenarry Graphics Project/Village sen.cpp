#include<graphics.h>

int a=185,b= -67,p=78,q=107,k=-120,R;
int x1=487,y1=424,W=250,Z=200,s=78,O;
int w=25,i=25,j=445,m=240,n=267,v=14,X=-13;
int r=368,e=5,o=-33,r1=550,o1=-50,L,J=-6,Y=20;
int i1=168,m1=420,l=67,g,f=-170,h=-120,K;
float x=29, y=-92;

void sky();
void sun();
void clouds();
void birds();
void mountain();
void mosque();
void house_1();
void house_2();
void house_3();
void bigTree();
void river();
void boat();
void boatman();
void tractor();
void road();
void cowsfood();
void tree(int t,int q);
void car();
void truck();
void PlumTree();
void school();
void boy();
void flag();
void teaStall();
void flower();
void man();

main()
{
    int graphdriver= DETECT, graphmode= DETECT;
    initgraph(&graphdriver, &graphmode, "c\tc\bgi");

    clouds();
    mountain();
    sky();
    birds();
    sun();
    setfillstyle(9,GREEN);
    bar(215,151,550,230);
    setfillstyle(11,GREEN);
    bar(0,80+Z,290+W,22+Z);
    setfillstyle(11,GREEN);
    bar(284,380,500,222);
    bar(260,380,210,222);
    bar(0,380,10,222);
    bar(10,380,75,222);
    bar(130,380,102,222);
    setfillstyle(11,5);
    bar(0,325,500,450);
    setfillstyle(9,GREEN);
    bar(0,150,220,210);
    bar(165,150,220,222);
    mosque();
    flower();
    flag();
    school();
    bigTree();
    tree(13,-256);
    tree(-150,-242);
    tree(190,-256);
    tree(115,-62);
    tree(40,-72);
    house_1();
    house_2();
    house_3();
    man();
    boy();
    river();
    boatman();
    boat();
    road();
    cowsfood();
    tractor();
    car();
    PlumTree();
    truck();
    teaStall();

    getch();
    closegraph();
}

void clouds()
{
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
}

void mountain()
{
    //m1
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(0,150,100,75);
    line(100,75,200,150);
    //m2
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(175,131,275,75);
    line(275,75,375,150);
    //m3
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(350,131,450,75);
    line(450,75,550,150);
    //m4
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(525,131,600,75);
    line(600,75,750,180);
    //ground
    line(0,150,750,150);
    floodfill(100,136,WHITE);
    floodfill(275,136,WHITE);
    floodfill(450,136,WHITE);
    floodfill(600,136,WHITE);
}

void mosque()
{
    arc(106,105+J,80,0,5);
    line(105,120+J,105,110+J);
    setfillstyle(1,LIGHTGRAY);
    arc(105,123+J,-35,220,4);
    bar(99,125+J,111,128+J);
    bar(101,145+J,109,128+J);
    bar(97,141+J,113,145+J);
    bar(100,160+J,110,145+J);
    setcolor(LIGHTGRAY);
    for(L=1; L<=34; L++)
    {
        arc(57,160+J,0,180,L);
    }
    //wall
    setfillstyle(1,LIGHTGRAY);
    bar(16,160+J,114,208+J);
    bar(30,160+J,84,140+J);
    bar(40,130+J,74,140+J);
    bar(35,135+J,79,140+J);
    setfillstyle(1,DARKGRAY);
    bar(10,160+J,120,156+J);
    bar(13,212+J,117,208+J);
    setfillstyle(9,DARKGRAY);
    bar(10,215+J,120,211+J);
    //door
    setfillstyle(1,5);
    bar(24,208+J,44,180+J);
    bar(54,208+J,78,180+J);
    bar(86,208+J,106,180+J);
    setcolor(BLUE);
    arc(34,180+J,0,175,9);
    arc(34,180+J,0,175,6);
    arc(34,180+J,0,175,3);
    arc(66,180+J,0,175,11);
    arc(66,180+J,0,175,9);
    arc(66,180+J,0,175,7);
    arc(66,180+J,0,175,5);
    arc(66,180+J,0,175,3);
    arc(96,180+J,0,175,9);
    arc(96,180+J,0,175,6);
    arc(96,180+J,0,175,3);
}

void sky()
{
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(50,50,WHITE);
}

void birds()
{
    //bird - 1
    circle(50+r,100+o,5);
    line(53+r,98+o,60+r,100+o);
    line(53+r,102+o,60+r,100+o);
    circle(50+r,98+o,1);
    ellipse(35+r,100+o,0,360,10,5);
    line(28+r,100+o,15+r,95+o);
    line(28+r,100+o,14+r,96+o);
    line(29+r,100+o,13+r,97+o);
    line(29+r,101+o,12+r,98+o);
    line(29+r,102+o,10+r,99+o);
    line(29+r,103+o,12+r,100+o);
    ellipse(35+e+r,94+o,0,150,6,15);
    line(36+e+r,100+o,30+e+r,90+o);
    line(36+e+r,87+o,38+e+r,93+o);
    line(34+e+r,87+o,36+e+r,93+o);
     //bird - 2
    circle(50+r1,100+o1,5);
    line(53+r1,98+o1,60+r1,100+o1);
    line(53+r1,102+o1,60+r1,100+o1);
    circle(50+r1,98+o1,1);
    ellipse(35+r1,100+o1,0,360,10,5);
    line(28+r1,100+o1,15+r1,95+o1);
    line(28+r1,100+o1,14+r1,96+o1);
    line(29+r1,100+o1,13+r1,97+o1);
    line(29+r1,101+o1,12+r1,98+o1);
    line(29+r1,102+o1,10+r1,99+o1);
    line(29+r1,103+o1,12+r1,100+o1);
    ellipse(35+e+r1,94+o1,0,150,6,15);
    line(36+e+r1,100+o1,30+e+r1,90+o1);
    line(36+e+r1,87+o1,38+e+r1,93+o1);
    line(34+e+r1,87+o1,36+e+r1,93+o1);
}

void sun()
{
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,YELLOW);
    arc(524,112,0,173,30);
    floodfill(520,105,WHITE);
}

void bigTree()
{
    setcolor(4);
    setfillstyle(SOLID_FILL,4);
    rectangle(46,330, 64,420);
    floodfill(47,331,4);
    setcolor(4);
    setfillstyle(SOLID_FILL,4);
    rectangle(52,307, 59,330);
    floodfill(53,308,4);
    setfillstyle(SOLID_FILL,4);
    bar(39,405,70,411);
    bar(41,400,69,406);
    bar(42,395,68,401);
    bar(43,390,67,396);
    bar(44,383,66,390);
    bar(45,378,65,383);
    bar(37,410,72,420);
    bar(35,417,74,423);
    bar(37,307,45,312);
    bar(38,312,46,316);
    bar(39,316,48,319);
    bar(40,319,48,321);
    bar(41,321,49,326);
    bar(42,326,49,331);
    bar(43,331,68,335);
    bar(44,335,67,339);
    bar(45,339,66,344);
    bar(67,307,74,312);
    bar(66,312,73,316);
    bar(65,316,72,320);
    bar(64,320,71,324);
    bar(63,324,70,328);
    bar(62,328,69,332);
    // leaf no 1
    setcolor(GREEN);
    circle(25, 320, 15);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(25,320, GREEN);
    //leaf no 2
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(20, 299, 20);
    floodfill(20,299, GREEN);
    //leaf no 3
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(28, 271, 20);
    floodfill(28,271, GREEN);
    //leaf no 4
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(41, 247, 18);
    floodfill(41,247, GREEN);
    //leaf no 8
    setcolor(GREEN);
    circle(88, 320, 15);  //pata number 1
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(88,320, GREEN);
    //leaf no 7
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(97,305,16);
    floodfill(97,305, GREEN);
    //leaf no 6
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(100, 280, 22);
    floodfill(100,280, GREEN);
    //leaf no 5
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(95, 252, 17);
    floodfill(95,253, GREEN);
    //leaf no 4
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(70, 241, 19);
    floodfill(70,241, GREEN);
    //leaf middle
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(60, 270, 35);
    bar(20,310,90,290);
    floodfill(60,270, GREEN);
}

void house_1()
{
    //triangle-tin
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,8);
    line(88+q,400-p,163+q,400-p);
    line(100+q,370-p,88+q,400-p);
    line(100+q,370-p,112+q,400-p);
    line(100+q,370-p,150+q,370-p);
    line(150+q,370-p,163+q,400-p);
    floodfill(100+q,375-p,WHITE);
    //main-tin
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    line(88+q,400-p,163+q,400-p);
    line(100+q,370-p,112+q,400-p);
    line(100+q,370-p,150+q,370-p);
    line(150+q,370-p,163+q,400-p);
    floodfill(105+q,375-p,WHITE);
    //Side-wall
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    line(112+q,400-p,112+q,440-p);
    line(88+q,440-p,112+q,440-p);
    line(88+q,400-p,88+q,440-p);
    line(112+q,440-p,163+q,440-p);
    floodfill(90+q,402-p,WHITE);
    //main-wall
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,9);
    line(163+q,400-p,163+q,440-p);
    line(112+q,440-p,163+q,440-p);
    line(112+q,400-p,112+q,440-p);
    line(88+q,400-p,163+q,400-p);
    floodfill(115+q,405-p,WHITE);
    //window 1
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);
    line(120+q,415-p,130+q,415-p);
    line(120+q,415-p,120+q,427-p);
    line(120+q,427-p,130+q,427-p);
    line(130+q,415-p,130+q,427-p);
    floodfill(125+q,420-p,WHITE);
    //window 2
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);
    line(120+w+q,415-p,130+w+q,415-p);
    line(120+w+q,415-p,120+w+q,427-p);
    line(120+w+q,427-p,130+w+q,427-p);
    line(130+w+q,415-p,130+w+q,427-p);
    floodfill(125+w+q,421-p,WHITE);
    //door
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,8);
    line(94+q,440-p,94+q,420-p);
    line(106+q,440-p,106+q,420-p);
    line(94+q,420-p,106+q,420-p);
    floodfill(97+q,435-p,WHITE);
}

void house_2()
{
    //triangle-tin
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    line(88+a,400+b,163+a,400+b);
    line(100+a,370+b,88+a,400+b);
    line(100+a,370+b,112+a,400+b);
    line(100+a,370+b,150+a,370+b);
    line(150+a,370+b,163+a,400+b);
    floodfill(100+a,375+b,WHITE);
    //main-tin
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,8);
    line(88+a,400+b,163+a,400+b);
    line(100+a,370+b,112+a,400+b);
    line(100+a,370+b,150+a,370+b);
    line(150+a,370+b,163+a,400+b);
    floodfill(105+a,375+b,WHITE);
    //side-Wall
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTMAGENTA);
    line(112+a,400+b,112+a,440+b);
    line(88+a,440+b,112+a,440+b);
    line(88+a,400+b,88+a,440+b);
    line(112+a,440+b,163+a,440+b);
    floodfill(90+a,402+b,WHITE);
    //main-wall
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,3);
    line(163+a,400+b,163+a,440+b);
    line(112+a,440+b,163+a,440+b);
    line(112+a,400+b,112+a,440+b);
    line(88+a,400+b,163+a,400+b);
    floodfill(115+a,405+b,WHITE);
    //window 1
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    line(120+a,415+b,130+a,415+b);
    line(120+a,415+b,120+a,427+b);
    line(120+a,427+b,130+a,427+b);
    line(130+a,415+b,130+a,427+b);
    floodfill(125+a,421+b,WHITE);
    //window 2
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    line(120+w+a,415+b,130+w+a,415+b);
    line(120+w+a,415+b,120+w+a,427+b);
    line(120+w+a,427+b,130+w+a,427+b);
    line(130+w+a,415+b,130+w+a,427+b);
    floodfill(125+w+a,421+b,WHITE);
    //door
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);
    line(94+a,440+b,94+a,420+b);
    line(106+a,440+b,106+a,420+b);
    line(94+a,420+b,106+a,420+b);
    floodfill(97+a,435+b,WHITE);
}

void house_3()
{
    //triangle-tin
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,YELLOW);
    line(88+x,400+y,163+x,400+y);
    line(100+x,370+y,88+x,400+y);
    line(100+x,370+y,112+x,400+y);
    line(100+x,370+y,150+x,370+y);
    line(150+x,370+y,163+x,400+y);
    floodfill(100+x,375+y,WHITE);
    //main-tin
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    line(88+x,400+y,163+x,400+y);
    line(100+x,370+y,112+x,400+y);
    line(100+x,370+y,150+x,370+y);
    line(150+x,370+y,163+x,400+y);
    floodfill(105+x,375+y,WHITE);
    //Side-wall
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);
    line(112+x,400+y,112+x,440+y);
    line(88+x,440+y,112+x,440+y);
    line(88+x,400+y,88+x,440+y);
    line(112+x,440+y,163+x,440+y);
    floodfill(90+x,402+y,WHITE);
    //main-wall
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    line(163+x,400+y,163+x,440+y);
    line(112+x,440+y,163+x,440+y);
    line(112+x,400+y,112+x,440+y);
    line(88+x,400+y,163+x,400+y);
    floodfill(115+x,405+y,WHITE);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(120+x,415+y,130+x,415+y);
    line(120+x,415+y,120+x,427+y);
    line(120+x,427+y,130+x,427+y);
    line(130+x,415+y,130+x,427+y);
    floodfill(125+x,421+y,WHITE);
    //window 2
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(120+w+x,415+y,130+w+x,415+y);
    line(120+w+x,415+y,120+w+x,427+y);
    line(120+w+x,427+y,130+w+x,427+y);
    line(130+w+x,415+y,130+w+x,427+y);
    floodfill(125+w+x,421+y,WHITE);
    //door
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTMAGENTA);
    line(94+x,440+y,94+x,420+y);
    line(106+x,440+y,106+x,420+y);
    line(94+x,420+y,106+x,420+y);
    floodfill(97+x,435+y,WHITE);
}

void river()
{
    setcolor(WHITE);
    {
        line(550,150,505,170);
        line(505,170,525,170);
        line(525,170,485,190);
        line(485,190,510,190);
        line(510,190,460,220);
        line(460,220,500,220);
        line(500,220,440,250);
        line(440,250,490,250);
        line(490,250,410,290);
        line(410,290,480,292);
        line(480,292,400,335);
        line(400,335,470,340);
        line(470,340,390,380);
        line(390,380,480,384);
        line(480,384,400,430);
        line(400,430,470,435);
        line(470,435,390,477);
    }

    setfillstyle(9,BLUE);
    {
        bar(550,151,670,480);
        bar(500,200,650,480);
        bar(512,167,550,170); // 1
        bar(517,164,550,167);
        bar(527,160,550,164);
        bar(537,156,550,160);
        bar(543,152,550,156);
        bar(525,170,550,174);
        bar(517,174,550,178); // 2
        bar(511,177,550,183);
        bar(501,183,550,186);
        bar(494,186,550,190);
        bar(511,190,550,194);
        bar(502,194,550,196);
        bar(500,200,550,195); // 3
        bar(493,204,550,199);
        bar(487,203,550,208);
        bar(481,212,550,207);
        bar(473,211,550,217);
        bar(468,220,550,216);
        bar(499,219,550,224); // 4
        bar(493,227,550,224);
        bar(485,227,550,232);
        bar(478,235,550,231);
        bar(470,235,550,239);
        bar(463,243,550,238);
        bar(454,242,550,246);
        bar(450,245,550,250);
        bar(490,254,550,249); // 5
        bar(483,253,550,258);
        bar(476,261,550,257);
        bar(468,260,550,265);
        bar(460,269,550,264);
        bar(450,269,550,274);
        bar(442,278,550,273);
        bar(433,278,550,282);
        bar(425,286,550,281);
        bar(417,286,550,290);
        bar(480,294,550,289);  // 6
        bar(476,293,550,298);
        bar(468,302,550,297);
        bar(462,301,550,306);
        bar(455,310,550,305);
        bar(449,309,550,314);
        bar(440,318,550,313);
        bar(433,317,550,322);
        bar(425,326,550,321);
        bar(418,325,550,330);
        bar(409,329,550,334);
        bar(407,336,550,333);
        bar(445,335,550,339);
        bar(470,338,550,343); // 7
        bar(464,347,550,342);
        bar(457,346,550,351);
        bar(448,356,550,350);
        bar(439,355,550,360);
        bar(427,366,550,359);
        bar(418,365,550,371);
        bar(408,375,550,370);
        bar(399,374,550,380);
        bar(448,382,550,379);
        bar(474,386,550,381);  // 8
        bar(479,385,550,389);
        bar(473,388,550,392);
        bar(467,396,550,391);
        bar(461,395,550,401);
        bar(455,405,550,398);
        bar(445,404,550,410);
        bar(436,415,550,408);
        bar(426,414,550,420);
        bar(416,425,550,419);
        bar(406,424,550,431);
        bar(436,433,550,430);
        bar(469,432,550,437);
        bar(466,440,550,436); // 9
        bar(462,439,550,445);
        bar(452,450,550,443);
        bar(442,454,550,448);
        bar(434,453,550,457);
        bar(428,461,550,456);
        bar(420,460,550,466);
        bar(413,469,550,464);
        bar(406,467,550,473);
        bar(397,477,550,472);
        bar(392,475,550,480);
    }
}

void boat()
{
    setcolor(4);
    setfillstyle(SOLID_FILL, 4);
    sector(557, 290, 180, 360, 57, 13);
    setcolor(BROWN);
    arc(570, 271, 160, -160, 45);
    arc(625, 271, 160, -160, 45);
    arc(543, 272, 340, 382, 45);
    setfillstyle(SOLID_FILL, BROWN);
    bar(526,271,580,260);
    bar(528,254,582,261);
    bar(527,280,582,270);
    bar(528,289,582,279);
    setfillstyle(8, BROWN);
    bar(533,268,570,280);
    setfillstyle(1, RED);
    bar(537,223,571,227);
    bar(553,224,558,215);
}

void boatman()
{
    setcolor(4);
    setfillstyle(SOLID_FILL, 4);
    sector(490, 426, 180, 360, 50, 10);
    setcolor(DARKGRAY);
    setlinestyle(SOLID_LINE, 1, 3);
    //leg and body
    line(x1 + 40, y1 - 15, x1 + 40, y1 - 40);
    line(x1 + 40, y1 - 15, x1 + 45, y1 - 10);
    line(x1 + 45, y1 - 10, x1 + 45, y1);
    line(x1 + 40, y1 - 15, x1 + 37, y1);
    //head
    circle(x1 + 40, y1 - 45, 5);
    line(x1 + 40, y1 - 35, x1 + 50, y1 - 30);
    line(x1 + 40, y1 - 35, x1 + 35, y1 - 32);
    line(x1 + 35, y1 - 30, x1 + 47, y1 - 23);
    setcolor(BROWN);
    line(x1 + 60, y1 - 45, x1 + 27, y1 + 23);
    setcolor(LIGHTRED);
    for(K=1; K<=29; K++)
    {
        arc(493+K, 244, 340, 382, 50);
    }
    setfillstyle(9, LIGHTRED);
    bar(552,245,563,237);
}

void road()
{
    setfillstyle(9,8);
    bar(0,423,390,480);
    bar(406,427,300,422);
    bar(401,425,300,430);
    bar(400,433,300,429);
    bar(455,434,300,432);
    bar(460,435,300,433);
    bar(465,434,300,437);
    bar(462,440,300,436);
    bar(458,439,300,445);
    bar(448,450,300,443);
    bar(438,454,300,448);
    bar(430,453,300,457);
    bar(424,461,300,456);
    bar(416,460,300,466);
    bar(405,469,300,464);
    bar(402,467,300,473);
    bar(393,477,300,472);
    bar(388,475,300,480);
    //small - road
    setfillstyle(1,BROWN);
    bar(0,210,160,220);
    bar(205,222,480,232);
    line(160,211,205,222);
    line(160,214,205,225);
    line(160,217,205,228);
    line(160,219,205,230);
}

void cowsfood()
{
    setfillstyle(1,BROWN);
    {
        arc(375,329,0,180,21);
        bar(353,329,396,366);
        bar(356,329,366,317);
        bar(360,313,370,318);
        bar(364,310,384,336);
        bar(389,313,383,336);
        bar(394,317,374,336);
    }
    setfillstyle(1,4);
    bar(373,308,377,297);
}

void tree(int t,int q)
{
    int r=15;
    setfillstyle(1,4);
    rectangle(150+t,390+q,170+t,340+q);
    floodfill(151+t,342+q,2);

    setfillstyle(1,GREEN);
    fillellipse(142+t,347+q,r,r);
    fillellipse(160+t,330+q,r,r);
    fillellipse(175+t,345+q,r,r);
}

void tractor()
{
    setfillstyle(SOLID_FILL, 5);
    bar(105+m,n+150,145+m,n+200);
    setfillstyle(SOLID_FILL, 5);
    bar(84+m,n+176,105+m,n+200);
    setfillstyle(SOLID_FILL, 3);
    bar(115+m,n+210,135+m,n+190);
    bar(90+m,n+205,100+m,n+195);
    setcolor(WHITE);
    {
        line(105+m,150+n,105+m,200+n);
        line(142+m,150+n,142+m,200+n);
    }
    //shed
    setcolor(LIGHTCYAN);
    {
        line(146+m,150+n,100+m,150+n);
        line(146+m,145+n,100+m,145+n);
        line(146+m,145+n,146+m,150+n);
        line(100+m,145+n,100+m,150+n);
    }
    //window
    setcolor(WHITE);
    setfillstyle(5,LIGHTCYAN);
    line(112+m,157+n,135+m,157+n);
    line(112+m,175+n,135+m,175+n);
    line(112+m,157+n,112+m,175+n);
    line(135+m,157+n,135+m,175+n);
    floodfill(113+m,158+n,WHITE);
    bar(112+m,157+n,135+m,175+n);
    //big chaka
    setcolor(LIGHTGREEN);
    {
        circle(124+m,200+n,13);
        circle(124+m,200+n,10);
        circle(124+m,200+n,3);
    }
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,YELLOW);
    line(104+m,200+n,110+m,200+n);
    line(136+m,200+n,142+m,200+n);
    floodfill(105+m,201+n,WHITE);
    //front
    line(85+m,178+n,104+m,178+n);
    line(85+m,178+n,80+m,200+n);
    line(85+m,200+n,80+m,200+n);
    setcolor(LIGHTGREEN);
    {
        circle(93+m,200+n,7);
        circle(93+m,200+n,5);
    }
    line(100+m,200+n,112+m,200+n);
    //stream
    setcolor(WHITE);
    line(87+m,178+n,87+m,168+n);
    line(90+m,178+n,90+m,168+n);
    line(90+m,168+n,87+m,168+n);
    line(87+m,168+n,84+m,161+n);
    line(90+m,168+n,93+m,161+n);
    line(85+m,161+n,93+m,161+n);
    line(83+m,161+n,85+m,158+n);
    line(93+m,161+n,91+m,158+n);
    line(85+m,158+n,91+m,158+n);
    arc(98+m,173+n,0,180,2);
    line(96+m,178+n,96+m,172+n);
    line(99+m,178+n,99+m,173+n);
    line(96+m,173+n,99+m,173+n);
}

void car()
{
    setfillstyle(SOLID_FILL, LIGHTCYAN);
    bar(32+i,j-16,86+i,j);
    bar(40+i,j-10,90+i,j);
    setcolor(LIGHTBLUE);
    setfillstyle(SOLID_FILL, BLUE);
    //body
    line(i,j + 23, i, j);
    line(i, j, 40 + i, j - 20);
    line(40 + i,j - 20, 80 + i, j- 20);
    line(80 + i, j - 20, 100 + i, j);
    line(100 + i, j, 120 + i, j);
    line(120 + i, j, 120 + i, j + 23);
    line(0 + i, j + 23, 18 + i, j + 23);
    arc(30 + i, j+ 23, 0, 180, 12);
    line(42 + i, j + 23, 78 + i, j + 23);
    arc(90 + i, j+ 23, 0, 180, 12);
    line(102 + i, j + 23, 120 + i, j + 23);
    line(28 + i, j, 43 + i, j- 15);
    line(43 + i, j - 15, 57 + i, j - 15);
    line(57 + i, j - 15, 57 + i, j);
    line(57 + i, j, 28 + i, j);
    line(62 + i, j - 15, 77 + i, j - 15);
    line(77 + i, j - 15, 92 + i, j);
    line(92 + i, j, 62 + i, j);
    line(62 + i, j, 62 + i, j - 15);
    floodfill(2 + i, j + 20, LIGHTBLUE);
    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL, 3);
    //Wheels
    circle(30 + i,j + 25, 9);
    circle(90 + i, j + 25, 9);
    floodfill(30 + i, j + 25, LIGHTGREEN);
    floodfill(90 + i, j + 25, LIGHTGREEN);
}

void PlumTree()
{
    setcolor(LIGHTGREEN);
    //1st leaf
    line(295/2+W,140/2+Z,240/2+W,130/2+Z);
    line(240/2+W,130/2+Z,180/2+W,160/2+Z);
    line(180/2+W,160/2+Z,210/2+W,155/2+Z);
    line(210/2+W,155/2+Z,205/2+W,160/2+Z);
    line(205/2+W,160/2+Z,235/2+W,150/2+Z);
    line(235/2+W,150/2+Z,225/2+W,158/2+Z);
    line(225/2+W,158/2+Z,275/2+W,145/2+Z);
    //2nd leaf
    line(325/2+W,145/2+Z,385/2+W,130/2+Z);
    line(385/2+W,130/2+Z,420/2+W,160/2+Z);
    line(420/2+W,160/2+Z,395/2+W,155/2+Z);
    line(395/2+W,155/2+Z,400/2+W,160/2+Z);
    line(400/2+W,160/2+Z,365/2+W,150/2+Z);
    line(365/2+W,150/2+Z,370/2+W,155/2+Z);
    line(370/2+W,155/2+Z,330/2+W,150/2+Z);
    //3rd leaf
    line(296/2+W,130/2+Z,220/2+W,110/2+Z);
    line(220/2+W,110/2+Z,200/2+W,140/2+Z);
    line(200/2+W,140/2+Z,215/2+W,135/2+Z);
    line(325/2+W,135/2+Z,390/2+W,100/2+Z);
    line(390/2+W,100/2+Z,410/2+W,130/2+Z);
    line(410/2+W,130/2+Z,400/2+W,125/2+Z);
    line(390/2+W,115/2+Z,410/2+W,142/2+Z);
    line(410/2+W,142/2+Z,400/2+W,140/2+Z);
    // 4th leaf
    line(300/2+W,120/2+Z,390/2+W,80/2+Z);
    line(390/2+W,80/2+Z,400/2+W,110/2+Z);
    line(310/2+W,110/2+Z,260/2+W,80/2+Z);
    line(260/2+W,80/2+Z,230/2+W,110/2+Z);
    line(285/2+W,150/2+Z,276/2+W,145/2+Z);
    line(285/2+W,150/2+Z,293/2+W,145/2+Z);
    setcolor(GREEN);
    {
        circle(285/2+W,160/2+Z,10/2);
        circle(285/2+W,160/2+Z,2);
        circle(280/2+W,157/2+Z,10/2);
        circle(280/2+W,157/2+Z,2);
        circle(275/2+W,157/2+Z,10/2);
        circle(275/2+W,157/2+Z,2);
        circle(330/2+W,159/2+Z,10/2);
        circle(330/2+W,159/2+Z,2);
        circle(330/2+W,164/2+Z,10/2);
        circle(330/2+W,164/2+Z,2);
        circle(335/2+W,160/2+Z,10/2);
        circle(335/2+W,160/2+Z,2);
    }
    setfillstyle(9,BROWN);
    bar(150+W,75+Z,160+W,200+Z);
    //kando
    setcolor(RED);
    {
        line(300/2+W,150/2+Z,300/2+W,400/2+Z);
        line(320/2+W,150/2+Z,320/2+W,400/2+Z);
        line(300/2+W,180/2+Z,320/2+W,180/2+Z);
        line(300/2+W,160/2+Z,320/2+W,160/2+Z);
        line(300/2+W,200/2+Z,320/2+W,200/2+Z);
        line(300/2+W,220/2+Z,320/2+W,220/2+Z);
        line(300/2+W,240/2+Z,320/2+W,240/2+Z);
        line(300/2+W,260/2+Z,320/2+W,260/2+Z);
        line(300/2+W,280/2+Z,320/2+W,280/2+Z);
        line(300/2+W,300/2+Z,320/2+W,300/2+Z);
        line(300/2+W,320/2+Z,320/2+W,320/2+Z);
        line(300/2+W,340/2+Z,320/2+W,340/2+Z);
        line(300/2+W,360/2+Z,320/2+W,360/2+Z);
        line(300/2+W,380/2+Z,320/2+W,380/2+Z);
        line(300/2+W,400/2+Z,320/2+W,400/2+Z);
    }
}

void school()
{
    //terrace
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,8);
    line(480+k,104+l,490+k,85+l);
    line(490+k,85+l,595+k,85+l);
    line(585+k,104+l,595+k,85+l);
    line(480+k,104+l,585+k,104+l);
    floodfill(592+k,87+l,WHITE);
    //side Wall
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,8);
    line(585+k,106+l,595+k,86+l);
    line(585+k,145+l,595+k,126+l);
    line(586+k,106+l,586+k,145+l);
    line(595+k,127+l,595+k,86+l);
    floodfill(589+k,128+l,WHITE);
    //wall
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,3);
    rectangle(480+k,105+l,585+k,145+l);
    floodfill(482+k,107+l,WHITE);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,3);
    line(560+k,105+l,560+k,145+l);
    floodfill(562+k,107+l,WHITE);
    //door 1
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,5);
    rectangle(526+k+40,125+l,538+40+k,145+l);
    floodfill(530+k+40,130+l,WHITE);
    circle(536+k+40,138+l,1);
    //door 2
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,5);
    rectangle(526+k,125+l,538+k,145+l);
    floodfill(530+k,130+l,WHITE);
    circle(536+k,138+l,1);
    //window 2
    setcolor(WHITE);
    setfillstyle(1,LIGHTBLUE);
    rectangle(543+k,118+l,556+k,131+l);
    floodfill(545+k,122+l,WHITE);
    //door 2
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,5);
    rectangle(526-35+k,125+l,538-35+k,145+l);
    floodfill(530-35+k,130+l,WHITE);
    circle(536-35+k,138+l,1);
    //window 2
    setcolor(WHITE);
    setfillstyle(1,LIGHTBLUE);
    rectangle(543-35+k,118+l,556-35+k,131+l);
    floodfill(545-35+k,122+l,WHITE);
    setcolor(5);
    outtextxy(509+k,88+l,"School");
}

void truck()
{
    //truck
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    bar(87+i1,m1-6,116+i1,m1-30);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    line(0 + i1, m1, 80 + i1, m1);
    line(80 + i1, m1, 80 + i1, m1 + 30);
    line(80 + i1, m1 + 30, 47 + i1, m1 + 30);
    line(0 + i1, m1 + 30, 23 + i1, m1 + 30);
    line(0 + i1, m1 + 30, 0 + i1, m1);
    arc(35 + i1, m1+ 30, 0, 180, 12);
    floodfill(5 + i1, m1+ 5, LIGHTGRAY);
    //body
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    line(81 + i1, m1 + 30, 81 + i1, m1 - 40);
    line(82 + i1, m1 - 40, 111 + i1, m1 - 40);
    line(111 + i1, m1 - 40, 126 + i1, m1 - 10);
    line(126 + i1, m1 - 10, 126 + i1, m1 + 30);
    line(126 + i1, m1 + 30, 117 + i1, m1 + 30);
    line(93 + i1, m1 + 30, 81 + i1, m1 + 30);
    arc(105 + i1, m1 + 30, 0, 180, 12);
    //window
    line(87 + i1, m1 - 5, 118 + i1, m1 - 5);
    line(87 + i1, m1 - 5, 87 + i1, m1- 30);
    line(87 + i1, m1 - 30, 106 + i1, m1 - 30);
    line(106 + i1, m1 - 30, 118 + i1, m1 - 5);
    floodfill(85 + i1, m1 + 25, YELLOW);
    setcolor(LIGHTGREEN);
    setfillstyle(SLASH_FILL, DARKGRAY);
    //tires
    circle(35 + i1, m1 + 30, 8);
    circle(105 + i1, m1 + 30, 8);
    floodfill(35 + i1, m1 + 30, LIGHTGREEN);
    floodfill(105 + i1, m1 + 30, LIGHTGREEN);
}

void boy()
{
    for(g=0; g<=80; g+=18)
    {
        circle(440+g+f, 300+h, 6);
        line(439+g+f, 299+h, 440+g+f, 300+h);
        line(436+g+f, 302+h, 438+g+f, 302+h);
        line(438+g+f, 308+h, 438+g+f, 305+h);
        line(441+g+f, 305+h, 441+g+f, 308+h);
        line(442+g+f, 335+h, 442+g+f, 325+h);
        line(442+g+f, 333+h, 440+g+f, 333+h);
        line(437+g+f, 335+h, 442+g+f, 335+h);
        line(437+g+f, 335+h, 440+g+f, 333+h);
        line(440+g+f, 333+h, 435+g+f, 325+h);
        line(438+g+f, 310+h, 435+g+f, 317+h);
        line(440+g+f, 310+h, 436+g+f, 317+h);
        line(435+g+f, 317+h, 432+g+f, 310+h);
        line(436+g+f, 317+h, 432+g+f, 310+h);
        line(432+g+f, 310+h, 439+g+f, 298+h);
        line(432+g+f, 312+h, 439+g+f, 300+h);
        rectangle(435+g+f, 308+h, 442+g+f, 325+h);
    }
}

void flag()
{
    setcolor(WHITE);
    rectangle(150+s,140+v,180+s,160+v);
    setfillstyle(1,GREEN);
    floodfill(153+s,144+v,WHITE);
    setcolor(WHITE);
    rectangle(148+s,138+v,150+s,200+v);
    setfillstyle(1,BLUE);
    floodfill(150+s,140+v,WHITE);
    setcolor(WHITE);
    circle(166+s,150+v,5);
    setfillstyle(1,RED);
    floodfill(168+s,152+v,WHITE);
}

void teaStall()
{
    setcolor(WHITE);
    line(130,381,130,385);
    setcolor(DARKGRAY);
    line(100,353,150,353);
    line(80,364,170,364);
    line(80,364,100,353);
    line(170,364,150,353);
    setfillstyle(1,DARKGRAY);
    bar(95,354,155,359);
    bar(90,364,160,358);
    bar(81,365,169,361);
    setfillstyle(1,3);
    bar(90,396,93,364);
    bar(160,396,163,364);
    bar(80,413,170,394);
    setfillstyle(8,LIGHTMAGENTA);
    bar(93,385,160,394);
    setcolor(LIGHTGREEN);
    circle(100,413,10);
    circle(100,413,3);
    circle(150,413,10);
    circle(150,413,3);
}

void flower()
{
    for(O=0; O<=92; O+=22)
    {
        setcolor(YELLOW);
        setfillstyle(1,YELLOW);
        circle(134+O+X,165,5);
        floodfill(136+O+X,167,YELLOW);
        setcolor(YELLOW);
        setfillstyle(1,YELLOW);
        circle(140+O+X,170,5);
        floodfill(142+O+X,172,YELLOW);
        setcolor(YELLOW);
        setfillstyle(1,YELLOW);
        circle(143+O+X,163,5);
        floodfill(145+O+X,165,YELLOW);
        setcolor(RED);
        setfillstyle(1,RED);
        circle(139+O+X,166,3);
        floodfill(140+O+X,166,RED);
        setfillstyle(1,LIGHTGREEN);
        bar(139+O+X,174,141+O+X,190);
    }
    X=-1;
    for(O=0; O<=80; O+=22)
    {
        setcolor(YELLOW);
        setfillstyle(1,YELLOW);
        circle(134+O+X,165+Y,5);
        floodfill(136+O+X,167+Y,YELLOW);
        setcolor(YELLOW);
        setfillstyle(1,YELLOW);
        circle(140+O+X,170+Y,5);
        floodfill(142+O+X,172+Y,YELLOW);
        setcolor(YELLOW);
        setfillstyle(1,YELLOW);
        circle(143+O+X,163+Y,5);
        floodfill(145+O+X,165+Y,YELLOW);
        setcolor(RED);
        setfillstyle(1,RED);
        circle(139+O+X,166+Y,3);
        floodfill(140+O+X,166+Y,RED);
        setfillstyle(1,LIGHTGREEN);
        bar(139+O+X,174+Y,141+O+X,190+Y);
    }
}

void man()
{
    setcolor(WHITE);
    circle(20,380,8);
    circle(17,379,2);
    circle(22,379,2);
    line(21,383,18,383);
    line(20,387,20,404);
    line(13,420,20,404);
    line(27,420,20,404);
    line(13,402,20,392);
    line(27,402,20,392);
    setcolor(WHITE);
    circle(130,375,6);
    circle(128,374,1);
    circle(132,374,1);
    line(129,378,131,378);
    setfillstyle(5,BROWN);
    bar(183,400,227,387);
    setfillstyle(1,BROWN);
    bar(188,400,190,406);
    bar(183,402,185,395);
    bar(227,400,225,406);
}
