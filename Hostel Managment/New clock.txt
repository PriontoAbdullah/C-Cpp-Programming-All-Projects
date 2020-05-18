#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <graphics.h>
#include <dos.h>

long current_time;
char timeStr[256];
/*
 * calculates the position for minute and second needle.
 * 360 to 90 degree is equivalent to 45 to 0 th minute
 * in clock.  So, store the points in reverse direction(45 to 0)
 * Once 0 is reached, we need to store points corresponds to
 * 84th degree to 0 degree in reverse direction(59 to 46). So,
 * totally we will get 60 points which corresponds to 60
 * minute or second position in clock.
 */
void minSecCalc(int xrad, int midx, int midy, int x[60], int y[60])
{
    int i, j = 45;
    for (i = 360; i >= 0; i = i - 6)
    {
        x[j] = midx - (xrad * cos((i * 3.14) / 180));
        y[j--] = midy - (xrad * sin((i * 3.14) / 180));
        j = (j == -1) ? 59:j;
    }
    return;

}

/*
 * find the points at 0, 30, 60,.., 360 degrees
 * on the given circle.  x value correponds to
 * radius * cos(angle) and y value corresponds
 * to radius * sin(angle).  Numbers in the clock
 * are written using the above manipulated x and
 * y values.  And the hour needle movement
 * is based on this
 */

void calcPoints(int radius, int midx, int midy, int x[12], int y[12])
{
    int x1, y1;
    /* 90, 270, 0, 180 degrees */
    x[0] = midx, y[0] = midy - radius;
    x[6] = midx, y[6] = midy + radius;
    x[3] = midx + radius, y[3] = midy;
    x[9] = midx - radius, y[9] = midy;

    /* 30, 150, 210, 330 degrees */
    x1 = (int) ((radius / 2) * sqrt(3));
    y1 = (radius / 2);
    x[2] = midx + x1, y[2] = midy - y1;
    x[4] = midx + x1, y[4] = midy + y1;
    x[8] = midx - x1, y[8] = midy + y1;
    x[10] = midx - x1, y[10] = midy - y1;

    /* 60, 120, 210, 300 degrees */
    x1 = radius / 2;
    y1 = (int) ((radius / 2)  * sqrt(3));
    x[1] = midx + x1, y[1] = midy - y1;
    x[5] = midx + x1, y[5] = midy + y1;
    x[7] = midx - x1, y[7] = midy + y1;
    x[11] = midx - x1, y[11] = midy - y1;
    return;
}

void digital_clock()
{
    /* Get Current epoch time in seconds */
    current_time = time(NULL);
    /* store the date and time in string */
    strcpy(timeStr, ctime(&current_time));
    setcolor(LIGHTCYAN);
    settextjustify(1, 1);
    settextstyle(10, 0, 3);

    moveto(310, 420);
    /* print current time */
    outtext(timeStr);
    /* Add delay of 1000 milliseconds(1 second) */
    //delay(1000);
}

int main()
{
    /* request auto detection */
    int gdriver = DETECT, gmode, err, tmp;
    int i, j, midx, midy, radius, hr, min, sec;
    int x[12], y[12], minx[60], miny[60];
    int hrx[12], hry[12], secx[60], secy[60];
    int secx1, secy1;
    char str[256];
    time_t t1;
    struct tm *data;

    /* initialize graphic mode */
    initgraph(&gdriver, &gmode, "C:/TC/BGI");
    err = graphresult();

    if (err != grOk)
    {
        /* error occurred */
        printf("Graphics Error: %s",
               grapherrormsg(err));
        return 0;
    }

    /* mid position in x and y -axis */
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;

    radius = 140;

    /* position to locate numbers in clock */
    calcPoints(radius - 30, midx, midy, x, y);

    /* gets position for hour needle */
    calcPoints(radius - 90, midx, midy, hrx, hry);

    /* gets position for minute needle */
    minSecCalc(radius - 50, midx, midy, minx, miny);

    /* gets position for second needle */
    minSecCalc(radius - 70, midx, midy, secx, secy);

    while (!kbhit())
    {
        settextstyle(8, 0, 3);
        setcolor(LIGHTCYAN);
        outtextxy(320,45,"Analog Digital Clock");
        settextstyle(7, 0, 2);
        setcolor(LIGHTMAGENTA);
        outtextxy(320,70,"Developed by Ayub Shiplo");

        setlinestyle(0, 1, 2);
        settextstyle(5, 0, 3);

        setcolor(LIGHTGREEN);
        {
            /* draws frame of the clock */
            circle(midx, midy, radius);
        }

        /* place the numbers  in clock */
        for (j = 0; j < 12; j++)
        {
            setcolor(LIGHTRED);
            if (j == 0)
            {
                sprintf(str, "%d", 12);
            }
            else
            {
                sprintf(str, "%d", j);
            }
            settextjustify(CENTER_TEXT, CENTER_TEXT);
            moveto(x[j], y[j]);
            outtext(str);
        }

        /* get the current time using time() API */
        t1 = time(NULL);
        data = localtime(&t1);
        setcolor(LIGHTMAGENTA);
        /* draw the second needle in clock */
        sec = data->tm_sec % 60;
        line(midx, midy, secx[sec], secy[sec]);
        setcolor(LIGHTBLUE);
        /* draw the minute needle in clock */
        min = data->tm_min % 60;
        line(midx, midy, minx[min], miny[min]);
        setcolor(7);
        /* draw the hour needle in clock */
        hr = data->tm_hour % 12;
        line(midx, midy, hrx[hr], hry[hr]);

        digital_clock();

        delay(1000);
        cleardevice();

    }

    getch();

    /* deallocate memory allocated for graphic screen */
    closegraph();
    return 0;
}
