// Bitwise Operators

// You will be given Interger 'n',Threshold 'k'.
// For each number i from 1 through n,
// find the maximum value of logical AND OR XOR, 
// less than Threshold 'k'

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    
    int AND = 0, OR = 0, XOR = 0;

    for (int i = 1; i <= n; i++){
        for (int j = i + 1; j <= n; j++) {
            if(((i&j) > AND) && ((i&j) < k))
                AND = i&j;
            if(((i|j) > OR) && ((i|j) < k))
                OR = i|j;
            if(((i^j) > XOR) && ((i^j) < k))
                XOR = i^j;
        }
    }
    
    printf("%d\n", AND);
    printf("%d\n", OR);
    printf("%d\n", XOR);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
