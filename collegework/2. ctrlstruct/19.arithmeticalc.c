#include<stdio.h>

int main()
{
    int a, b;
    int req;

    printf("Enter the first Integer:\n");
	scanf("%d",&a);
	printf("Enter the second Integer:\n");
	scanf("%d",&b);
	for(;;)

    {        
        printf("\nEnter your option:\n");

        printf("1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n");
        scanf("%d",&req);

        switch(req)
        {
            case 1:printf("\nAddition of %d and %d is: %d\n", a, b, a + b);
            break;
            case 2:printf("\nSubtraction of %d and %d is: %d\n", a, b, a - b);
            break;
            case 3:printf("\nMultiplication of %d and %d is: %d\n", a, b, a * b);
            break;  
            case 4: 
            if(b == 0)
            {
                printf("ERR: Can't Divide by Zero\n");
            }
            else
            {
                printf("\nDivision of %d and %d is: %d\n", a, b, a/b);
            }  
            break; 
            default:printf("\n Enter correct option\n");
            break; 
        }
        return 0;
    }

}