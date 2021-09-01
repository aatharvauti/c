#include<stdio.h>  

int main()  
{  
    int a[100], n, i, *pointer;  

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the Elements of Array: \n");  
    for(i = 0; i < n; i++)  
        scanf("%d", &a[i]);  
  
    pointer = &a[n - 1];  
  
    printf("\nElements of the Array in Reverse Order: \n");  
    for(i = 0; i < n; i++)  
        printf("%d\n", *pointer--);  
  
    return 0;  
}  