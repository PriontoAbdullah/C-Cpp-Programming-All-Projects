#include<graphics.h>

main()
{
    int graphdriver= DETECT, graphmode= DETECT;
    initgraph(&graphdriver, &graphmode, "c\tc\bgi");
    ///gass
    setcolor(WHITE);




    // gacher bam paser border line
    arc(-42, 285, 340, 378, 220);
    // Gacher dan paser border line
    arc(444, 290, 161, -161, 220);



    //Gacher DALPALA
    line(182, 217, 192, 246); //Gacher bam paser dal
    line(192, 210, 192, 250); //Gacher moddher bam paser dal
    line(209, 210, 209, 250); //Gacher moddher dan paser dal
    line(224, 217, 209, 246); //Gacher dan paser dal





    //Gacher Pata suru dan pas theke

    //pata no 1
    setcolor(GREEN);
    circle(250, 240, 20);  //pata number 1
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(250,240, GREEN);

    //pata no 2
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(280, 210, 30);
    floodfill(280,210, GREEN);

    //pata no 3
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(300, 157, 50); // pata number 3
    floodfill(300,157, GREEN);

    //pata no 4
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(260, 100, 35);
    floodfill(260,100, GREEN);

    //pata no 5
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(200, 75, 35); //pata number 5
    floodfill(200,75, GREEN);

    //pata no 6
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(140, 95, 35); //pata number 6
    floodfill(140,95, GREEN);

    //pata no 7
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(100, 165, 50); //pata number 7
    floodfill(100,165, GREEN);

    //pata no 8
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(110, 225, 30); //pata number 8
    floodfill(110,225, GREEN);

    //pata no 9
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(152, 240, 20); //pata number 9
    floodfill(153,245, GREEN);




    //gacher vetore baki ongso gulo color korar jonne
   setcolor(GREEN);
    int i;
 for(i=227; i>94; i--){
  rectangle(280, i, 130, 89);
    }


    getch();
    closegraph();
}
