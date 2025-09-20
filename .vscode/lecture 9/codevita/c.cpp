#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

// Function to find shortest path from a location to office using Dijkstra's algorithm
vector<int> findShortestPath(int source, int M, vector<vector<int>>& graph) {
    vector<int> dist(M, INF);
    vector<int> parent(M, -1);
    vector<bool> visited(M, false);
    
    dist[source] = 0;
    
    for(int i = 0; i < M; i++) {
        int minDist = INF;
        int u = -1;
        
        // Find vertex with minimum distance
        for(int j = 0; j < M; j++) {
            if(!visited[j] && dist[j] < minDist) {
                minDist = dist[j];
                u = j;
            }
        }
        
        if(u == -1) break;
        visited[u] = true;
        
        // Update distances of adjacent vertices
        for(int v = 0; v < M; v++) {
            if(!visited[v] && graph[u][v] != 0 && 
               dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }
    
    // Construct path from source to office (0)
    vector<int> path;
    int current = 0;  // office
    while(current != -1) {
        path.push_back(current);
        current = parent[current];
    }
    reverse(path.begin(), path.end());
    return path;
}

int main() {
    int M;
    cin >> M;
    
    // Read distance matrix
    vector<vector<int>> graph(M, vector<int>(M));
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < M; j++) {
            cin >> graph[i][j];
        }
    }
    
    // Read number of employees at each location (excluding office)
    vector<int> employees(M, 0);
    for(int i = 1; i < M; i++) {
        cin >> employees[i];
    }
    
    // Read bus capacity
    int busCapacity;
    cin >> busCapacity;
    
    // Find shortest paths from each location to office
    vector<vector<int>> paths;
    for(int i = 1; i < M; i++) {
        paths.push_back(findShortestPath(i, M, graph));
    }
    
    // Calculate minimum buses needed
    int totalBuses = 0;
    vector<int> remainingEmployees = employees;
    
    // For each location (starting from farthest)
    for(int i = 1; i < M; i++) {
        while(remainingEmployees[i] > 0) {
            int currentCapacity = busCapacity;
            vector<int> path = findShortestPath(i, M, graph);
            
            // Try to fill bus along the path
            for(int loc : path) {
                int canTake = min(currentCapacity, remainingEmployees[loc]);
                remainingEmployees[loc] -= canTake;
                currentCapacity -= canTake;
            }
            
            totalBuses++;
        }
    }
    
    cout << totalBuses << endl;
    return 0;
}
