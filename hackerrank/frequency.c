#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int* num = (int*) malloc(10 * sizeof(int)); // allocate on heap
    char c;
    
    scanf("%s", &s);

    for(int i = 0; i < 10; i++){
        *(num + i) = 0; // *(num+i) means num[i], we are setting value 0 for first 10 elements
    }
    
    while (scanf(" %c", &c) == 1) { //https://stackoverflow.com/questions/2970880/using-scanf-in-a-while-loop
        if (c >= '0' && c <= '9'){
            (*(num +(c - '0')))++; // * (num + i) where i is c - '0' and num array index is incremented
        }
    }
    
    for (int i = 0; i < 10; i++){
        printf("%d ", *(num + i)); // print each element of num array
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
