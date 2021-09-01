#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    int i_row = n - 1; //initial row
    int i_col = 1 - n; // initial column
    
    // i row j column

    for (int i = i_row; i > -n; --i) {
        for (int j = i_col; j < n; ++j) {
            int distancefrom_origin = (abs(i) > abs(j)) ? abs(i) : abs(j); //if absolute of i is greater than j? then choose greater which is i else choose j if greater and assign it to distancefrom_origin
            printf("%d ", distancefrom_origin + 1); //print the distance of absvalue from origin plus 1 because 1 is at 0,0- 2 is at 1,1 or 0,1 or 1,0 which means 2 is always 1 away from center
        }
        puts(""); // space
    }
    
    return 0;
    
}