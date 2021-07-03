#include<stdio.h>

int nsum(int n, int arr[][50])
{

    int i, j, sum = 0;

    for (i = 0; i < n; ++i)	
    for (j = 0; j < n; ++j)
        {
        if (i != j)
            sum = sum + arr[i][j];
        }
    return sum;

}

int main()
{
	int arr[50][50], n, i, j;
     
    printf("Enter the order of Matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of Matrix: \n");
        for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

	printf("Σ of non main-diagonal elements = %d\n", nsum(n, arr));
	 
}