#include <stdio.h>

int main() 
{
    int number, i;

    printf("Enter a Number: ");
    scanf("%d", &number);

    printf("Factors of %d are: \n", number);

    for (i = 1; i <= number; ++i)
    {
        if (number % i == 0) 
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
