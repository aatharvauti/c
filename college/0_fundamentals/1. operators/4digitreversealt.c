#include<stdio.h>

int main()
{
    int digit1, digit2, digit3, digit4, sum;

    printf("Enter 4 digits (Press ENTER each time after every digit unit you get all 4): \n");
    scanf("%d%d%d%d", &digit1, &digit2, &digit3, &digit4);

    sum = (digit1 + digit2 + digit3 + digit4);

    printf("The 4 digit number is: %d%d%d%d\n", digit1, digit2, digit3, digit4);
    printf("The sum of the 4 digit number is: %d\n", sum);
    printf("The reverse format of the 4 digit number is: %d%d%d%d\n", digit4, digit3, digit2, digit1);

    return 0;    
}