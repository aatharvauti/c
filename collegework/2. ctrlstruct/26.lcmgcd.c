#include <stdio.h>
 
//return gcd
// suppose numbers 5 and 10, 
// 5 = 5 * 1
// 10 = 2 * 5 * 1
// GCD Multiplication of common factors = 5 * 1

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
//return lcm
//5 and 10
// 5 = 5 * 1
// 10 = 5 * 2
// 10

// or here, (5/5) * 10 
// equals 10 

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
 
int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("GCD of %d and %d is %d \n", a, b, gcd(a, b));
    printf("LCM of %d and %d is %d \n", a, b, lcm(a, b));

    return 0;

}