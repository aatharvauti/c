#include<stdio.h>

int main()
{
    int numberInput;
    printf("Enter a number: ");
    scanf("%d", &numberInput);

    if (numberInput < 0) {
        numberInput = numberInput * (-1); 
    }
    else {
        numberInput = numberInput;
    }

    printf("The absolute value of the entered number is %d\n", numberInput);
    
    return 0;
}