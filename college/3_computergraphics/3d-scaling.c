#include<stdio.h>
#include<graphics.h>
#include<math.h>

int gd=DETECT,gm;
int x, y, z, xa, ya, xb, yb, maxx, maxy, midx, midy;

void scale()
{
    detectgraph(&gd,&gm);
	initgraph(&gd,&gm,(char*)"");

    maxx=getmaxx();
    maxy=getmaxy();

    midx=maxx/2;
    midy=maxy/2;

    bar3d(midx + xa, midy - ya, midx + xb, midy - yb, 5, 1);
    bar3d(midx + (x*xa), midy - (y*ya), midx + (x*xb), midy - (y*yb), 5*z, 1);

}

int main()
{
	printf("\nEnter Dimensions (xa, ya, xb, yb): ");
	// Sample Values: 100, 50, 150, 0
	scanf("%d%d%d%d", &xa, &ya, &xb, &yb);

	
    printf("Enter Scaling Factor: ");
    scanf("%d%d%d", &x, &y, &z);


	initgraph(&gd, &gm, (char*)"");
	cleardevice();

	scale();

	delay(60000);

	closegraph();
	return 0;

}

