#include <stdio.h>

int main() 

{
    int number, sum, x;

    for(int n = 100; n < 999; n++)
    {
        number = n;
        sum = 0;

        while(number != 0)
        {
            x = number % 10;
            sum += x * x * x;
            number /= 10;
        }

        if(n == sum)
        {
            printf("%d is an Armstrong number\n", n);
        }
    }

    return 0;
}