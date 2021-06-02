#include<stdio.h>

int main ()
{

    int number;

    printf("Enter the number of Month: ");
    scanf("%d",&number);

    switch (number)
    {
    case 1:
        printf("The 1st month is January\n");
        break;
    case 2:
        printf("The 2nd month is February\n");
        break;
    case 3:
        printf("The 3rd month is March\n");
        break;
    case 4:
        printf("The 4th month is April\n");
        break;
    case 5:
        printf("The 5th month is May\n");
        break;
    case 6:
        printf("The 6th month is June\n");
        break;
    case 7:
        printf("The 7th month is July\n");
        break;
    case 8:
        printf("The 8th month is August\n");
        break;
    case 9:
        printf("The 9th month is September\n");
        break;
    case 10:
        printf("The 10th month is October\n");
        break;
    case 11:
        printf("The 11th month is November\n");
        break;
    case 12:
        printf("The 12th month is December\n");
        break;
    default:
        printf("Error: Number can't be negative, zero or greater than 13!\n");
        break;
    }
}
