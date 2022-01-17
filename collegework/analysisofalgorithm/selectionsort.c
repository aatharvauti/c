/*
comparision based sorting algorithm
the list is divided into 2 parts
sorted list left end (initially empty)
unsorted list right end (intially contains all the elements)
once we find the element with least value, sort it

tc: O(n)

example:
consider an array: int list[4] = {64, 25, 12, 22, 11}

step 1: find out the least valued element and place it at position list[0]

list[4] = {11, 25, 12, 22, 64}

likewise do the remaining
list[4] = {11, 12, 25, 22, 64}

finally
list[4] = {11, 12, 22, 25, 64}


Algorithm to write program in C

Step 1 − SET min to the first location
Step 2 − SEARCH the minimum element in the array
Step 3 – SWAP the first location with the minimum value in the array
Step 4 – ASSIGN the second element as min.
Step 5 − REPEAT the process until we get a sorted array.
*/

#include <stdio.h>

int main()
{
    int list[100], len, i, j, pos, swap;
    
    printf("\nEnter the number of elements: ");
    scanf("%d", &len);
    printf("\nEnter %d Numbers:\n", len);
    
    for (i = 0; i < len; i++)
        scanf("%d", &list[i]);
    
    for(i = 0; i < len - 1; i++) {
    
        pos = i;
        for(j = i + 1; j < len; j++) {
            if(list[pos] > list[j])
            pos = j;
        }

        if(pos != i) {
            swap = list[i];
            list[i] = list[pos];
            list[pos] = swap;
        }
    }

    printf("\n\nResult:\n");
    for(i = 0; i < len; i++)
        printf("%d  ", list[i]);
    
    printf("\n");
    return 0;
}