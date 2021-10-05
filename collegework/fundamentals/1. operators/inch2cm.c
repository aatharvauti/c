#include<stdio.h>

int main()
{
    float cm, inch;

    printf("Enter the length in inch(es): ");
    scanf("%f", &inch);

    cm = 2.54 * inch;

    printf("%.3f inch(es) is equal to %.3f centimeter(s)\n", inch, cm);

    return 0;
}