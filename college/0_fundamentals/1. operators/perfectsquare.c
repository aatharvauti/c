#include<stdio.h>

int main()
{

    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(i = 0; i <= number; i++)
    {
        if(number == i * i)
        {
            printf("%d is a perfect square\n", number);
            return 0;
        }
    }
    printf("%d is not a perfect square\n", number);
    return 0;
}