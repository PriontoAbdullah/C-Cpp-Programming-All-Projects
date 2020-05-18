#include <stdio.h>
  #include <conio.h>
  #include <graphics.h>
  #include <dos.h>

  int main() {
        int gdriver = DETECT, gmode, err;
        int i = 0, j, x, y, x1, y1, x2, y2;

        initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
        err = graphresult();

        if (err != grOk) {
                printf("Graphics Error: %s\n",
                                grapherrormsg(err));
                return 0;
        }

        j = 0;

        /* initialize position for boat */
        x = 50, y = getmaxy() / 2 + 140;

        while (x + 60 < getmaxx() && (!kbhit())) {
                /* setting positions for rain */
                x1 = 10, i = y1 = 0;
                x2 = 0, y2 = 50;

                /* clears graphic screen */
                cleardevice();

                /* setting the color of the river/sea */
                setcolor(LIGHTBLUE);
                setlinestyle(SOLID_LINE, 1, 1);
                setfillstyle(SOLID_FILL, LIGHTBLUE);

                /* draw the river/sea */
                rectangle(0, getmaxy() / 2 + 150, getmaxx(), getmaxy());
                floodfill(getmaxx() - 10, getmaxy() - 10, LIGHTBLUE);

                /* rain drops */
                setlinestyle(DASHED_LINE, 1, 2);
                while (i< 700 ) {
                        line(x1, y1, x2, y2);
                        x1 = x1 + 20;
                        y2 = y2 + 50;
                        i++;
                }

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

                /* moving the position of boat and stick man */
                x++;

                setcolor(LIGHTBLUE);
                delay(250);

                /* clears the graphic device */
                cleardevice();

                /* drawing sea/river */
                setlinestyle(SOLID_LINE, 1, 1);
                setfillstyle(SOLID_FILL, LIGHTBLUE);
                rectangle(0, getmaxy() / 2 + 150, getmaxx(), getmaxy());
                floodfill(getmaxx() - 10, getmaxy() - 10, LIGHTBLUE);

                /* rain drops */
                setlinestyle(DASHED_LINE, 1, 2);
                x1 = 10, i = y1 = 0;
                x2 = 0, y2 = 70;

                while (i < 700) {
                        line(x1, y1, x2, y2);
                        x1 = x1 + 30;
                        y2 = y2 + 60;
                        i++;
                }

                /* drawing boat */
                setlinestyle(SOLID_LINE, 1, 1);
                setcolor(BROWN);
                setfillstyle(SOLID_FILL, BROWN);
                sector(x, y, 180, 360, 50, 10);

                /* body and leg of stic man */
                setcolor(DARKGRAY);
                setlinestyle(SOLID_LINE, 1, 3);
                line(x + 40, y - 15, x + 40, y - 40);
                line(x + 40, y - 15, x + 45, y - 10);
                line(x + 45, y - 10, x + 45, y);
                line(x + 40, y - 15, x + 37, y);


                /* head, hands of stick man */
                circle(x + 40, y - 45, 5);
                line(x + 40, y - 35, x + 52, y - 30);
                line(x + 40, y - 35, x + 37, y - 32);
                line(x + 37, y - 32, x + 49, y - 25);
                line(x + 60, y - 45, x + 27, y + 10);

                /* forwarding the position of the boat */
                x++;

                /* sleep for 250 milliseconds */
                delay(250);

                /* clears the graphic device */
                cleardevice();
                j++;
        }

        getch();

        /* deallocate memory allocated for graphic screen */
        closegraph();
        return 0;
  }
