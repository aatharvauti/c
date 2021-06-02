#include<stdio.h>

int main()
{
    float marks;

    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks <= 39) {
        printf ("Fail\n");
    }
    else if (marks <= 49) {
        printf ("Third Division\n");
    }
    else if (marks <= 59) {
        printf ("Second Division\n");
    }
    else if (marks <= 79) {
        printf ("First Division\n");
    }
    else if (marks <= 100) {
        printf ("Honours\n");
    }
    else {
        printf ("Enter between a specfic range (0-100)\n");
    }

    return 0;
}