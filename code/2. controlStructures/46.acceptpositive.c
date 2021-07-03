#include<stdio.h>

int main()
{
    int number;

    printf("Enter a Positive Integer: ");
    scanf("%d", &number);
    
    if (number < 0)
    {
        printf("Please Enter a Positive Integer\n");
    }

    else
    {
        printf("You have entered the number: %d\n", number);
    }

    return 0;
}