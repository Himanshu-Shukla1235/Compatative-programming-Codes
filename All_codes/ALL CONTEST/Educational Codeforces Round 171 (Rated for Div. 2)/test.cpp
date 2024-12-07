#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    
    cin >> n;

    // Initialize the adjacency matrix with zeros (no edges)
    vector<vector<int>> adjMatrix(n, vector<int>(n, 0));

    int edges;
   
    cin >> edges;

    cout << "Enter edges (start_vertex end_vertex weight):\n";
    for (int i = 0; i < edges; i++) {
        int u, v, weight;
        cin >> u >> v >> weight;

        adjMatrix[u][v] = weight;  // Add weight for directed edge u -> v
        adjMatrix[v][u] = weight;  // Also add for undirected graph (remove this line for directed)
    }

    // Output the adjacency matrix
    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

