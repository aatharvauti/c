#include<stdio.h>

int main()
{   
    /* Purchase Amount -> Discount
    0-100 -> 5%
    101-200 -> 7.5%
    201-300 -> 10.0%
    Above 300 -> 15.0% */
    float amount, discount, finalAmount;

    printf("Enter Purchase Amount : ");
    scanf("%f", &amount);

    if (amount < 0){
        printf ("Amount Paid can't be negative\n");
        return 0;
    }
    else if (amount >= 0 && amount <= 100 ) {
        discount = (amount * 5) / 100;
    }
    else if (amount <= 200) {
        discount = (amount * 7.5) / 100;
    }
    else if (amount <= 300) {
        discount = (amount * 10) / 100;
    }
    else if (amount > 300) {
        discount = (amount * 15) / 100;
    }
    else {
    }

    finalAmount = (amount - discount);
    printf ("Amount to be paid: %.2f\n", finalAmount);

    return 0;
}

