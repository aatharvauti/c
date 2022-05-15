#include<stdio.h>

int main()
{
    int number;
    char *answer;
    printf("Enter a number: ");
    scanf("%d", &number);

    // condition ? value_if_true : value_if_false

    answer = (number % 2 == 0) ? "even" : "odd";

    printf("It is an %s number\n", answer);
    
}
