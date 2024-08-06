#include<bits/stdc++.h>
using namespace std;
/*****
 * Create an empty stack st
 * for every vertex u do following
 * if(u is not visited)
 * DFS(u,st)
 * while(st is not empty)
 * pop an item from st and print it
 * 
 * DFS(u, st)
 * mark u as visited
 * for every adjacent v of u
 * if(v is not visited)
 * DFS(v, st)
 * push u to st
*/

void DFS(int source, int visited[], stack<int>&st, vector<int>adj[]){
    visited[source] = 1;
    for( auto it : adj[source]){
        if(!visited[it]) DFS(it , visited, st, adj);
    }
    st.push(source);
}

vector<int>topoSort(int V, vector<int>adj[]){
    int visited[V] = {0};
    stack<int>st;
    for(int i =0; i<V; i++){
        if(!visited[i]){
            DFS(i, visited, st, adj);
        }        
    }  
    vector<int>ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
int main() {
    int V = 6;
    vector<int> adj[6] = {{1, 2}, {3}, {3}, {4, 5}, {}, {}};
    vector<int> result = topoSort(V, adj);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}

/**
 * Time complexity same as dfs 
 * + extra is stack creation, pushing vertices into the stack and taking them out and printing
 * = + O(1) + + O(V)
 * overall= O(V+E)
 * 
 * 
 */