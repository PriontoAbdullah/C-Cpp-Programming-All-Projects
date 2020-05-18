#include<graphics.h>

main()
{
    int graphdriver= DETECT, graphmode= DETECT;
    initgraph(&graphdriver, &graphmode, "c\tc\bgi");

{
    // gacher bam paser border line
    arc(-125, 362, 340, 378, 170);
    // Gacher dan paser border line
    arc(235, 365, 161, -161, 170);

    //Gacher DALPALA
    line(45, 307, 50, 330);
    line(50, 307, 50, 330);
    line(60, 307, 60, 330);
    line(65, 307, 60, 330);
    // Gass er kando colour
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
    circle(60, 278, 36);
    floodfill(60,278, GREEN);
}


    getch();
    closegraph();
}
