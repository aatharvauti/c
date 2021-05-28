#include<stdio.h>
#define PI 3.14

int main() 
{
    float radius, volume;

    printf("Enter Radius: ");
    scanf("%f", &radius);

    volume = ((4* PI * radius * radius * radius) / 3);
    printf("The Volume of the Sphere is %.2f\n", volume);

    return 0;
}