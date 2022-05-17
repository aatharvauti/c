#include <stdio.h>

int w[20], v[20], val[20][20], W, len, i, j, k;

// utility function to return maximum of 2 numbers
int maximum(int a, int b)
{ return (a > b) ? a : b; }

void display()
{
    printf("\n\n        ");
    for(i = 0; i <= W; i++)
        printf("%02d ", i);
    
    printf("\n\t\n");
    for(i = 0; i <= W; i++)
        printf("----");

    printf("\n");
    for(i = 1; i <= len; i++) {
        printf("%02d %02d | ", w[i], v[i]);
        for(j = 0; j <= W; j++)
            printf("%02d ", val[i][j]);
        printf("\n");
    }
}

void knapsack()
{
    int a, b;
    
    for(i = 1; i <= len; i++) {
        for(j = 0; j <= W; j++) {
            if(j == 0)
                val[i][j] = 0;
            if(j != 0 && i == 1 && j >= w[i])
                val[i][j] = v[i];
            if(j != 0 && i != 1)
            {
                // formula to find values in the table
                a = val[i - 1][j];
                b = (val[i - 1][j - w[i]]) + v[i];
                if(j - w[i] < 0)
                    val[i][j] = a;
                else
                    val[i][j] = maximum(a, b);
            }   
        }
    }

    display();
}

int main()
{
    printf("\nEnter the number of elements: ");
    scanf("%d", &len);
    
    for (i = 1; i <= len; i++) {
        printf("Enter w[%d]: ", i);
        scanf("%d", &w[i]);
        printf("Enter v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("Enter Knapsack Capacity (W): ");
    scanf("%d", &W);

    knapsack();
    return 0;
}
