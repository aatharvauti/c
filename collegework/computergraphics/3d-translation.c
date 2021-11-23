#include<stdio.h>
#include<graphics.h>
#include<math.h>

int gd=DETECT,gm;
int x, y, xa, ya, xb, yb, maxx, maxy, midx, midy;

void transform()
{
		
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,(char*)"");

	maxx = getmaxx();
	maxy = getmaxy();

	midx = maxx/2;
	midy = maxy/2;

	// int xa = 100;
	// int ya = 50;
	// int xb = 150;
	// int yb = 0;

	bar3d(midx + xa, midy - ya, midx + xb, midy - yb, 30, 1);
	bar3d(midx + x + xa, midy - (y + ya), midx + x + xb, midy - (y + yb), 30, 1);

}

int main()
{

	printf("\nEnter Dimensions (xa, ya, xb, yb): ");
	scanf("%d%d%d%d", &xa, &ya, &xb, &yb);

	printf("\nEnter Translation Factor: ");
	scanf("%d%d",&x,&y);

	initgraph(&gd, &gm, (char*)"");
	cleardevice();

	transform();

	delay(60000);

	closegraph();
	return 0;

}

