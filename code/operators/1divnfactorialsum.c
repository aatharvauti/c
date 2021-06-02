// Write a program to calculate sum of the following
// 1+1/2!+1/3! ... 1/n!

#include<stdio.h>

int main()
{
    int i, j, num, fact = 1;
    double answer = 0;

    printf("n = ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        fact = 1;
            for(j = i; j > 0; j--) 
            { 
                fact = fact * j; 
            }
        answer = answer + (1.0 / fact);
    }

    printf("The answer of the series is equal to %f\n", answer);
    return 0;
}