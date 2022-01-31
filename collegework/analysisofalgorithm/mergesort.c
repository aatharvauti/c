/*

this is a "divide and conquer" algorithm. 
it divides the input array into two halves, calls itself for the two halves, 
and then merges the two sorted halves. 

tc: O(n*Log n)

Algorithm to write program in C:

MergeSort(arr[], l,  r)
If r > l
Step 1 − Find the middle point to divide the array into two halves:  
    middle m = l+ (r-l)/2
Step 2 − Call mergeSort for first half:   
    Call mergeSort(arr, l, m)
Step 3 − Call mergeSort for second half:
    Call mergeSort(arr, m+1, r)
Step 4 − Merge the two halves sorted in step 2 and 3:
    Call merge(arr, l, m, r)

*/

#include <stdio.h>
#include <stdlib.h>

// merge function merges 2 subarrays of list[].
// list[l..m] and list[m+1..r]

void merge(int list[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	// temporary arrays
    // t1 is left
    // t2 is right
	int t1[n1], t2[n2];

	// copy data to the arrays t1[] and t2[]
	for (i = 0; i < n1; i++)
		t1[i] = list[l + i];
	for (j = 0; j < n2; j++)
		t2[j] = list[m + 1 + j];

	// merge the temporary arrays into list[]
	i = 0; // first subarray
	j = 0; // second subarray
	
    k = l; // merged subarray
	
    while (i < n1 && j < n2) {
		if (t1[i] <= t2[j]) {
			list[k] = t1[i];
			i++;
		}
		else {
			list[k] = t2[j];
			j++;
		}
		k++;
	}

	// copy the remaining elements
	while (i < n1) {
		list[k] = t1[i];
		i++;
		k++;
	}

	while (j < n2) {
		list[k] = t2[j];
		j++;
		k++;
	}
}

// l and r are for left and right indices of the subarray of list[]
void merge_sort(int list[], int l, int r)
{
	if (l < r) {

		// (l+r)/2
		int m = l + (r - l) / 2;

		// sort the 2 halves
		merge_sort(list, l, m);
		merge_sort(list, m + 1, r);

        // finally use merge and return list
		merge(list, l, m, r);
	}
}

int main()
{
    int list[100], len;
    
    printf("\nEnter the number of elements: ");
    scanf("%d", &len);
    printf("\nEnter %d Numbers:\n", len);
    
    for (int i = 0; i < len; i++)
        scanf("%d", &list[i]);

	merge_sort(list, 0, len - 1);
	
    printf("\n\nResult:\n");
    for(int k = 0; k < len; k++)
        printf("%d  ", list[k]);
    
    printf("\n");

	return 0;
}
