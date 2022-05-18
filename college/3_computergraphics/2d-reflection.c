#include<stdio.h>
#include<graphics.h>

int gd=DETECT,gm;

int n,xs[100],ys[100],i,temp;
void draw();
void reflect();

int main() 
{

    printf("Enter number of sides:\n");
    scanf("%d",&n);

    printf("Enter coordinates:\n");

    for (int i = 0; i < n; i++)
        scanf("%d%d",&xs[i],&ys[i]);

    initgraph(&gd, &gm, (char*)"");
    cleardevice();
    setcolor(RED);
    draw();
    
    setcolor(BLUE);
    reflect();
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

void reflect()
{
	for(int i = 0; i <= n; i++) {
		temp = xs[i];
		xs[i] = ys[i];
		ys[i] = temp;
	}
}