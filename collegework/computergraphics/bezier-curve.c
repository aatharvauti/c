#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main()
{
    int x[4], y[4], i;
    double px, py,t;
    int gd=DETECT,gm;
    
    printf("\nEnter X and Y coordinates\n");
    
    for(i = 0; i < 4; i++)
        scanf("%d%d",&x[i],&y[i]);

    initgraph(&gd, &gm, (char*)"");
    // initgraph(&gd,&gm,"c:\\turboc3\\bgi");

    for(i = 0; i < 4; i++)
        putpixel(x[i],y[i],3);

    for(t = 0.0; t <= 1.0; t = t + 0.001) {
        
        // Formula
        px = pow(1-t,3)*x[0] + 3*t*pow(1-t,2)*x[1] + 3*t*t*(1-t)*x[2] + pow(t,3)*x[3];
        py =  pow(1-t,3)*y[0] + 3*t*pow(1-t,2)*y[1] + 3*t*t*(1-t)*y[2] + pow(t,3)*y[3];
        
        putpixel(px, py, WHITE);
    }

    delay(60000);
    closegraph();
    return 0;
}