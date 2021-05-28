# include <stdio.h>

int main()
{
	float bp, da, hra, grpay;
/*  bp = basic pay,
	da = dearness allowance,
	hra = house rent allowance,
	grpay = gross pay.
*/
	printf("\n Rajesh, Enter Basic Pay: ");
	scanf("%f",&bp);

	da = (0.4 * bp);
	hra = (0.2 * bp);
	grpay = (bp + da + hra);

	printf("Basic Pay = %.1f\n",bp);
	printf("Dearness Allowance = %.1f\n",da);
	printf("House Rent Allowance = %.1f\n",hra);
	printf("Gross Salary/Pay= %.1f\n",grpay);

	return 0;
}
