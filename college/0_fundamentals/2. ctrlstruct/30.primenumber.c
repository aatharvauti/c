#include <stdio.h>

int main() 
{
  int number, f = 0, i;

  printf("Enter an Integer: ");
  scanf("%d", &number);

  for (i = 2; i <= (number / 2); ++i) {
    if (number % i == 0) {
      f = 1;
      break;
    }
  }

  if (number == 1) 
  {
    printf("1 is neither prime nor composite\n");
  } 
  else 
  {
    if (f == 0)
      printf("%d is a prime number\n", number);
    else
      printf("%d is not a prime number\n", number);
  }

  return 0;
}