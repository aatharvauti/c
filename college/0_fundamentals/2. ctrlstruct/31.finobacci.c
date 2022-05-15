#include <stdio.h>
int main() {

    int i, number, term1 = 0, term2 = 1, nextTerm = term1 + term2;

    printf("Enter the number of terms: ");
    scanf("%d", &number);

    printf("Finobacci Series: \n");

    for (i = 1; i <= number; ++i) 
    {
        printf("%d\n", nextTerm);
        term1 = term2;
        term2 = nextTerm;
        nextTerm = term1 + term2;
    }

//

    return 0;
}