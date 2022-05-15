#include<math.h>
#include<stdio.h>

int main ()
{
    float a, b, c, discriminant, x1, x2, real, imaginary; //x1 and 2 since + and - in formula

    printf("The Value of a is: ");
    scanf("%f", &a);

    printf("The Value of b is: ");
    scanf("%f", &b);

    printf("The Value of c is: ");
    scanf("%f", &c);
    discriminant = (b * b - 4 * a * c); //delta which is (b^2 - 4ac)

    printf("The roots of Quadratic equation are:\n");
    // condition for real and different roots
    if (discriminant > 0) 
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("x1 = %.2lf and x2 = %.2lf\n", x1, x2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) 
    {
        x1 = x2 = -b / (2 * a); // since sqrt (discriminant) is 0 it can be neglected
        printf("x1 = x2 = %.2lf\n", x1);
    }

    // if delta is 0, negative, infinity, irrational or invalid
    else 
    {
        real = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        printf("x1 = (%.2lf) + (%.2lfi) and x2 = (%.2f) - (%.2fi)\n", real, imaginary, real, imaginary);
    }


}