#include<stdio.h>
#include<graphics.h>


void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;

    dx = x1 - x0;
    dy = y1 - y0;

    x = x0;
    y = y0;

    p = 2 * dy - dx;

    while(x < x1)
    {
        if(p >= 0)
        {
            putpixel(x, y, 7);
            p = p + 2*dy - 2*dx;
            y = y+1;

            delay(300); 
        }

        else 
        {
            putpixel(x, y, 7);
            p = p + 2*dy;
            
            delay(300);
        }

        x = x + 1;
    }
}

void wait_for_char()
{

    //Wait for a key press
    int in = 0;

    while (in == 0) {
        in = getchar();
    }
}

int main()
{
    int gdrive = DETECT, gmode, error, x0, y0, x1, y1;
    initgraph(&gdrive, &gmode, (char*)"");

    printf("Enter the co-ordinates of first point: ");
    scanf("%d%d", &x0, &y0);

    printf("Enter the co-ordinates of second point: ");
    scanf("%d%d", &x1, &y1);

    drawline(x0, y0, x1, y1);

    wait_for_char();
    closegraph();
    return 0;

}