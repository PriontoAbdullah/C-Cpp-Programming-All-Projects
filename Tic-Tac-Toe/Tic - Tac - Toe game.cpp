#include<stdio.h>
#include<graphics.h>

#define d 42
#define s 33
#define f 190
#define mx getmaxx()
#define my getmaxy()

char box[3][3];
int EnterKey();
void display(int,int);
int winner(int,int,int);
int draw(int,int);
void end(char *);

main()
{
    int gd,gm,sx=0,sy=0,i,j,k,cnt=2,play;
    char str[25],ch;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            box[i][j]='  ';
        }
    }

    while(1)
    {
        setcolor(LIGHTCYAN);
        outtextxy(187,90,"TIC-TAC-TOE GAME");
        setcolor(LIGHTMAGENTA);
        outtextxy(350,230,"Player 1 symbol is:  X ");
        outtextxy(350,250,"Player 2 symbol is:  O ");
        play=cnt%2;
        sprintf(str,"Player %d Now Your Turn. Symbol (%c)",play+1,play? 'O':'X');
        setcolor(YELLOW);
        outtextxy(130,130,str);
        setcolor(LIGHTGREEN);
        outtextxy(165,330,"Developed by Prionto Abdullah");
        display(sx,sy);
        ch=EnterKey();
        switch(ch)
        {
        case 72:
            if(sy!=0)
                sy--;
            break;
        case 80:
            if(sy!=2)
                sy++;
            break;
        case 75:
            if(sx!=0)
                sx--;
            break;
        case 77:
            if(sx!=2)
                sx++;
            break;
        case ' ':
            if(box[sy][sx]==' ')
            {
                if(play==0)
                    box[sy][sx]='X';
                else
                    box[sy][sx]='O';
                cnt++;
            }
            break;
        case 'e':
        case 'E':
            cleardevice();
            closegraph();
            return 0;
        default :
            break;
        }
        if(winner(sx,sy,play)==1||draw(sx,sy)==1)
            break;
    }
    return 0;
}

int EnterKey()
{
    int ch;
    ch=getch();
    if(ch==0)
    {
        ch=getch();
        return(ch);
    }
    return(ch);
}

void display(int sx,int sy)
{
    int i,j;
    char str[2];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(j==sx&&i==sy)
                setcolor(YELLOW);
            else
                setcolor(WHITE);
            rectangle(j*d+f,i*d+f,j*d+s+f,i*d+s+f);
            sprintf(str,"%c",box[i][j]);
            outtextxy(j*d+8+f,i*d+8+f,str);
        }
    }
}
int winner(int sx,int sy,int play)
{
    char str[25];
    int i,j;
    for(i=0; i<3; i++)
    {
        if((box[i][0]==box[i][1]&&box[i][0]==box[i][2]&&box[i][0]!=' ')||(box[0][i]==box[1][i]&&box[0][i]==box[2][i]&&box[0][i]!=' '))
        {
            display(sx,sy);
            getch();
            sprintf(str,"Player %d (%c) You Won!!!",play+1,play?'O':'X');
            end(str);
            return(1);
        }
        if((box[0][0]==box[1][1]&&box[1][1]==box[2][2]&&box[2][2]!=' ')||(box[0][2]==box[1][1]&&box[1][1]==box[2][0]&&box[2][0]!=' '))
        {
            display(sx,sy);
            getch();
            sprintf(str,"Player %d ( %c ) You Won!!!",play+1,play?'O':'X');
      end(str);
            return(1);
        }
    }
    return(0);
}

int draw(int sx,int sy)
{
    int i,j,k=0;
    char str[25];
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            if(box[i][j]!=' ')
                k++;
    if(k==9)
    {
        display(sx,sy);
        getch();
        sprintf(str,"The game is draw!!!");
        end(str);
        return(1);
    }
    return(0);
}

void end(char *str)
{
    int i,j;
    delay(800);
    cleardevice();
    setcolor(WHITE);
    outtextxy(mx/2-150,my/2,str);
    setcolor(j);
    circle(mx/2,my/2,i);
    delay(100);
    outtextxy(mx/2-150,my/2,str);
    getch();
    closegraph();
}
