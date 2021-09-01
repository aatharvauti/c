#include <stdio.h>
#include <math.h>
 
#define EPSILON 1.0e-15
 
int main() 
{
    unsigned long long fact = 1;
    double e = 2.0, i;
    int num = 2;

    do {
        i = e;
        fact *= num ++;
        e += (1.0 / fact);
    }

    while (fabs(e - i) >= EPSILON);
        printf("The value of e = %.50f\n", e);

    return 0;
}