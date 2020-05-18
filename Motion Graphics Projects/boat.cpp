 #include <graphics.h>


  int main() {
        int gdriver = DETECT, gmode, err;
        int i = 0, j, x=100, y=100, x1, y1, x2, y2;

        initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");

                /* drawing the boat */
                setlinestyle(SOLID_LINE, 1, 2);
                setcolor(BROWN);
                setfillstyle(SOLID_FILL, BROWN);
                sector(x, y, 180, 360, 50, 10);

                setcolor(DARKGRAY);
                setlinestyle(SOLID_LINE, 1, 3);

                /* leg and body of stick man */
                line(x + 40, y - 15, x + 40, y - 40);
                line(x + 40, y - 15, x + 45, y - 10);
                line(x + 45, y - 10, x + 45, y);
                line(x + 40, y - 15, x + 37, y);

                /* head and hand of stick man */
                circle(x + 40, y - 45, 5);
                line(x + 40, y - 35, x + 50, y - 30);
                line(x + 40, y - 35, x + 35, y - 32);
                line(x + 35, y - 32, x + 45, y - 25);
                line(x + 60, y - 45, x + 27, y + 10);

  }
