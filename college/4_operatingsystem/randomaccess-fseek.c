#include<stdio.h>
#include <stdlib.h>

struct record
{
    char data[38];
}s;
 
int main(void)
{
    
    int n;
    FILE *fp;
    fp = fopen("employee.dat","r");

    if(fp == NULL) {
        exit(EXIT_FAILURE);
    }
    
    printf(" Enter the number of record to be read: ");
    scanf("%d", &n);

    fseek(fp, (n-1)*sizeof(s), 0);
    fread(&s, sizeof(s), 1, fp);

    printf("\n Employee Details in Record [%d]: %s\n", n, s.data);

    fclose(fp);
}
