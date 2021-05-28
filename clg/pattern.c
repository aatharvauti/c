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








}