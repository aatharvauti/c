#include <stdio.h>

int main() 
{
    int f = 0, j, x1, x2; //f states true false

    printf("Enter X1 = ");
    scanf("%d", &x1);

    printf("Enter X2 = ");
    scanf("%d", &x2);


    for(int n = x1; n < x2; n++)
    {
        if (n == 1) 
        {
            printf("1 is neither prime nor composite\n");
        } 
        else
        f = 1;
        for (j = 2; j <= n / 2; ++j) 
        {
            if (n % j == 0)
            {
                f = 0;
                break;
            }
        }

        if (f == 1)
            printf("%d\n", n);
    }

  return 0;
}