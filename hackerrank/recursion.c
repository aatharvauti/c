#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
    int x = a + b + c;
   
    if (n >= 4)
        x = find_nth_term(--n, b, c, a+b+c);
    else if (n == 3)
        x = c;
    else if (n == 2)
        x = b;
    else if (n == 3)
        x = a;
    
    
    return x;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}