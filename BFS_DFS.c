#include <stdio.h>

#define MAX_VERTICES 100

// Global variables
int graph[MAX_VERTICES][MAX_VERTICES]; // Adjacency matrix
int visited[MAX_VERTICES];             // Visited array
int queue[MAX_VERTICES];               // Queue for BFS
int front = -1, rear = -1;             // Queue pointers

// Adds an undirected edge between nodeA and nodeB
void connectNodes(int nodeA, int nodeB) {
    graph[nodeA][nodeB] = 1;
    graph[nodeB][nodeA] = 1;
}

// Depth-First Search (recursive)
void depthFirstSearch(int vertex, int totalVertices) {
    visited[vertex] = 1;
    printf("%d ", vertex);

    for (int i = 0; i < totalVertices; i++) {
        if (graph[vertex][i] == 1 && visited[i] == 0) {
            depthFirstSearch(i, totalVertices);
        }
    }
}

// Queue operations for BFS
void enqueue(int val) {
    if (rear == MAX_VERTICES - 1)
        return;
    if (front == -1)
        front = 0;
    queue[++rear] = val;
}

int dequeue() {
    if (front == -1 || front > rear)
        return -1;
    return queue[front++];
}

// Breadth-First Search (iterative)
void breadthFirstSearch(int startVertex, int totalVertices) {
    for (int i = 0; i < totalVertices; i++)
        visited[i] = 0;

    front = rear = -1;
    enqueue(startVertex);
    visited[startVertex] = 1;

    while (front <= rear) {
        int current = dequeue();
        printf("%d ", current);

        for (int i = 0; i < totalVertices; i++) {
            if (graph[current][i] == 1 && visited[i] == 0) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int numVertices, numEdges;
    int vertexA, vertexB;
    int startingVertex;

    printf("Enter the total number of vertices: ");
    scanf("%d", &numVertices);

    printf("Enter the total number of edges: ");
    scanf("%d", &numEdges);

    printf("Enter each edge (vertex1 vertex2):\n");
    for (int i = 0; i < numEdges; i++) {
        scanf("%d %d", &vertexA, &vertexB);
        connectNodes(vertexA, vertexB);
    }

    printf("Enter the starting vertex: ");
    scanf("%d", &startingVertex);

    // DFS Traversal
    for (int i = 0; i < numVertices; i++)
        visited[i] = 0;

    printf("\nDFS Traversal:\n");
    depthFirstSearch(startingVertex, numVertices);

    // BFS Traversal
    printf("\n\nBFS Traversal:\n");
    breadthFirstSearch(startingVertex, numVertices);

    return 0;
}


#include <stdio.h>

#define MAX 10

int adj[MAX][MAX];   // adjacency matrix
int visited[MAX];    // visited array

// Queue for BFS
int queue[MAX], front = -1, rear = -1;

// Function to add an element to queue
void enqueue(int v) {
    if (rear == MAX - 1)
        return;
    if (front == -1)
        front = 0;
    queue[++rear] = v;
}

// Function to remove element from queue
int dequeue() {
    if (front == -1 || front > rear)
        return -1;
    return queue[front++];
}

// BFS traversal
void BFS(int start, int n) {
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    enqueue(start);
    visited[start] = 1;

    printf("BFS Traversal: ");

    while (front <= rear) {
        int v = dequeue();
        printf("%d ", v);

        for (int i = 0; i < n; i++) {
            if (adj[v][i] == 1 && visited[i] == 0) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

// DFS traversal (recursive)
void DFS(int v, int n) {
    visited[v] = 1;
    printf("%d ", v);

    for (int i = 0; i < n; i++) {
        if (adj[v][i] == 1 && visited[i] == 0) {
            DFS(i, n);
        }
    }
}

int main() {
    int n, edges, u, v, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    // Initialize adjacency matrix
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            adj[i][j] = 0;

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges (u v):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d%d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1; // remove this line if directed graph
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);
    // print("\n");

    // BFS
    BFS(start, n);

    // DFS
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    printf("DFS Traversal: ");
    DFS(start, n);
    printf("\n");

    return 0;
}
