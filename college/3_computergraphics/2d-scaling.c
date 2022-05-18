#include<stdio.h>
#include<graphics.h>

int gd=DETECT,gm;

int n,xs[100],ys[100],i,fx,fy;
float xss,yss;
void draw();
void scale();



int main() 
{

    printf("Enter number of sides:\n");
    scanf("%d",&n);

    printf("Enter coordinates:\n");

    for (int i = 0; i < n; i++)
        scanf("%d%d",&xs[i],&ys[i]);
    
    printf("Enter the Scaling Factor\n");
	scanf("%f%f", &xss, &yss); // float
	printf("Enter the Coordinates of the Fixed Point:\n");
	scanf("%d%d", &fx, &fy);

    initgraph(&gd, &gm, (char*)"");
    cleardevice();
    setcolor(RED);
    draw();
    
    setcolor(BLUE);
    scale();
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

void scale()
{
	for(int i = 0; i <= n; i++) {
		xs[i] = xs[i]*xss + fy*(1-xss);
		ys[i] = ys[i]*yss + fy*(1-yss);
	}
}