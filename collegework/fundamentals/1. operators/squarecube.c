#include<stdio.h>

int main()
{
    float x, sq, cu;

    printf("Enter a number: ");
    scanf("%f", &x);

    sq = (x * x);
    cu = (x * x * x);

    printf("The square of %.2f is %.2f\n", x, sq);
    printf("The cube of %.2f is %.2f\n", x, cu);

    return 0;
}