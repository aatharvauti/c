#include<stdio.h>

int main()

{
    int num, lastDigit;
    printf("Enter a 4 digit number: ");
    scanf("%d",&num);

while (num > 0) // unit the number is 0, keep on looping
    {
        lastDigit = num % 10;       // separate the last digit
        printf("%d\n", lastDigit);  // and print it
        num = num / 10;             // now divide the number by 10 and get back to step 1 if not "0"
    }

    return 0;

}