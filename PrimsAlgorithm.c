#include <stdio.h>

#define MAX 100
#define INF 999
int graph[MAX][MAX];
int visited[MAX];

int prims(int vertices, int start){

    int minCost = 0;
    int minEdge_Cost = INF;
    int u , v;
    visited[start] = 1;

    for (int count = 0; count < vertices - 1; count++){
        minEdge_Cost = INF;
        
        for (int i = 0; i < vertices; i++){
            if (visited[i]) {
                for (int j = 0; j < vertices; j++){
                    if (graph[i][j] && !visited[j] && graph[i][j] < minEdge_Cost) {
                        minEdge_Cost = graph[i][j];
                        u = i;
                        v = j;
                    }
                }
                
            }
        }
        if (minEdge_Cost == INF) {
            printf("No MST Possible!!\n");
            return -1;
        }
        else {
            visited[v] = 1;
            minCost += minEdge_Cost;
            printf("(%d -> %d) => %d\n" , u , v, minEdge_Cost);
        }
    }
    return minCost;  
}

int main(){
    int vertices, edges, u, v, weight, start = 0;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    for (size_t i = 0; i < vertices; i++){
        visited[i] = 0;
    }
    for (int i = 0; i < vertices; i++){
        for (int j = 0; j < vertices; j++){
            graph[i][j] = 0;
        }
    }
    printf("Enter the Edges: (u,v,weight) \n");
    for (int i = 0; i < edges; i++){
        scanf("%d %d %d", &u, &v, &weight);

        graph[u][v] = weight;
        graph[v][u] = weight;
    }
    int minCost = prims(vertices, start);
    printf("minCost = %d\n", minCost);
    return 0;
}