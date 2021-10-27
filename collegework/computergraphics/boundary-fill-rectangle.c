#include<stdio.h>
#include<graphics.h>

void boundaryfill(int x, int y, int boundary, int fill);

int main()
{
    int gd,gm;
    int x,y,x1,y1,x2,y2;
    
    printf("Enter the top-left point of the rectangle:\n");
    scanf("%d%d", &x1, &y1);
    printf("Enter the bottom-right point of the rectangle:\n");
    scanf("%d%d", &x2, &y2);
    
    detectgraph(&gd,&gm);
    initgraph(&gd, &gm, (char*)"");
    cleardevice();
    setcolor(WHITE);
    rectangle(x1,y1,x2,y2);
    boundaryfill(x1+1,y1+1,15,4);

    delay(60000);
    return 0;
}

void boundaryfill(int x, int y, int boundary, int fill)
{
    int current;
    current = getpixel(x,y);

    if(current != boundary && current != fill)
    {
        putpixel(x,y,fill);
        delay(10);
        boundaryfill(x+1,y,boundary,fill);
        boundaryfill(x,y+1,boundary,fill);
        boundaryfill(x-1,y,boundary,fill);
        boundaryfill(x,y-1,boundary,fill);
    }
}
