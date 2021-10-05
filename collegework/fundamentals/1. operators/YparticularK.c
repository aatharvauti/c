#include<stdio.h>

int main () 
{
    double a, b, x, K, Y;

    printf("Enter the value of a: ");
    scanf("%lf", &a);

    printf("Enter the value of b: ");
    scanf("%lf", &b);

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of K: ");
    scanf("%lf", &K);

    if (K == 1) {
        Y = (a * x + b);
    }
    else if (K == 2) {
        Y = ((a * x * x) + (b * b));
    }
    else if (K == 3) {
        Y = (-1 * a * x);
    }
    else if (K == 4) {
        Y = (a + x);
    }

    printf("The value of Y = %.2f \n", Y);

    return 0;
}