#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void quickSort(int *ar, int size)
{
    if(size > 1) {
        int tmp, piv = ar[0], r_idx = size-1;
        
        for(int i = size-1; i >= 0; --i) {
            if(ar[i] >= piv) {
                tmp = ar[i];
                int j = i;

                while(j < r_idx) {
                    ar[j] = ar[j+1];
                    ++j;
                }

                ar[r_idx--] = tmp;
            }
        }
        ++r_idx;
        quickSort(ar, r_idx);
        quickSort(ar+r_idx+1, size-r_idx-1);
    
        for(int i = 0; i < size; ++i)
            printf("%d ", ar[i]);
        printf("\n");
    }
}


int main(void)
{
    int n;
    scanf("%d", &n);
    int ar[n];
    
    for(int i = 0; i < n; i++)
        scanf("%d", &ar[i]); 
    
    quickSort(ar, n);
    
    return 0;
}