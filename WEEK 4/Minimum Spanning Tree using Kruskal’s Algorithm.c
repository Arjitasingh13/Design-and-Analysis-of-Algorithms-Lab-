#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void kruskalMST(int **cost, int V) {

	// Write your code here...
int parent[100];

    // Initialize each vertex as its own parent
    for (int i = 0; i < V; i++)
        parent[i] = i;

    int edges = 0, minCost = 0;

    while (edges < V - 1) {
        int min = INT_MAX;
        int u = -1, v = -1;

        // Find the minimum edge (upper triangular only)
        for (int i = 0; i < V; i++) {
            for (int j = i + 1; j < V; j++) {
                if (cost[i][j] < min) {
                    min = cost[i][j];
                    u = i;
                    v = j;
                }
            }
        }
 int ru = u;
        while (parent[ru] != ru)
            ru = parent[ru];

        int rv = v;
}
