#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
    initwindow(1000,960,"Ziua unui camion",500,20);
    ///Masina
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    bar(250,50,450,150);
    floodfill(250,50,RED);
    bar(100,150,600,250);
    floodfill(100,150,RED);
    ///usa de la masina
    setcolor(WHITE);
    line(350,55,350,245);
    line(255,55,255,245);
    line(255,55,445,55);
    line(255,245,445,245);
    line(445,55,445,245);
    setcolor(BLUE);
    setfillstyle(SOLID_FILL,BLUE);
    line(260,60,345,60);
    floodfill(260,60,BLUE);
    line(260,60,260,140);
    floodfill(260,60,BLUE);
    line(260,140,345,140);
    floodfill(260,140,BLUE);
    line(345,140,345,60);
    floodfill(345,140,BLUE);
    line(355,60,440,60);
    floodfill(355,60,BLUE);
    line(355,60,355,140);
    floodfill(355,60,BLUE);
    line(355,140,440,140);
    floodfill(355,140,BLUE);
    line(440,140,440,60);
    floodfill(440,140,BLUE);

    setcolor(WHITE);
    circle(330,150,5);
    circle(425,150,5);

    ///roti
    setcolor(8);
    setfillstyle(SOLID_FILL,8);
    circle(175,250,50);
    floodfill(175,250,8);
    setfillstyle(SOLID_FILL,8);
    circle(525,250,50);
    floodfill(525,250,8);
    getch();
    return 0;
}
