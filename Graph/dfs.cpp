#include<bits/stdc++.h>
using namespace std;

void DFSRec(vector<int>adj[], int s, bool visited[]){
    visited[s] = true;
    cout<<s<<" ";
    for(int u: adj[s])
    if(visited[u]==false)
    DFSRec(adj,u, visited);
}

void DFS(vector<int>adj[], int V, int s){
    bool visited[V];
    for(int i=0; i<V; i++)
        visited[i]=false;
        DFSRec(adj, s, visited);
}



//if disconneted graphs
/*void */ int DFS(vector<int>adj[], int V){
    bool visited[V];
    int count = 0;
    for(int i=0; i<V; i++)
        visited[i]=false;
    for (int i = 0; i < V; i++)
    if(visited[i] ==false) {
        DFSRec(adj, i, visited);
        count++;
    }
    return count;
}


//Applications of DFS
/******
 * 1. cycle detection
 * 2. topological sorting
 * 3. strongly connected components   kosaraju and tarzan algorithm
 * 4. solving maze ans similar Puzzles
 * 5. Path Finding
 * */

/*
Time compelxity
O(v+e)
*/