#include<stdio.h>
#include<graphics.h>
#include<math.h>

int gd=DETECT,gm;

int n,xs[100],ys[100],y,fx,fy;
float k,t,v;;
void draw();
void rotate();


int main() 
{
    printf("Enter number of sides:\n");
    scanf("%d",&n);

    printf("Enter coordinates:\n");

    for (int i = 0; i < n; i++)
        scanf("%d%d",&xs[i],&ys[i]);

    printf("Enter Theta Rotating Angle:\n");
	scanf("%d", &y);

    // for rotating about a specified point
    // if not specified, rotates about origin

	printf("Enter the Pivot Point's Coordinates:\n");
	scanf("%d%d", &fx, &fy);

    initgraph(&gd, &gm, (char*)"");
    cleardevice();
    
    setcolor(RED);
    draw();
    
    setcolor(BLUE);
    rotate();
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

void rotate()
{

	k = (3.14*y)/180; // theta*pi/180
    
    // for rotating about a specified point
	
    for(int i = 0; i < n; i++) {
        t = xs[i] - fx;
        v = ys[i] - fy;
		xs[i] = fx + floor(abs(t*cos(k) - v*sin(k)));
		ys[i] = fy + floor(abs(v*sin(k) + t*cos(k)));
	}
}