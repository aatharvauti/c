#include<stdio.h>

int main () 
{
    double x, fx;

    printf("Enter the value of x: ");
    scanf("%lf", &x);


    if (x >= 0 && x <= 10 ) {
        fx = ((x * x) + 2);
    }
    else if (x <= 20 ) {
        fx = ((x * x) + (2 * x));
    }
    else if (x <= 30 ) {
        fx = ((x * x * x) + (2 * x * x));
    }
    else if (x > 30){
        fx = 0; 
    }

    printf("The value of f(x) = %.0f \n", fx);

    return 0;
}