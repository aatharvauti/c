#include<stdio.h>
#define SIZE 10
int len;

int BinarySearch(int list[SIZE],int KEY,int low,int high)
{
    int m;
    m = (low + high)/2;

    if (KEY == list[m])
        return m;
    else if (KEY < list[m])
        return BinarySearch(list,KEY,low,m-1);
    else
        return BinarySearch(list,KEY,m+1,high);
}

int main()
{
    int list[SIZE], KEY, i, flag, low, high;

    int BinarySearch(int list[SIZE], int KEY, int low, int high);

    printf("\nRoll no. 01\tAtharva Auti\n");
    
    printf("\nEnter the number of elements: ");
    scanf("%d", &len);

    printf("\nEnter %d Numbers:\n", len);
    for (int i = 0; i < len; i++)
        scanf("%d", &list[i]);

    printf("\nEnter the element to be searched: ");    
    scanf("%d",&KEY);

    low = 0;
    high = len - 1;
    flag = BinarySearch(list, KEY, low, high);

    printf("\n The element is at the location list[%d]\n", flag);
    return 0;
}

