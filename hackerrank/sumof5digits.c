#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, lastDigit, sum = 0;
    scanf("%d", &n);
    while (n > 0) // unit the number is 0, keep on looping
    {
        lastDigit = n % 10;  // separate the last digit
        sum += lastDigit;
        n = n / 10;             
    }
    
    printf("%d", sum);

    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}