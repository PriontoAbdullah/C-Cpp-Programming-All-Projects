/*Moving a car*/

//#include<iostream.h>
#include<graphics.h>
#include<dos.h>

int main()
{
//clrscr();

    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C://tc//bgi");
    int g,h;
    for(g=0;g<=80;g+=18)
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


    getch();
}
