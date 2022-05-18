#include<stdio.h>
#include<graphics.h>

int gd=DETECT,gm;

int n,xs[100],ys[100],i,fx,fy,sh,axis;
float xss,yss;
void draw();
void shear();

int main() 
{

    printf("Enter number of sides:\n");
    scanf("%d",&n);

    printf("Enter coordinates:\n");

    for (int i = 0; i < n; i++)
        scanf("%d%d",&xs[i],&ys[i]);
    
    printf("Enter the Shear Value:");
	scanf("%d",&sh);

	printf("Enter the Coordinates of the Fixed Point:");
	scanf("%d%d",&fx,&fy);

	printf("Enter the Axis for Shearing\n1: x-axis\n2: y-axis\n");
	scanf("%d",&axis);

    initgraph(&gd, &gm, (char*)"");
    cleardevice();
    setcolor(RED);
    draw();
    
    setcolor(BLUE);
    shear();
    draw();

    delay(60000);
    return 0;
} 

void draw() 
{
    for(int i = 0; i < n; i++)
    {
        line(xs[i], ys[i],xs[(i+1)%n],ys[(i+1)%n]);
    }
}

void shear()
{
	for(int i = 0; i <= n; i++) {
		if(axis == 1)
			xs[i] = xs[i] + sh*(ys[i] - fy);
		else
			ys[i] = ys[i] + sh*(xs[i] - fx);
	}
}