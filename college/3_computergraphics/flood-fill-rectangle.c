#include<stdio.h>
#include<graphics.h>

void flood(int x, int y, int new, int old);

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
    flood(x1+1,y1+1,2,0);

    delay(60000);
    closegraph();
    return 0;
}

void flood(int x, int y, int new, int old)
{
    if (getpixel(x, y) == old)
    {
        putpixel(x,y,new);
        //bottom, top, right, left
        flood(x + 1, y, new, old);
        flood(x - 1, y, new, old);
        flood(x, y + 1, new, old);
        flood(x, y - 1, new, old);
    }
}
