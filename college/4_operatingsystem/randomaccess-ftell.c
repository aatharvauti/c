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

    printf(" Position pointer in the beginning %ld\n",ftell(fp));
    
    while(fread(&s,sizeof(s),1,fp)==1) {
        printf(" Position pointer %ld\n",ftell(fp));
        printf(" Employee Details in Record: %s\n", s.data);
    }
   
    printf(" Size of file is %ld bytes\n\n",ftell(fp));

    fclose(fp);
}
