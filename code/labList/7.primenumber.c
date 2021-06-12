#include <math.h>
#include <stdio.h>

int main()
{
   int n, i, flag = 1;

   printf("Enter a number: ");
   scanf("%d", &n);

   for (i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) {
         flag = 0;
         break; 
      }
   }

   if (n <= 1)
   flag = 0;

   if (flag == 1)
      printf("%d is a prime number\n", n);
   else 
      printf("%d is not a prime number\n", n);

   return 0;
}