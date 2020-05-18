//#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
//#include<dos.h>
//#include<process.h>

int maxx=getmaxx();
int maxy=getmaxy();


void star(float x, float y , float a,int bcolor,int color)
{ setcolor(bcolor);
setfillstyle(1,color) ;
int str[]={x-a,y-a,x-6*a,y,x-a,y+a,x,y+6*a,x+a,y+a,x+6*a,y,x+a,y-a,x,y-6*a,x-a,y-a};
drawpoly(9,str);
fillpoly(9,str);
}



/*******************************************************************/

void stand()
{                  //stand_red
 setcolor(YELLOW);
 int  poly[]= {100,100,140,100,120,130,80,130,100,100};
   setfillstyle(1,RED);
    drawpoly(5,poly);                         //stand
     fillpoly(5,poly);



  //slope
      int poly2[]={80,130,30,255,70,255,120,130,80,130};
   setfillstyle(1,RED);
   drawpoly(5,poly2);
   fillpoly(5,poly2);

      //lader
      setcolor(15);
      line(100,230,140,230);
  line(100,220,140,220);
   line(100,210,140,210);
  line(100,200,140,200);
   line(100,190,140,190);
   line(100,180,140,180);
   line(100,170,140,170);
   line(110,160,140,160);
   line(110,150,140,150);
   line(115,140,140,140);
   line(120,130,140,130);
   line(128,120,140,120);


     setcolor(15);
    ellipse(94,120,60,200,15,24);  //handle arcs
     ellipse(134,120,60,200,15,24);
   line(80,123,28,253);//slope_line1
   line(120,123,68,253);
   //vertical pole
   line(140,100,140,240); //vertical
   line(120,130,120,246);           //vertical
line(100,240,100,180);   //vertical behind
line(80,230,80,246);     //vertical behind2
      //base joit_lines
      line(100,240,140,240);
     line(120,246,80,246);
     line(140,240,120,246);
     line(100,240,80,246);



 }
void movobjects()
  {
      //ground color

  setfillstyle(1,GREEN);
  int gc[]={0,160,68,160,30,255,70,255,108,160,224,160,224,171,219,186,319,186,324,171,324,160,getmaxx(),160,getmaxx(),getmaxy()-160,0,getmaxy()-160,0,160};
  drawpoly(15,gc) ;
  fillpoly(15,gc)   ;
  //table
  setcolor(15);
  setfillstyle(2,13);
  //line(225,150,325,150);
 // line(325,150,325,170);

  //line(225,170,225,150);
  bar(225,150,325,170);
  setcolor(RED);
  line(325,170,225,170);
  int bench2[]={225,170,325,170,320,185,220,185,225,170};


//  table foot
  line(325,170,325,188);
  line(320,185,320,195);
  line(220,185,220,195);
  line(225,185,225,188);
  setfillstyle(1,7);
  drawpoly(5,bench2);
  fillpoly(5,bench2);
  setcolor(GREEN);

  bar(0,getmaxy()-30,getmaxx(),getmaxy());  //green ground below
             //sky color
               setcolor(BLACK);

      int scl[]={60,160,68,160,80,130,100,100,140,100,140,0,60,0,60,160};

    int scr[]={getmaxx()/2+35,160,getmaxx(),160,getmaxx(),0,getmaxx()/2+35,0,getmaxx()/2+35,160};

      setfillstyle(1,16);
     fillpoly(8,scl) ;
     fillpoly(5,scr);


       //road_horizontal
       setfillstyle(1,BLACK);
  bar(0,getmaxy()-160,getmaxx(),getmaxy()-30);

        int n=0;
  while(n<600) //this loop is used to produce dashed line
 { n=n+10;
 setcolor(WHITE);
 line(n,getmaxy()-95,20+n,getmaxy()-95);
 setcolor(BLACK);
 line(n+5,getmaxy()-95,15+n,getmaxy()-95);
 }

  }
