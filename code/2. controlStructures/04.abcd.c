#include<stdio.h>

int main ()
{

    float a, b, c, d, result;

    printf("The Value of a is: ");
    scanf("%f", &a);

    printf("The Value of b is: ");
    scanf("%f", &b);

    printf("The Value of c is: ");
    scanf("%f", &c);

    printf("The Value of d is: ");
    scanf("%f", &d);
 
    result = ((a/b)+(c/d));
 
    
    if (b == 0 && d == 0)
    {
         printf("\nError: Both the Denominators are 0\n b = %.0f and d = %.0f\n",b,d);
    }
    else if(b == 0)
    {
        printf("\nThe Denominater is 0 for a/b = %.0f\n", b);
    }
    else if(d == 0)
    {
        printf("\nThe Denominater is 0 for c/d = %.0f\n", d);
    }
    else
    {     
        printf("\nThe Value of (a/b)+(c/d) = %.2f\n", result);  
    }
    
}    
