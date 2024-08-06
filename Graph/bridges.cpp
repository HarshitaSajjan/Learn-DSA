#include<bits/stdc++.h>
using namespace std;

/***
 * given undirected and connected graph
 * need to find bridges in it
 * bridges is an edge if remove that edge then number of connected componenets increases
 * 
 * 
 * discovery time:: time acc to which visit the vertices
 * low value: lowest discovery time rechable through vertex
 * 
 * u-v
 * if (low[v]>dis[u])
 * 
 * 
 * TC O(V+E)
 * if disconnected graph then alsowe can run this using the dfs 
 * back edges can never be bridges as they will connect to the ancestors
 * not considering two way edges, only tree edges(directionality)
*/

void dfs(int node, int parent, vector<int>&vis, vector<int>adj[], int time[], int low[], vector<vector<int>>& bridges){
    int timer;
    vis[node]=1;
    time[node]=low[node] = timer;
    timer++;
    for(auto it: adj[node]){
        if(it==parent)continue;
        if(vis[it]==0){
            dfs(it, node, vis, adj, time, low, bridges);
            low[node]= min(low[it], low[node]);
            if(low[it]>time[node]){
                bridges.push_back({it, node});
            }
        }
        else{
            low[node] = min(low[node], low[it]);
        }
    }
}

vector<vector<int>>criticalConnections(int n, vector<vector<int>>& connections){
    vector<int>adj[n];
    for(auto it: connections){
        int u = it[0];
        int v= it[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>vis(n,0);
    int time[n];
    int low[n];
    vector<vector<int>>bridges;
    dfs(0,-1, vis, adj, time, low, bridges);
    return bridges;
}

int main() {    

    int n = 4;
    vector<vector<int>> connections = {
        {0, 1}, {1, 2},
        {2, 0}, {1, 3}
    };

    Solution obj;
    vector<vector<int>> bridges = obj.criticalConnections(n, connections);
    for (auto it : bridges) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;
    return 0;
}

/*
Time Complexity: O(V+2E), where V = no. of vertices, E = no. of edges. It is because the algorithm is just a simple DFS traversal.

Space Complexity: O(V+2E) + O(3V), where V = no. of vertices, E = no. of edges. O(V+2E) to store the graph in an adjacency list and O(3V) for the three arrays i.e. tin, low, and vis, each of size V.
*/