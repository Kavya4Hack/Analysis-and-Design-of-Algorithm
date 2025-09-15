#include <stdio.h>
#include <stdbool.h>

int n, i, j, visited[10];
int adj[10][10];

void bfs(int v)
{	
    int que[20];
    int front = 0, rear = 0;
    que[rear] = v;
    visited[v] = true;
    printf("%d", v);

    while (front <= rear)
    {
        v = que[front++];
        for (i = 1; i <= n; i++)
        {
            if (adj[v][i] == 1 && !visited[i])
            {
                printf("%d", i);
                visited[i] = true;
                que[++rear] = i;
            }
        }
    }
}
int main()
{
    int v;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter graph data in matrix form:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &adj[i][j]);

    for (i = 1; i <= n; i++)
        visited[i] = false;

    printf("Enter the starting vertex: ");
    scanf("%d", &v);

    bfs(v);

    return 0;
}
