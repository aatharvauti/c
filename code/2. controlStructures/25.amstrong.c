#include <stdio.h>

int main() 

{
    int number, armstrong = 0, x, original;

    printf("Enter an integer: ");
    scanf("%d", &number);

    original = number;

    //reverse the input
    while (number != 0) 
    {
        x = number % 10;
        armstrong += x*x*x;
        number /= 10;
    }

    //if nothing is changed, then it is a palindrome
    if (armstrong == original)
        printf("The number %d is a Armstrong Number.\n", original);
    else
        printf("The number %d is not a Armstrong Number.\n", original);

    return 0;
}