#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int rank[MAX];
int parent[MAX];

typedef struct {
    int src , dest , weight;
} Edge;

Edge edgeList[MAX];

int find(int v) {
    if (parent[v] != v)
        parent[v] = find(parent[v]);
    return parent[v];
}

int unionSets(int u , int v) {
    int rootU = find(u);
    int rootV = find(v);

    if (rootU != rootV) {

        if (rank[rootU] > rank[rootV]) {
            parent[rootV] = rootU;
        }
        else if (rank[rootV] > rank[rootU]) {
            parent[rootU] = rootV;
        }
        else {
            parent[rootV] = rootU;
            rank[rootU]++;
        }
    }
}

int cmp(const void *a , const void *b) {
    Edge *e1 = (Edge *)a;
    Edge *e2 = (Edge *)b;
    return e1 -> weight - e2 -> weight;
}
int kruskal(int vertices , int edges) {
    for (int i = 0; i < vertices; i++){
        parent[i] = i;
        rank[i] = 0;
    }
    int minCost = 0 , edgeCount = 0;
    qsort(edgeList , edges , sizeof(Edge) , cmp);

    for (int i = 0; i < edges && edgeCount < vertices; i++){
        int src = edgeList[i].src;
        int dest = edgeList[i].dest;
        int weight = edgeList[i].weight;

        if (find(src) != find(dest)) {

            unionSets(src ,dest);
            minCost += weight;
            edgeCount++;
            printf("(%d -> %d) => %d\n" , src ,dest , weight);
        }
    }
    return minCost;
    
}

int main() {
    int vertices, edges, u, v, weight;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter the number of edges: ");
    scanf("%d", &edges);
    printf("Enter the edges: ");
    for (int i = 0; i < edges; i++){
        scanf("%d %d %d", &u, &v, &weight);
        edgeList[i].src = u;
        edgeList[i].dest = v;
        edgeList[i].weight = weight;
    }
    int minCost = kruskal(vertices, edges);
    printf("MinCost = %d ", minCost);

    return 0;
}