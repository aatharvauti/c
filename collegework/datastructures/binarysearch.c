#include<stdio.h>
#include<stdlib.h>

int binarysearch(int a[], int lower_bound, int upper_bound, int val)
{
    int mid;
    int beg = lower_bound;
    int end = upper_bound;
    int pos = -1;

    while(beg <= end)
    {
        mid = (beg+end)/2;

        if(a[mid] == val) {
            pos = mid;
            printf("Element found at position: %d\n", pos + 1);
            return 0;
        }
        else if(a[mid] > val)
            end = mid - 1;
        else
            beg = mid + 1;
    }

    if (pos == -1)
        printf("ERR: Element not found\n");

    return 0;
}

int main(void)
{
 
    int val, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int *a = (int*)calloc(n, sizeof(int));
    
    printf("Enter the elements: \n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ", val); 
    scanf("%d", &val);

    binarysearch(a, 0, n, val);
    
    free(a);
    return 0;
}