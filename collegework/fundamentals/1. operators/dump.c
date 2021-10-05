#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
	 int a,b;
    float e,f;

    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    printf("Enter two decimal numbers:\n");
    scanf("%f %f", &e, &f);

    
    printf("%d %d\n%f %f\n",(a+b),(a-b),(e+f),(e-f));
    
    return 0;
}