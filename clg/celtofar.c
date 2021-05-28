#include<stdio.h>

int main()
{
    float cel, far;

    printf("Enter the temperature in Celcius: ");
    scanf("%f", &cel);

    far = (1.8 * cel) + 32;
    printf ("The temperature in Farenheit is: %.1f\n", far);

    return 0;
}