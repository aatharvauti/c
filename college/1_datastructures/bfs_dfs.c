#include <stdio.h>
#define MAX 4

void breadth_first_search(int adj[][MAX],int visited[],int start)
{
    int queue[MAX],rear = -1, front =- 1, i;

    queue[++rear] = start;
    visited[start] = 1;
    
    while(rear != front) {
        
        start = queue[++front];

        if(start == 4)
            printf("5 ");
        else
            printf("%c -> ",start + 65);

        for(i = 0; i < MAX; i++) {
            if(adj[start][i] == 1 && visited[i] == 0) {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

void depth_first_search(int adj[][MAX],int visited[],int start)
{
    int stack[MAX];
    int top = -1, i;

    printf("%c -> ",start + 65);
    
    visited[start] = 1;
    stack[++top] = start;

    while(top != -1)
    {
        start = stack[top];
        
        for(i = 0; i < MAX; i++) {
            
            if(adj[start][i] && visited[i] == 0) {
                stack[++top] = i;
                printf("%c -> ", i + 65);
                visited[i] = 1;
                break;
            }
        }

        if(i == MAX)
            top--;
    }
}
int main()
{
    int adj[MAX][MAX];
    int visited[MAX] = {0}, i, j, choice;
    
    printf("\nEnter the adjacency matrix: \n");
    
    for(i = 0; i < MAX; i++)
        for(j = 0; j < MAX; j++)
            scanf("%d", &adj[i][j]);

    printf("\nSelect an Option:\n1. Breadth First Search\n2. Depth First Search\n");
    scanf("%d", &choice);
    
    switch (choice)
    {
        case 1:
            printf("BFS Traversal: ");
            breadth_first_search(adj,visited,0);
            break;

        case 2:
            printf("DFS Traversal: ");
            depth_first_search(adj,visited,0);
            break;
        
        default:
            printf("ERR: Please enter a valid choice\n");
            break;
    }            

    printf("\n");

    return 0;
}