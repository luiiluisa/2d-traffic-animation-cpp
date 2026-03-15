#include <graphics.h>


int main()
{
    initwindow(1000,960,"Ziua unui camion",500,20);
    setfillstyle(SOLID_FILL,RED);
    circle (800, 100, 15);
    floodfill(810,100,15);
    setfillstyle(SOLID_FILL,YELLOW);
    circle (800, 150,15);
    floodfill(810,150,15);
    setfillstyle(SOLID_FILL,GREEN);
    circle(800,200,15);
    floodfill(810,200,15);
    setfillstyle(SOLID_FILL,WHITE);
    line (770,70,835,70);
    line (770,70,770,230);
    line (770, 230,835,230);
    line (835,70, 835,230);

    getch();
}


