// Write a menu driven program to read a double-type value x and a character type variable M that
// represents the type of mathematical function and display the value of
// (a) ceil(x), if c or C is assigned to M,
// (b) floor(x), if f or F is assigned to M,
// (c) sqrt(x), if s or S is assigned to M,
// (d) log(x), if l or L is assigned to M,
// (e) fabs(x), if a or A is assigned to M,
// using switch statement.

#include<math.h>
#include<stdio.h>

int main()
{
    double x;
    char M;

    printf("Enter the value of (x): ");
    scanf("%lf", &x);

    printf("\nEnter Option: \n\n(c/C) Ceil\n(f/F) Floor\n(s/S) Squareroot\n(l/L) Log\n(a/A) Fabs\n");
    scanf(" %c", &M);

    for(;;)

    {
        switch(M)
        {
            case 'c':
            case 'C':
                printf("The Ceiling of %.2lf is: %.2lf\n", x, ceil(x));
                break;
            case 'f':
            case 'F':
                printf("The Floor of %.2lf is: %.2lf\n", x, floor(x));
                break;
            case 's':
            case 'S':
                printf("The Squareroot of %.2lf is: %.2lf\n", x, sqrt(x));
                break;
            case 'l':
            case 'L':
                printf("The log of %.2lf is: %.2lf\n", x, log(x));
                break;
            case 'a':
            case 'A':
                printf("The Absolute value of %.2lf is: %.2lf\n", x, fabs(x));
                break;
            default:
                printf("Please enter a valid option");
                break;

        }
         return 0;
    }
   
    
}