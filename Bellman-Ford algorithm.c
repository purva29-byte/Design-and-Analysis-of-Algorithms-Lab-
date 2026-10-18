#include <stdio.h>
#include <limits.h>

#define INF INT_MAX

typedef struct {
    int u, v, w;
} Edge;

void printPath(int parent[], int vertex) {
    if (parent[vertex] == -1) {
        printf("%d", vertex);
        return;
    }

    printPath(parent, parent[vertex]);
    printf("->%d", vertex);
}

int main() {
    int V, E;

    scanf("%d", &V);
    scanf("%d", &E);

    Edge edges[E];

    for (int i = 0; i < E; i++) {
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
    }

    int source;
    scanf("%d", &source);

    int dist[V + 1];
    int parent[V + 1];
}
