#include<stdio.h>
#include<graphics.h>

int gd=DETECT,gm;

int n,xs[100],ys[100],i,tx,ty;
void draw();
void translate();



int main() 
{

    printf("Enter number of sides");
    scanf("%d",&n);

    printf("Enter coordinates");

    for (int i = 0; i < n; i++)
        scanf("%d%d",&xs[i],&ys[i]);
    
    printf("Enter distances");
    scanf("%d%d",&tx,&ty);

    initgraph(&gd, &gm, (char*)"");
    cleardevice();
    setcolor(RED);
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

void translate()
{
    for(int i = 0; i < n; i++)
    {
        xs[i]+=tx;
        ys[i]+=ty;
    }
}