#include<stdio.h>

int main()
{
	int customerNumber, excessAmount;
	float unitsUsed, baseAmount, rateOfCharge, charges;

	printf("Enter Customer Number: ");
	scanf("%d", &customerNumber);

	printf("Units Used: ");
	scanf("%f", &unitsUsed);

	if(unitsUsed <= 200)
	{
		rateOfCharge = 0.50;
    	excessAmount = 0;
	}
	else if (unitsUsed >= 201 && unitsUsed < 400)
	{
		rateOfCharge = 0.65;
    	excessAmount = 100;
	}
	else if (unitsUsed >= 401 && unitsUsed <= 600)
	{
		rateOfCharge = 0.80;
    	excessAmount = 230;
	}
	else if(unitsUsed >= 601)
	{
		rateOfCharge = 1;
    	excessAmount = 390;
	}
	else { printf("Invalid"); }

	baseAmount = rateOfCharge * unitsUsed;
	charges = baseAmount + excessAmount;

	printf("Your Customer Number is %d \n", customerNumber);
	printf("Units used: %.2f \n", unitsUsed);
	printf("Total Amount to be Paid is %.2f INR \n", charges);

	return 0;
}
