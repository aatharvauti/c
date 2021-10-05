#include <stdio.h>

// nCr = n!/r!*(n-r)!
 
int fact(int n)
{
   int i, f = 1;
   for(i = 1 ; i <= n; i++)
   {
       f = f * i;
   }
   return f;
}

int main()
{
   int n, r, ncr;

   printf("Enter a number n: ");
   scanf("%d",&n);
 
   printf("Enter a number r: ");
   scanf("%d",&r);
 
   ncr = fact(n)/(fact(r)*fact(n-r));
 
   printf("Value of BIO = n!/r!*(n-r)! = %d\n", ncr);
}
