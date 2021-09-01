#include<stdio.h>

int main()
{

    int customerNumber;
    float unitsUsed, unitCharge, charges;

    /* 
        up to 30 units -> 0.75 INR per unit
        31 to 100 units -> 2.5 INR per unit
        101 to 301 units -> 3 INR per unit
        Above 301 units -> 4.6 INR per unit
    */

   printf("Enter Customer Number: ");
   scanf("%d", &customerNumber);
   printf("Units Used: ");
   scanf("%f", &unitsUsed);

   if (unitsUsed >= 30) {
       unitCharge = 0.75;
   }
    else if (unitsUsed >= 100) {
       unitCharge = 2.5;
   }
    else if (unitsUsed >= 300) {
       unitCharge = 3;
   }
    else if (unitsUsed <= 301) {
       unitCharge = 4.6;
   }
   else {
   }

   charges = unitCharge * unitsUsed;

   printf("Your Customer Number is %d \n", customerNumber);
   printf("Units used: %.2f \n", unitsUsed);
   printf("Total Amount to be Paid is %.2f INR \n", charges);

   return 0;
}