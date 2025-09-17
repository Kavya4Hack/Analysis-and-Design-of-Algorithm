#include <stdio.h>
#define MAX 100

int adjMatrix[MAX][MAX];
int visited[MAX];
int queue[MAX];
int front = -1, rear = -1;

void BFS(int node, int vertices){
    visited[node] = 1;
    queue[++rear] = node;
    while (front < rear){
        int currentNode = queue[++front];
        printf("%d ", currentNode);

        for (int i = 0; i < vertices; i++){
            if (adjMatrix[currentNode][i] == 1 && !visited[i]){
                visited[i] = 1;
                queue[++rear] = i;
            }
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
    printf("BFS (Breadth First Search) Traversal: ");
    BFS(start, vertices);
    return 0;
}