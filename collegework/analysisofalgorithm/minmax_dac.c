#include<stdio.h>

int min, max;
int list[100];

void maxmin(int x, int y) {
    int max1, min1, mid;

    if (x == y)
        max = min = list[x];
    else {
        if (x == y - 1) {
            if (list[x] < list[y]) {
                max = list[y];
                min = list[x];
            }
            else {
                max = list[x];
                min = list[y];
            }
        }
        else {
            
            mid = (x + y)/2;
            
            maxmin(x, mid);
            max1 = max; 
            min1 = min;

            maxmin(mid + 1, y);

            if (max < max1)
                max = max1;
            
            if (min > min1)
                min = min1;

        }
    }
}

int main()
{
    int len;
    
    printf("\nEnter the number of elements: ");
    scanf("%d", &len);

    printf("\nEnter %d Numbers:\n", len);
    for (int i = 1; i <= len; i++)
        scanf("%d", &list[i]);

    max = list[0];
    min = list[0];

    maxmin(1, len);
    printf("\n Minimum valued element: %d", min);
    printf("\n Maximum valued element: %d\n", max);
    
    return 0;
}
