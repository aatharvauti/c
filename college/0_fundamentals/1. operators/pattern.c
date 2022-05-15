#include <stdio.h>

int main() 
{
   int i, j, rows = 4, space, x;
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

    for (i = 1; i <= rows; ++i, x = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      } // print nothin for space
      while (x != 2 * i - 1) {
         printf("* "); 
         ++x; // increment x
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

// AAAA BBB Inverted Half Pyramid

   for (i = 0; i <= rows; ++i)
   {
      for(j = rows; j >= i; j--)
      {
         printf("%c", i + 65);
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


}