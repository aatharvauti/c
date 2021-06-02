#include<stdio.h>

int main ()
{

    int number;

    printf("Enter the number of Day: ");
    scanf("%d",&number);

    switch (number)
    {
    case 1:
        printf("The 1st day of the week is Sunday\n");
        break;
    case 2:
        printf("The 2nd day of the week is Monday\n");
        break;
    case 3: 
        printf("The 3rd day of the week is Tuesday\n");
        break;
    case 4:
        printf("The 4th day of the week is Wednesday\n");
        break;
    case 5:
        printf("The 5th day of the week is Thursday\n");
        break;
    case 6:
        printf("The 6th day of the week is Friday\n");
        break;
    case 7:
        printf("The 7th day of the week is Saturday\n");
        break;
    default:
        printf("Error: Number can't be negative, zero or greater than 7!\n");
        break;
    }
}
