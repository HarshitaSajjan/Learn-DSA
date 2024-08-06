#include<bits/stdc++.h>
using namespace std;

// Detect cycle in Directed Graph
bool DFSRec(vector<vector<int>>adj, int s, vector<bool>&visited, vector<bool>&RecSt){
    visited[s] = true;
    RecSt[s] = true;
    for(auto u : adj[s]){
        if(visited[u]==false && DFSRec(adj,u,visited,RecSt))
        return true;
        else if(RecSt[u] == true)
        return true;
    }
    RecSt[s] = false;
    return false;
}
bool DFS(vector<vector<int>>adj, int V){
    vector<bool>visited(V, false);
    vector<bool>RecSt(V, false);
    for(int i =0 ; i<V; i++)
    if(visited[i] == false)
        if(DFSRec(adj, i, visited, RecSt))
            return true;
    return false;
}
int main() {
    int V, E;
    cin >> V >> E; // Number of vertices and edges

    vector<vector<int>> adj(V);

    // Input the edges
    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); // Adding edge u->v
    }

    if (DFS(adj, V))
        cout << "Graph contains cycle\n";
    else
        cout << "Graph doesn't contain cycle\n";

    return 0;
}


/*Pseuodo Code*//*
DFSRec(adj, s, visited[], recst[]){
    visited[s] =true;
    recst= true;
    for every adj u pf s{
        if(visited[u]==false && DFSRec (adj, u, visited, recst))
        return true;
        else if(recst[u] -= true)
        return trye;
        recst[s] =false;
        return false;
    }

}
DFS(adj, V){
    visited[v] = {false, false....}
    resct[v]={false, false}
    for(int i=0; i<V; i++)
    if(visited[i]==false)
    if DFSRec(adj,i, visited, recst==true)
    return true;

return false;
}
*/