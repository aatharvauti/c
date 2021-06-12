#include <stdio.h>
#include <stdlib.h>

int main()

{
   int num;
   double decimal;
   char l;
   char name[50];
   char bname[50];

      
      printf("Enter your letter : ");
      scanf("%c", &l);
      
      printf("Enter name : ");
      scanf("%s", &name);
      
      printf("Enter a nice number : ");
      scanf("%d", &num);
      
      printf("Enter code : ");
      scanf("%lf", &decimal);
      
      printf("Enter fullname : ");
      gets(bname);
      fgets(bname, 50, stdin);
      


      printf("The letter : %c\n", l);
      printf("The name : %s\n", name);
      printf("The number you entered is : %d\n", num);
      printf("The code : %f\n", decimal);
      printf("The fullname : %s\n", bname);

   return 0;
}