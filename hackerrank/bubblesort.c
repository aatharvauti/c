#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {

    // Sort an array a of the length n
    int *p=malloc(n*sizeof(int)); 
    
    //create array of size n to store area
    for(int i = 0; i < n; i++) {
        float a = (tr[i].a + tr[i].b + tr[i].c)/2.0; //2.0 since float
        p[i]= (a * (a - tr[i].a) * (a - tr[i].b) * (a - tr[i].c));
    }
    // this was the formula in the question (Heron)
    
    // sort in ascending order of areas
    // popular method known as bubble sort
    for(int i = 0; i < n; i++)    
    {
        for(int j = 0; j < (n - i - 1); j++)
        {
            if(p[j]>p[j+1])     
            {
                int temp=p[j];
                
                p[j] = p[j+1]; // first p
                
                p[j+1]=temp; // assign it to temp

                temp = tr[j].a; // now temp to a[j]
                
                tr[j].a=tr[j+1].a; // a[j] to a[j+1]
                
                tr[j+1].a = temp; // a[j+1] to temp
                
                temp=tr[j].b; // repeat for other vars, this is called bubble sort
                
                tr[j].b=tr[j+1].b;
                
                tr[j+1].b=temp;
                
                temp=tr[j].c;
                
                tr[j].c=tr[j+1].c;
                
                tr[j+1].c=temp;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}