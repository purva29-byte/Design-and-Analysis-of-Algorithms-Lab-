#include <limits.h> 
#include <stdio.h>
#define MAX 20
int V, E;
int graph[MAX][MAX];
#define INFINITY 99999

void dijkstra(int G[MAX][MAX], int n, int startnode) {
	
    int distance[MAX];
    int pred[MAX];
    int visited[MAX];
    int count, min_distance, nextnode, i, j;

    // Initialize distance matrix, predecessor, and visited arrays
    for (i = 1; i <= n; i++) {
        distance[i] = INFINITY;
        pred[i] = -1;
        visited[i] = 0;
    }

    // Initialize start node
    distance[startnode] = 0;
    count = 0;

    while (count < n) {
        min_distance = INFINITY;
        nextnode = -1;

        // Choose the unvisited node with the minimum distance
        for (i = 1; i <= n; i++) {
            if (!visited[i] && distance[i] < min_distance) {
                min_distance = distance[i];
                nextnode = i;
            }
        }
} 
