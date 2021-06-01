#include<stdio.h>

int main()
{
    int a, b, c, d;
    int eDenominator, eNumerator;

    printf("Program to calculate (a/b)+(c/d) and check if its denominator is zero or not\n");
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    printf("Enter the value of d: ");
    scanf("%d", &d);
    
    eNumerator = (a*d) + (b*c);
    eDenominator = (a*d);

    printf ("The value of (a/b)+(c/d) is %d/%d\n", eNumerator, eDenominator);

    return 0;
}