// WAP to calculate power of a number(x raised to n), accept value of x and n from user.
#include<math.h>
#include<stdio.h>

int main()
{
    int x, n, xton;

    printf("Enter the Base: ");
    scanf("%d", &x);

    printf("Enter the Power: ");
    scanf("%d", &n);

    xton = pow(x, n);

    printf("%d to the power %d = %d\n", x, n, xton);

}