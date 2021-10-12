#include<stdio.h>
// #include<conio.h> conio not installed in my WSL
#include<graphics.h>
// #include<dos.h>
#include<math.h>
#include<stdlib.h>

void menu();
void input();
void output();
void translation();
void rotation();
void scaling();
void shearing();
void reflection();

void wait_for_char()
{

    //Wait for a key press
    int in = 0;

    while (in == 0) {
        in = getchar();
    }
}


int a[10][2],i,x,option,temp,angle,tx,ty,fx,fy,sh,k,n,axis,y;
float sx,sy;

void menu()
{

	// Main Menu
	printf("Enter your Choice:\n");
	printf("1. Translation\n");
	printf("2. Rotation\n");
	printf("3. Scaling\n");
	printf("4. Reflection\n"); 
	printf("5. Shearing\n");
	printf("6. Exit\n");
	scanf("%d",&option);

	switch(option)
	{
		case 1:
			input();
			translation();
			break;
		case 2:
			input();
			rotation();
			break;
		case 3:
			input();
			scaling();
			break;
		case 4 :
			input();
			reflection();
			break;
		case 5:
			input();
			shearing();
			break;
		case 6:
			exit(0);
			break;
	}
}

void input()
{
	printf("Enter the Number of Vertices:" );
	scanf("%d",&n);

	for(int i = 0; i < n; i++) {
		printf("Enter Coordinates");
		scanf("%d%d%d%d",&a[i][0],&a[i][1],&a[i+1][0],&a[i+1][1]);
	}

}

void output()
{
	cleardevice();

	for(int i = 0; i < n; i++) {
		line(a[i][0],a[i][1],a[i+1][0],a[i+1][1]);
	} 

}

void translation()
{
	output();

	printf("Enter the transformation vertex tx,ty:\n");
	scanf("%d%d", &tx, &ty);
	for(int i = 0; i <= n; i++) {
		a[i][0]=a[i][0]+tx;
		a[i][1]=a[i][1]+ty;
	}

	output();
	delay(15000); // 15 seconds stop for all programs to get the screenshots
	menu();
}

void rotation()
{
	output();
	
	printf("Enter Theta (Rotating Angle:");
	scanf("%d", &y);
	printf("Enter the Pivot Point's Coordinates:");
	scanf("%d%d", &fx, &fy);
	
	k = (y*3.14)/180; // theta*pi/180

	for(int i = 0; i <= n; i++) {
		a[i][0] = fx + (a[i][0]-fx)*cos(k) - (a[i][1]-fy)*sin(k);
		a[i][1] = fy + (a[i][0]-fx)*sin(k) - (a[i][1]-fy)*cos(k);
	}

	output();
	delay(15000);
	menu();
}

void scaling()
{
	output();

	printf("Enter the Scaling Factor\n");
	scanf("%f%f", &sx, &sy); // float
	printf("Enter the Coordinates of the Fixed Point:");
	scanf("%d%d", &fx, &fy);

	for(int i = 0; i <= n; i++) {
		a[i][0] = a[i][0]*sx+fy*(1-sx);
		a[i][1] = a[i][1]*sy+fy*(1-sy);
	}

	output();
	delay(15000);
	menu();
}

void reflection()
{
	output();

	for(int i = 0; i <= n; i++) {
		temp = a[i][0];
		a[i][0] = a[i][1];
		a[i][1] = temp;
	}

	output();
	delay(15000);
	menu();
}


void shearing() 

{
	output();
	
	printf("Enter the Shear Value:");
	scanf("%d",&sh);
	printf("Enter the Coordinates of the Fixed Point:");
	scanf("%d%d",&fx,&fy);
	printf("Enter the Axis for Shearing\n1: x-axis\n2: y-axis\n");
	scanf("%d",&axis);

	for(int i = 0; i <= n; i++) {
	
		if(axis == 1)
			a[i][0] = a[i][0] + sh*(a[i][1] - fy);
		else
			a[i][1] = a[i][1] + sh*(a[i][0] - fx);
	}

	output();
	delay(15000);
	menu();
}

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd, &gm, (char*)"");
	// initgraph(&gd,&gm,"c:\\tc\\bgi"); Windows
	menu();
	wait_for_char();
	
	//delay(150000);
} 
