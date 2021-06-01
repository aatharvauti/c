#include <stdio.h>

int main() 
{
   int i, j, rows = 3, space, x;

    for (i = rows; i >= 0; i--)
   {
      for(j = 0; j <= i; j++)
      {
         printf("%c", j + 65);
      }
      printf("\n");
   }

}
