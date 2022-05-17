/*

the array is virtually split into a sorted and an unsorted part. 
values from the unsorted part are picked 
and placed at the correct position in the sorted part.

tc: O(n^2) 
as: O(1)

Algorithm to write program in C:

To sort an array of size n in ascending order: 
Step 1 − Iterate from arr[1] to arr[n] over the array. 
Step 2 − Compare the current element (key) to its predecessor. 
Step 3 − If the key element is smaller than its predecessor, compare it to the elements before. 
Move the greater elements one position up to make space for the swapped element.

*/

#include<stdio.h>
#include<math.h>

void insertion_sort(int list[], int n)
{
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = list[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && list[j] > key) {
			list[j + 1] = list[j];
			j = j - 1;
		}
		list[j + 1] = key;
	}
}

int main()
{
	int list[100], len, i;
    
    printf("\nEnter the number of elements: ");
    scanf("%d", &len);
    printf("\nEnter %d Numbers:\n", len);
    
    for (i = 0; i < len; i++)
        scanf("%d", &list[i]);

	insertion_sort(list, len);
	
	printf("\n\nResult:\n");
    for(int k = 0; k < len; k++)
        printf("%d  ", list[k]);
    
    printf("\n");

	return 0;
}
