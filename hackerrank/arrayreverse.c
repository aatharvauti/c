#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, *ptr;
    
    scanf("%d", &num);
    
    arr = (int*) malloc(num * sizeof(int));
    
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    
    ptr = &arr[num-1];

    for(i = 0; i < num; i++)
        printf("%d ", *ptr--);
    return 0;
}