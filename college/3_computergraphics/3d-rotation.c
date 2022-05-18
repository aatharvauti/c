#include<stdio.h>
#include<graphics.h>
#include<math.h>

int gd=DETECT,gm;
int x, y, o, xa, ya, xb, yb, depth, xaa, yaa, xbb, ybb, maxx, maxy, midx, midy;

void rotate()
{
    detectgraph(&gd,&gm);
	initgraph(&gd,&gm,(char*)"");

    maxx=getmaxx();
    maxy=getmaxy();

    midx=maxx/2;
    midy=maxy/2;

    bar3d(midx + xa, midy - ya, midx + xb, midy - yb, depth, 1);

    xaa = xa*cos(o*3.14/180) - ya*sin(o*3.14/180);
    yaa = xa*sin(o*3.14/180) + ya*cos(o*3.14/180);
    xbb = xb*cos(o*3.14/180) - yb*sin(o*3.14/180);
    ybb = xb*sin(o*3.14/180) + yb*cos(o*3.14/180);

    bar3d(midx + xa, midy - xaa, midx + xb, midy - xbb, depth, 1);
    bar3d(midx + xaa, midy - ya, midx + xbb, midy - yb, depth, 1);

}

int main()
{
	printf("\nEnter Dimensions (xa, ya, xb, yb, depth): ");
	// Sample Values: 100, 50, 150, 0, 5
	scanf("%d%d%d%d%d", &xa, &ya, &xb, &yb, &depth);
	
    printf("\nEnter Rotation Angle: ");
    scanf("%d",&o);

	initgraph(&gd, &gm, (char*)"");
	cleardevice();

	rotate();

	delay(60000);

	closegraph();
	return 0;

}

