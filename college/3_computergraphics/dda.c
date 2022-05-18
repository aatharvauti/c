#include <graphics.h>
#include <stdio.h> 
#include <math.h>
//#include <dos.h>

int main()
{
	float x,y,x1, y1, x2, y2, dx, dy, step; 
	int i,gd=DETECT, gm;

	initgraph(&gd, &gm, (char*)"");

	printf("Enter the value of x1 and y1 : "); 
	scanf("%f%f",&x1,&y1);
	printf("Enter the value of x2 and y2: "); 
	scanf("%f%f",&x2, &y2);

	dx=abs(x2-x1); 
	dy=abs(y2-y1);

	if(dx>=dy)
		step=dx;
	else
		step=dy;

	dx=dx/step; 
	dy=dy/step;

	x=x1;
	y=y1;

	i=1;
	while(i<=step)
	{
		putpixel(x, y, WHITE);
		x+dx;
		y=y+dy;
		i=i+1;
		delay(50);
	}

	delay(40000);
	closegraph();
	return 0;
}