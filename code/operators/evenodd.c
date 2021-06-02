#include<stdio.h>

int main()

{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) /*That is if the remainder is 0*/ {
        printf ("It's an even number\n");
    } 

    else {
        printf ("It's an odd number\n");
    }

    return 0;
}