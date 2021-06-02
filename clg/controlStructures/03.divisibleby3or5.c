#include<stdio.h>

int main() 

{
    int numberInput;
	printf("Enter a number: ");
	scanf("%d", &numberInput);
	
    if (numberInput % 3 == 0) {
		printf("%d is divisible by 3\n", numberInput);
	}
	else {
		printf("%d is not divisible by 3\n", numberInput);
	}

    if (numberInput % 5 == 0) {
		printf("%d is divisible by 5\n", numberInput);
	}
	else {
		printf("%d is not divisible by 5\n", numberInput);
	}

	return 0;



}