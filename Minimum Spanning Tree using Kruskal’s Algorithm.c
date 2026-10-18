#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define INF 9999 
typedef struct{
int u,v,weight;
} Edge;
typedef struct{
int parent;
} Subset;
int find(Subset subsets[],int i){
	if (subsets[i].parent != i)
		subsets[i].parent = find(subsets, subsets[i].parent);
	return subsets[i].parent;
}
void Union(Subset subsets[],int x, int y){
	int xroot = find(subsets, x);
	int yroot = find(subsets, y);
	subsets[xroot].parent = yroot;
}
void kruskalMST(int **cost, int V) {

	int edgeCount = 0;
	for (int i = 0; i < V; i++) {
		for (int j = i + 1; j < V; j++){
		if(cost[i][j] != 0 && cost[i][j] != INF){
			edgeCount++;
		}
	}
}
Edge *edges = (Edge *)malloc(edgeCount * sizeof(Edge));
int k = 0;
for (int i = 0; i < V; i++){
	for(int j = i + 1; j < V; j++){
		if (cost[i][j] != 0 && cost[i][j] != INF){
			edges[k].u = i;
}
