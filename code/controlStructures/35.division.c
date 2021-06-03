// C++ program to find
// sum of given series
#include<stdio.h>

double seriesSum(int n)
{

    int i = 0;

    double result = 0.0;
    _Bool sign = 1;

    while (n > 0)
    {
        n--;
            result = result + (double)++i / ++i;
    }

    return result;    
}
 

int main()
{
    int result, num;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Sum is: %.2f\n", seriesSum(num));  
    return 0;
}


