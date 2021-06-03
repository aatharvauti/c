#include <stdio.h>

int main() 
{
   int num, i, j, k = 1, rows = 4, space, x;
   printf("\n\n");


// Upper Pyramid

   for (i = 1; i <= rows; ++i) 
   {
      for (j = 1; j <= i; ++j) 
      { 
         printf("* ");
      }
      printf("\n");
   }

   printf("\n\n");

// Inverted Pyramid
   for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   
   printf("\n\n");

// Full Pyramid

   int m = 0;

   for (i = 1; i <= rows; ++i, m = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (m != 2 * i - 1) 
      {
         printf("* ");
         ++m;
      }
      printf("\n");
   }

   printf("\n\n");


// Inverted Pyramid of Numbers

    for (i = 1; i <= rows; ++i) 
   {
    for (j = 1; j <= i; ++j) 
    { 
        printf("%d ", j);
    }
    printf("\n");
   }

   printf("\n\n");
   
// Inverted Pyramid of Numbers

    for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }

   printf("\n\n");


// ABCD Inverted Half Pyramid


   for (i = 3; i >= 0; i--)
   {
      for(j = 0; j <= i; j++)
      {
         printf("%c", j + 65);
      }
      printf("\n");
   }
   printf("\n\n");

// ABCD Full Pyramid


   for(i = 1; i <= 4; i++)
   {
      for(j = 1; j <= rows-i; j++)
      {
            printf(" ");
      }
      for(j = 1; j <= i; j++)
      {
            printf("%c",(char)(j+64));
      }
      for(j = i-1; j >= 1; j--)
      {
            printf("%c",(char)(j+64));
      }
      printf("\n");
   }

   printf("\n\n");

// ABCD Full Pyramid Inverted

   for(i = rows; i >= 1; i--)
   {
      for(j = 1; j <= rows - i; j++)
      {
         printf(" ");
      }
      for(j = 1; j <= i; j++)
      {
         printf("%c", j+64);
      }
      for(j = i - 1; j >= 1; j--)
      {
         printf("%c",j+64);
      }
      printf("\n");
   }

   printf("\n\n");

// Numbers Full Pyramid

   for(i = 1; i <= rows; i++)
   {
      for(j = 1; j <= rows-i; j++)
      {
            printf(" ");
      }
      for(j = 1; j <= i; j++)
      {
            printf("%d", j);
      }
      for(j = i-1; j >= 1; j--)
      {
            printf("%d", j);
      }
      printf("\n");
   }

   printf("\n\n");

// Repeat Numbered Pyramid

   for(i = 1; i <= rows; i++)
   {
        for(j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
   }

   printf("\n\n");

// Inverted Reverse Pyramid

   for(i = rows; i >= 1; i--)
   {
      for(j = i; j >= 1; j--)
      {
         printf("%d", j);
      }
      printf("\n");
   }

    printf("\n\n");

// Straight Pyramid

   for(i = 1; i <= rows; i++)
   {
      for(j = 1; j <= i; j++, k++)
      {
         printf("%d", k);
      }
      printf("\n");
   }

    printf("\n\n");

// 101010101

   for(i = 1; i <= rows; i++)
   {
      for(j = i; j >= 1; j--)
      {
         printf("%d", j%2);
      }
      printf("\n");
   }

    printf("\n\n");

// 0 in the middle

   rows = 3;
   for(i = 0; i <= rows; i++)
   {
      for (j = 1; j <= rows - i; j++)
      {
         printf(" ");
      }  
      for (j = i; j >= 0; j--) 
      {
         printf("%d", j);
      }
      for (j = 1; j <= i; j++) 
      {
         printf("%d", j);
      }
   
      printf("\n");
   }

   printf("\n\n");

}