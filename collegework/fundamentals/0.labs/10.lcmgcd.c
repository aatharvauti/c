 
#include <stdio.h>
 
int gcd(int a, int b)
{
   if (a == 0)
      return b;
   else
      return gcd(b % a, a);
}
 
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
 
   printf("GCD of %d and %d = %d \n", a, b, gcd(a, b));
   printf("LCM of %d and %d = %d \n", a, b, lcm(a, b));
 
   return 0;
 
}
