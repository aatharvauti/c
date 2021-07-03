#include<stdio.h>  
  
int main()  
{  
    int i, j, k;  
  
    for(i = 65; i <= 67; i++)  // "I" greater than 1 and less than 3
    {  
        for(j = 65; j <= 67; j++)  // Same for "J"
        {  
            for(k = 65; k <= 67; k++)  // and for "K"
            {  
                if( i != j && i != k && j != k)  // where they aren't same (without repetition)
                printf("%c %c %c\n", i, j, k);  
            }  
        }  
    }  

    return 0;
}