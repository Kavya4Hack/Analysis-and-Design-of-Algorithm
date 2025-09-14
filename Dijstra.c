#include <stdio.h>
#include <limits.h>
#define INF 99999
#define MAX 100

int minDistance(int dist[], int visited[], int V) {
    int min = INT_MAX, min_index = -1;
    for (int v = 0; v < V; v++) {
        if (!visited[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void dijkstra(int graph[MAX][MAX], int V, int src) {
    int dist[MAX], visited[MAX];

    // Initialize
    for (int i = 0; i < V; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }
    dist[src] = 0;

    // Main loop
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, visited, V);
        if (u == -1) break;
        visited[u] = 1;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] != 0 && graph[u][v] != INF
                && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    // Print result like your sample
    printf("Dijkstra Output (from source %d):\n", src);
    printf("Shortest distances: [");
    for (int i = 0; i < V; i++) {
        printf("%d", dist[i]);
        if (i != V - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    int V, src, graph[MAX][MAX];
    
    printf("Enter number of vertices: ");
    scanf("%d", &V);

    printf("Enter adjacency matrix (use %d for no edge):\n", INF);
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter source vertex: ");
    scanf("%d", &src);

    dijkstra(graph, V, src);
    return 0;
}
