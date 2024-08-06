#include<bits/stdc++.h>
using namespace std;

bool DFSRec(vector<int> adj[], int s, vector<bool>& visited, int parent) {
    visited[s] = true;
    for (int v : adj[s]) {
        if (!visited[v]) {
            if (DFSRec(adj, v, visited, s))
                return true;
        } else if (v != parent) {
            return true;
        }
    }
    return false;
}

bool DFS(vector<int> adj[], int V) {
    vector<bool> visited(V, false);
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (DFSRec(adj, i, visited, -1))
                return true;
        }
    }
    return false;
}

int main() {
    
    // V = 4, E = 21.02
    vector<int> adj[4] = {{}, {2}, {1, 3}, {2}};
    bool ans = DFS(adj, 4);
    if (ans)
        cout << "1\n";
    else
        cout << "0\n";
    return 0;
}