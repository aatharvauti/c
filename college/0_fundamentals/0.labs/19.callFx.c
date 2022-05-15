#include<stdio.h>

// call by value
void swapVal(int x, int y)
{
    int t;

    t = x;
    x = y;
    y = t;

    printf("x = %d and y = %d\n", x, y);

}

// call by reference
void swapRef(int* x, int* y)
{
    int t;

    t = *x;
    *x = *y;
    *y = t;

    printf("x = %d and y = %d\n", *x, *y);

}

int main()
{
    int a, b, opt;
    printf("Enter 2 Integers: \n");
    scanf("%d %d", &a, &b);

    printf("Select Option to Swap: \n 1. Swap by Value \n 2. Swap by Reference\n");
    scanf("%d", &opt);

    if (opt == 1)
        swapVal(a, b); // pass by values
    else if (opt == 2)
        swapRef(&a, &b); // pass by reference
    else
        printf("Enter a Valid Option");

    printf("a = %d and b = %d\n", a, b);

    return 0;
}