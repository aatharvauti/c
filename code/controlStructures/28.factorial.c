#include <stdio.h>

int main()
{
    int i, number ,fact = 1;

    printf("Enter a number:\n");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        fact = fact * i;
    }

    printf("The Factorial of %d is %d\n", number, fact);
    return 0;
}