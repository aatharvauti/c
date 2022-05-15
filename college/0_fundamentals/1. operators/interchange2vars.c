#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter 'A': ");
    scanf("%d", &a);
    
    printf("Enter 'B': ");
    scanf("%d", &b);

    printf("Before Interchanging, the value of \nA: %d\nB: %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Interchanging, the value of \nA: %d\nB: %d\n", a, b);

    return 0;
}
