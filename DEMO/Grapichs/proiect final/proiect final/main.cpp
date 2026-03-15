#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <string.h>

using namespace std;

void omulet(int i,int adun)
{
    ///CAP
    setfillstyle(SOLID_FILL,12);
    circle(400+adun-i,535,30);
    floodfill(400+adun-i,535,WHITE);

    ///OCHII
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    circle(410+adun-i,530,5);
    floodfill(410+adun-i,530,WHITE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    circle(390+adun-i,530,5);
    floodfill(390+adun-i,530,WHITE);

    ///GURA
    line(390+adun-i,550,410+adun-i,550);


    ///CORP
    line(400+adun-i,565,400+adun-i,670);
    line(400+adun-i,670,370+adun-i,737);
    line(400+adun-i,670,430+adun-i,737);
    line(400+adun-i,580,385+adun-i,650);
    line(400+adun-i,580,415+adun-i,650);
}

void capomulet(int i)
{
    ///CAP
    setfillstyle(SOLID_FILL,12);
    circle(400+i,535,30);
    floodfill(400+i,535,WHITE);

    ///OCHII
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    circle(410+i,530,5);
    floodfill(410+i,530,WHITE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    circle(390+i,530,5);
    floodfill(390+i,530,WHITE);

    ///GURA
    line(390+i,550,410+i,550);

}

void casa()
{
    setfillstyle(SOLID_FILL,RED);
    rectangle(755,189,1000,735);
    floodfill(756,190,WHITE);

    setfillstyle(SOLID_FILL,14);
    rectangle(812,434,982,737);
    floodfill(813,435,WHITE);

    setfillstyle(SOLID_FILL,BLUE);
    rectangle(831,264,945,340);
    floodfill(832,265,WHITE);


    line(755,189,900,0);


    setfillstyle(SOLID_FILL,BROWN);
    circle(850,567,13);
    floodfill(850,567,WHITE);
}

void loculdemunca( )
{
    setfillstyle(SOLID_FILL,8);
    rectangle(813,661,1000,737);
    floodfill(814,662,WHITE);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    rectangle(907,0,1000,661);
    floodfill(908,1,WHITE);
    setfillstyle(SOLID_FILL,RED);
    line(907,200,1000,200);
    floodfill(908,201,WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    circle(944,450,15);
    floodfill(944,450,WHITE);
}

void semRosu()
{
    ///rosu
    setfillstyle(SOLID_FILL,RED);
    circle (800, 100, 15);
    floodfill(810,100,WHITE);
    setfillstyle(SOLID_FILL,BLACK);
    circle (800, 150,15);
    floodfill(810,150,WHITE);
    setfillstyle(SOLID_FILL,BLACK);
    circle(800,200,15);
    floodfill(810,200,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    line (770,70,835,70);
    line (770,70,770,230);
    line (770, 230,835,230);
    line (835,70, 835,230);
}

void semGalben()
{
    ///Galben
    setfillstyle(SOLID_FILL,BLACK);
    circle (800, 100, 15);
    floodfill(810,100,WHITE);
    setfillstyle(SOLID_FILL,YELLOW);
    circle (800, 150,15);
    floodfill(810,150,WHITE);
    setfillstyle(SOLID_FILL,BLACK);
    circle(800,200,15);
    floodfill(810,200,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    line (770,70,835,70);
    line (770,70,770,230);
    line (770, 230,835,230);
    line (835,70, 835,230);
}

void semVerde()
{
    ///verde
    setfillstyle(SOLID_FILL,RED);
    circle (800, 100, 15);
    setfillstyle(SOLID_FILL,BLACK);
    circle (800, 150,15);
    floodfill(810,150,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    circle(800,200,15);
    floodfill(810,200,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    line (770,70,835,70);
    line (770,70,770,230);
    line (770, 230,835,230);
    line (835,70, 835,230);
}

void text(char a[])
{
    settextstyle(BOLD_FONT,4,2);
    outtextxy(600,200, a);
}


void soare(int a,int b,int y)
{
    ///TEXT
    outtextxy(a+y,b-y,"SOARE");

    setfillstyle(SOLID_FILL,YELLOW);
    circle(a+y+50,b-y,50);
    floodfill(a+y+50,b-y,WHITE);

}

void masinaSTOP(int i)
{
    ///strada
    line(0,737,1000,737);


    ///masina schelet
    line(113+i,680,226+i,680);
    setfillstyle(SOLID_FILL,BLUE);
    circle(265+i,699,40);
    floodfill(265+i,699,WHITE);
    line(302+i,680,491+i,680);
    setfillstyle(SOLID_FILL,BLUE);
    circle(529+i,699,40);
    floodfill(529+i,699,WHITE);
    line (567+i, 680, 680+i, 680);
    line (113+i,680,113+i,590);
    line (680+i, 680, 680+i,590);
    line (113+i,590,226+i,567);
    line (680+i,590,510+i,567);
    line (226+i,567,265+i,472);
    line (510+i,567,454+i,472);
    line(265+i,472,454+i,472);


    ///geamuri
    line(265+i,567,302+i,491);
    line(472+i,567,434+i,491);
    line(265+i,567,472+i,567);
    line(302+i,491,434+i,491);


}

void casaMasinaSTOP()
{

    for(int i=0,j=0; i<=35 && j<=300; i++,j+=9)
    {
        ///text
        text("OMULETU SE DUCE LA LUCRU");

        ///SOARE
        soare(113,567,i);

        ///OM
        omulet(j,300);

        ///MASINA
        masinaSTOP(0);

        ///CASA
        casa();

        delay(50);
        swapbuffers();
        cleardevice();
    }
}

void masinaGO(int start, int stop)
{
    for(int i=start,j=0; i<stop || j<=50; i=i+5,j++)
    {

        ///text
        text("EL FACE 2 ORE PANA LA LOCUL DE MUNCA...");

        ///Masina
        masinaSTOP(i);

        ///soarele
        soare(153,537,j);

        ///cap de omulet
        capomulet(i);

        delay(10);
        swapbuffers();
        cleardevice();
    }
    ///strada
    line(0,737,1000,737);
}

void SemRosuMasGO(int start, int stop)
{
     for(int i=start,j=0;i<stop || j<=25; i++,j++)
    {

        ///TEXT
        text("SUNT FOARTE MULTE SEMAFOARE :/");

        ///rosu
        semRosu();

        ///masina
        masinaSTOP(i);

        ///soare
        soare(375,330,j);

        ///cap de omulet
        capomulet(i);

        delay(1);
        swapbuffers();
        cleardevice();

    }
    ///strada
    line(0,737,1000,737);
}

void SemSTOP()
{
    for(int i=0;i<=10;i++)
       {

            ///SOARE
            soare(480,220,i);

            ///MASINA
            masinaSTOP(100);

            ///CAP DE OMULET
            capomulet(100);

            ///SEMAFOR-GALBEN
            semGalben();

            delay(25);
            swapbuffers();
            cleardevice();
       }

}

void SemVerdeMasGO(int start, int stop)
{
    for(int i=start,j=0; i<stop || j<=20;i+=5,j++)
    {
        ///TEXT
        text("ACEST LUCUR IL DERANJEAZA PE OMULET");

        ///semafor-verde
        semVerde();

        ///masina
        masinaSTOP(i);

        ///soare
        soare(500,200,j);

        ///cap de omulet
        capomulet(i);

        delay(10);
        swapbuffers();
        cleardevice();

    }
    ///strada
    line(0,737,1000,737);
}

void LocMunMasGO(int start, int stop)
{
    for(int i=start,j=0;i<stop ||j<=100;i++,j++)
    {
        ///text
        text("EL AJUNGE LA LUCRU FOARTE SUPARAT");

        ///locul de munca
        loculdemunca();

        ///masina
        masinaSTOP(i);

        ///soarele
        soare(700,15,j);

        ///cap de omulet
        capomulet(i);

        delay(1);
        swapbuffers();
        cleardevice();

    }

    ///strada
    line(0,737,1000,737);



}

int main()
{
    initwindow(1000,960,"ziua unui om",500,20);

    casaMasinaSTOP();
    delay(100);
    cleardevice();

    masinaGO(0,1000);
    cleardevice();

    text("dupa 2 ore in masina ajunge la lucru");
    cleardevice();

    SemRosuMasGO(0,100);
    SemSTOP();
    SemVerdeMasGO(100,1000);
    cleardevice();

    LocMunMasGO(0,100);
    delay(100);
    cleardevice();

    getch();
    closegraph();
    return 0;
}


