#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    initwindow(1000,960,"Ziua unui camion",500,20);
    ///patrat
    setfillpattern(SOLID_FILL,BROWN);
    line(550,200,835,200);
    line(550,200,550,600);
    line(835,200,835,600);
    line(550,600,835,600);
    floodfill()


    ///acoperis
    setcolor(BLUE);
    line(690,25,835,200);
    line(690,25,550,200);
    ///usa
    setcolor(YELLOW);
    line(650,450,735,450);
    line(650,450,650,600);
    line(735,450,735,600);
    setcolor(RED);
    circle(720,520,5);
    getch();
    closegraph();
    return 0;
}
