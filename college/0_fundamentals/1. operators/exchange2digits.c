#include<stdio.h>

int main()
{
    int number, x, y, exchange;

    printf("Enter a two digit number: ");
    scanf("%d",&number);

    printf("Before Exchange, the number is: %d\n", number);

    x = number % 10;
    y = number / 10;
    exchange = (x * 10) + y;
    printf("After Exchange the number is: %d\n", exchange);

    return 0;
}
