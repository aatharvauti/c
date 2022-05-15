#include <stdio.h>

int main() 

{
    int number, reverse, x;

    for(int n = 100; n < 999; n++)
    {
        number = n;
        reverse = 0;

        while(number != 0)
        {
            x = number % 10;
            reverse = (reverse * 10) + x;
            number /= 10;
        }

        if(n == reverse)
        {
            printf("%d is Palidrome\n", n);
        }
    }

    return 0;
}