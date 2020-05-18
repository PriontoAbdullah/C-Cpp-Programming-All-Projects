#include<stdio.h>

#include<conio.h>

#include<graphics.h>

main()

{

    int gd=DETECT,gm;

    initgraph(&gd,&gm,"");
    int L;
     arc(106,105,80,0,5);
     line(105,120,105,110);
    setfillstyle(1,LIGHTGRAY);
    arc(105,123,-35,220,4);
    bar(99,125,111,128);
    bar(101,145,109,128);
    bar(97,141,113,145);
    bar(100,160,110,145);
    setcolor(DARKGRAY);
    for(L=1; L<=34; L++)
    {
        arc(57,160,0,180,L);
    }
    //wall
    setfillstyle(1,LIGHTGRAY);
    bar(16,160,114,208);
    setfillstyle(1,DARKGRAY);
    bar(10,160,120,156);
    bar(13,212,117,208);
    setfillstyle(9,DARKGRAY);
    bar(10,215,120,211);
    //door
    setfillstyle(1,5);
    bar(24,208,44,180);
    bar(54,208,78,180);
    bar(86,208,106,180);
    setcolor(BLUE);
    arc(34,180,0,175,9);
    arc(34,180,0,175,6);
    arc(34,180,0,175,3);
    arc(66,180,0,175,11);
    arc(66,180,0,175,9);
    arc(66,180,0,175,7);
    arc(66,180,0,175,5);
    arc(66,180,0,175,3);
    arc(96,180,0,175,9);
    arc(96,180,0,175,6);
    arc(96,180,0,175,3);



    getch();

    closegraph();

}
