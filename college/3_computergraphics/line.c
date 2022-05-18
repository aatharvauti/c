#include<graphics.h>
#include<stdio.h>

void main()
{
    int gd = DETECT, gm;

    //init graphics
    initgraph(&gd, &gm, (char*)"");

    //draw a line
    line(100,100,300,300);
    lineto(200,200);

    delay(40000);
    closegraph();
}
