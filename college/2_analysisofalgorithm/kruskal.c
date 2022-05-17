#include<stdio.h>
#include<stdlib.h>

int a, b, i, j, k, n, x, y, s = 1;
int min, mincost = 0, cost[15][15], parent[15];
int find (int);
int unit (int, int);

int main () {

    printf ("\nEnter the No. of Vertices: ");
    scanf ("%d", &n);
    
    printf ("\nEnter the cost of Adjacency Matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf ("%d", &cost[i][j]);
            if (cost[i][j] == 0) { 
                cost[i][j] == 500;
            }
        }
    }

    printf("\nThe edge of minimum cost tree is: ");

    while (s < n) {
    
        for (i = 1; min = 500, i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (cost[i][j] < min) {
                    min = cost[i][j];
                    a = x = i;
                    b = y = j;
                }
            }
        }
 
        x = find (a);
        y = find (b);
 
        if (unit (x, y)) {
            printf ("\n%d edge (%d, %d): %d", s++, a, b, min);
            mincost += min;
        }
        cost[a][b] = cost[b][a] = 500;
    }
    printf ("\nMinimum cost: %d\n", mincost);

}

int find (int i) {
    while (parent[i])
    i = parent[i];
    return i;
}

int unit (int i, int j)
{
    if (i != j) { 
        parent[j] = i;
        return 1; 
    }
    return 0; 
}