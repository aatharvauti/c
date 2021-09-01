#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n; 
    float sum = 0;
    
    scanf("%d", &n); // Number of elements in Array
    
    int *arr = (int*)calloc(n, sizeof(int));
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    printf("%.2f", sum/n);
    
    //free(arr);
    
    return 0;
}
