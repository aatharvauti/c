#include<stdio.h>

int main()
{
    int i, num, fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for (i = 1; i <= num; ++i) {
        fact *= i;
    }
    printf("Factorial of %d = %d\n", num, fact);
}