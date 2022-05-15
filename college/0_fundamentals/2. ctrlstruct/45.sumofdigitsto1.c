#include<stdio.h>

int main()
{    
    int number, x, sumOfDigits = 0;

    printf("Enter a number: ");
    scanf("%d", &number);   

    while(number / 10 != 0) // if number divded by 10 is 0.1 to 0.9, then it is single digit
    {
        sumOfDigits = 0;
        while(number != 0) 
        {
            x = number % 10;
            sumOfDigits += x;      
            number = number / 10;  
        }

        number = sumOfDigits;
    }

    printf("%d \n", sumOfDigits);

    return 0;
}