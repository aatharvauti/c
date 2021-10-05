#include<stdio.h>
#include<string.h>

void concatenate(char[], char[], char[]);

int main()
{
	char s1[30], s2[30], s3[30];

	printf("First name: ");
	gets(s1);

	printf("Middle name:");
	gets(s2);

	printf("Last name:");
	gets(s3);

	concatenate(s1, s2, s3);
	printf("Concatenated String: %s\n", s1);

	return 0;

}

void concatenate(char s1[], char s2[], char s3[])
{

   int i, j;

    i = strlen(s1);
    for (j = 0; s2[j] != '\0'; i++, j++) 
        s1[i] = s2[j];
    
    i = strlen(s1);
    for(j = 0; s3[j] != '\0'; i++, j++)
        s1[i] = s3[j];
    
    s1[i] = '\0';
}