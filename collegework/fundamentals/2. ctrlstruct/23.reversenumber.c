#include<stdio.h>  

int main()    
{    
    int num, x, reverse = 0;  

    printf("Enter a number: ");    
    scanf("%d", &num);   

    while(num != 0)    
    {    
        x = (num % 10); //isolate last digit // last digit is x
        reverse = (reverse * 10) + x; // add it
        num /= 10; //remove last digit
    }    

    printf("The Reverse of the number is %d\n", reverse);    
    return 0;  
}       