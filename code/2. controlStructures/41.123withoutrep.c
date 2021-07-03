#include<stdio.h>  
  
int main()  
{  
    int i, j, k;  
  
    for(i = 1; i <= 3; i++)  // "I" greater than 1 and less than 3
    {  
        for(j = 1; j <= 3; j++)  // Same for "J"
        {  
            for(k = 1; k <= 3; k++)  // and for "K"
            {  
                if( i != j && i != k && j != k)  // where they aren't same (without repetition)
                    printf("%d %d %d\n", i, j, k);  
            }  
        }  
    }  

    return 0;
}