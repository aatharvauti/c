#include <stdio.h> 

int main() 
{ 
   int num, binaryNumber, decimalNumber = 0, base = 1, x; 

   printf ("Enter a binary number :\n"); 
   scanf (" %d", &num);

   binaryNumber = num;

   do { 
    x = num % 10;
    decimalNumber = decimalNumber + x * base; 
    num = num / 10;
    base = base * 2; 
   } while (num > 0);  

   printf ("The binary number is %d \n", binaryNumber);
   printf ("The decimal number is %d \n", decimalNumber);
  
   return 0;
} 
