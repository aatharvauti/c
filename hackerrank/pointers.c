#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    
    *a = *a + *b;
    *b = abs(*a - (2*(*b))); //subtracting b twice will solve the problem of *a changed value
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}