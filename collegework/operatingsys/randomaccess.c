#include<stdio.h>

int f[50], i, k, j, inde[50], n, c, count=0, p;

int main() 
{

    for(i = 0; i < 50; i++)
        f[i] = 0;

    x:
        printf(" Enter index block: ");
        scanf("%d", &p);
    
    if(f[p] == 0)
    {
        f[p] = 1;
        printf(" Enter number of files on index: ");
        scanf("%d", &n);
    }
    else {
        printf(" Block already allocated\n");
        goto x;
    }

    printf(" Enter values: \n");
    for(i = 0; i < n; i++)
        scanf("%d", &inde[i]);

    for(i=0;i<n;i++)
        if(f[inde[i]] == 1)
        {
            printf(" ERR: Block already allocated");
            goto x;
        }
    
    for(j = 0; j < n; j++)
        f[inde[j]] = 1;

    printf("\n Allocated: ");
    printf("\n File indexed: ");

    for(k = 0; k < n; k++)
        printf("\n%d -> %d:%d", p, inde[k], f[inde[k]]);

    printf(" Press 1 to enter more files \n 0 to exit\t");
    scanf("%d", &c);

    if(c == 1)
        goto x;
    else
        return(0);
}