#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter 'A': ");
    scanf("%d", &a);
    
    printf("Enter 'B': ");
    scanf("%d", &b);

    printf("Enter 'C': ");
    scanf("%d", &c);

    printf("Before Rotating, the value of \nA: %d\nB: %d\nC: %d\n", a, b, c);

    a = a + b + c;
    b = ((a + b) - a);
    c = (a - (b + c));
    a = (a - (b + c));

    printf("After Rotating, the value of \nA: %d\nB: %d\nC: %d\n", a, b, c);

    return 0;
}
