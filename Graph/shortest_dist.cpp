#include<bits/stdc++.h>
using namespace std;
vector<int>  shortDist(int s, vector<int>adj[], vector<bool>& visited){
    int V = adj->size();
    vector<int>dist(V, INT_MAX);
    queue<int>q;
    fill(visited.begin(), visited.end(), false); 
     visited[s]= true;
    dist[s]=0;
        q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v : adj[u]){
            if(!visited[v]){
                dist[v] = dist[u]+1;
                visited[v]= true;
                q.push(v);
            }
        }
    }
    return dist;
}
int main() {
    // Example usage
    int V = 5;
    vector<int> adj[V];
    adj[0] = {1, 2};
    adj[1] = {2};
    adj[2] = {3};
    adj[3] = {4};
    vector<bool> visited(V); // Size of visited array is V, initialized with false by default
    vector<int> distances = shortDist(0, adj, visited);
    for (int i = 0; i < V; ++i) {
        cout << "Distance from 0 to " << i << " is: " << distances[i] << endl;
    }
    return 0;
}


/*****
 * Initialize dist[V] = {inf, inf ...}
 * dist[s]=0
 * create a queue q
 * initialise visited[v] = {false,false}
 * q.push(s)
 * visited[s]  = true;
 * while(!q.empty())
 * u= q.front
 * q.pop()
 * for every adjacent v of u
 * if visited[v] ==false)
 * dist[v] = dist[u]+1
 * visitied[v] = true
 * q.push(v)
 * 
 * print dist[]
*/

/*TC = O(V+E) + O(V) = O(V+E)   same as bfs */


