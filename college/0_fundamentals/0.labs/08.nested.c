 
#include <stdio.h>
 
int main()
{
  int i, j, rows = 4;
  printf("\n\n");
 
  for(i = rows; i >= 1; i--)
  {
     for(j = 1; j <= rows - i; j++){
        printf(" ");
     }
     for(j = 1; j <= i; j++){
        printf("%c", j+64);
     }
     for(j = i - 1; j >= 1; j--){
        printf("%c",j+64);
     }
     printf("\n");
  }
  printf("\n\n");
}
