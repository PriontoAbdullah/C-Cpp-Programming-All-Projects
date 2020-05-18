
  #include <graphics.h>
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

void sky()
{
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(50,50,WHITE);
}
void sun()
{
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,YELLOW);
    arc(524,112,0,173,30);
    floodfill(520,105,WHITE);
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
  int main() {
        /* request auto detection */
        int gdriver = DETECT, gmode, err;
        int i, j, x, y, top[2], bot[2];

        /* initialize graphic mode */
        initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
clouds();
        mountain();
        sun();
        sky();

         getch();
    closegraph();

  }
