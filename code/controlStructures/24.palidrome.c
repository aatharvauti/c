#include <stdio.h>

int main() 

{
    int number, reverse = 0, x, original;

    printf("Enter an integer: ");
    scanf("%d", &number);

    original = number;

    //reverse the input
    while (number != 0) 
    {
        x = number % 10;
        reverse = (reverse * 10) + x;
        number /= 10;
    }

    //if nothing is changed, then it is a palindrome
    if (reverse == original)
        printf("The number %d is a palindrome.\n", original);
    else
        printf("The number %d is not a palindrome.\n", original);

    return 0;
}