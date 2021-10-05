#include<stdio.h>

int main()
{

    int arr[100], n, i, largest, largest2; // arr is array, n is size of array

    printf("Enter the size of Array: ");
    scanf("%d",&n);

    printf("Enter the Elements of Array: \n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = 0;
    
    for(i = 0; i < n; i++) 
    {
        if(arr[i] > arr[largest])  
            largest = i;  
    }
    
    if(largest != 0) 
        largest2 = 0;
    else
        largest2 = n - 1;
    
    for(i = 0; i < n && i != largest; i++)
    {
        if(arr[i] > arr[largest2])
            largest2 = i;
    }

    printf("The First and Second largest number of the array is %d and %d \n",arr[largest],arr[largest2]);
}
