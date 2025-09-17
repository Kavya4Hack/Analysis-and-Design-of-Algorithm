#include <stdio.h>
#define MAX 100

int adjMatrix[MAX][MAX];
int visited[MAX];

void DFS(int node, int vertices){
    visited[node] = 1;
    printf("%d ", node);
    for (int i = 0; i < vertices; i++){
        if (adjMatrix[node][i] == 1 && !visited[i]){
            DFS(i, vertices);
        }
    }
}
int main(){
    int vertices, edges, u, v, start = 0;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    // Initialize adjacency matrix
    for (int i = 0; i < vertices; i++){
        for (int j = 0; j < vertices; j++){
            adjMatrix[i][j] = 0;
        }
    }
    printf("Enter the edges (u v): \n");
    for (int i = 0; i < edges; i++){
        scanf("%d %d", &u, &v);
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    }
    for (int i = 0; i < vertices; i++){
        visited[i] = 0;
    }
    printf("DFS (Depth First Search) Traversal: ");
    DFS(start, vertices);
    return 0;
}