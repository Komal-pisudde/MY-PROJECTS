#include <stdio.h>

#define MAX 20

int graph[MAX][MAX];
int visited[MAX];
int n;

void DFS(int vertex) {
    int i;
    printf("%d ", vertex);
    visited[vertex] = 1;

    for (i = 0; i < n; i++) {
        if (graph[vertex][i] == 1 && visited[i] == 0) {
            DFS(i);
        }
    }
}

int main() {
    int i, j, start;

    // Header details from screenshot
    printf("Name:KOMAL PISUDDE \n");
    printf("Roll No: 20\n");

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("\nEnter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    // Initialize visited array
    for (i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("\nEnter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    printf("\nDFS Traversal: ");
    DFS(start);
    printf("\n");

    return 0;
}