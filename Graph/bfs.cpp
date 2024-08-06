#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int>adj[], int V, int s){
    bool visited[V+1];
    for(int i=0; i<V; i++)
        visited[i] =false;
        queue<int>q;
        visited[s]=true;
        q.push(s);
        while(q.empty() ==false){
            int u = q.front();
            q.pop();
            cout<<u<<" ";
            for(int v : adj[u]){
                if(visited[v] ==false){
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
}



//disconnected graph and source node is not given

void BFS(vector<int>adj[], int s, bool visited[]){
    queue<int>q;
    visited[s] = true;
    q.push(s);
    while(q.empty() ==false){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int v : adj[u]){
            if(visited[v] == false){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

/*void*/ int BFSDis(vector<int>adj[] , int V){
    bool visited[V+1];
    int count =0;
    for(int i=0; i<V; i++)
    visited[i] = false;
    for(int i =0; i<V; i++)
    if(visited[i]==false) 
    BFS(adj, i, visited);
    count++;
    return count;
}

/* above question is number of islands*/
/**********
 * Application of BFS
 * 1. shortest path in an weight graph
 * 2. crawlers in search engines
 * 3. peer to peer networks
 * 4. social networking search
 * 5. in garbage collection(cheney's algorithm)
 * 6. cycle detection
 * 7. ford fulkerson algorithm
 * 8. broadcasting
*/



/**
 * O(v+e)
 * 
 */