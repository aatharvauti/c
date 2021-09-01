#include<stdio.h>

int ascending(int n, int arr[100])
{
    int a, i, j;

    for (i = 0; i < n; ++i) 
    {
        for (j = i + 1; j < n; ++j)
        {
            if (arr[i] > arr[j]) 
            {
                a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
}

int main()
{
 
    int arr[100], i, j, a, n;
    
    printf("Enter the size of Array: ");
    scanf("%d",&n);

    printf("Enter the Elements of Array: \n");
    for(i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    ascending(n, arr);

    printf("\n\nThe Ascending Order of Array is: \n");

    for (i = 0; i < n; ++i)
        printf("%d\n", arr[i]);

    return 0;
}