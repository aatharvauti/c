#include<stdio.h>  

int main()    
{    
    int num, x, sum = 0;  

    printf("Enter a number: ");    
    scanf("%d",&num);   

    while(num != 0)    
    {    
        x = num % 10;    
        sum += x;    
        num /= 10;    
    }    
    printf("Sum of the digits is %d\n",sum);    
    return 0;  
}   