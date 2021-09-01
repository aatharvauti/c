#include<stdio.h>

int main()
{
    int number, x = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while(x <= 12)
    {
        printf("%d x %d = %d\n", number, x, (number * x));
        x++;
    }
    return 0;
}