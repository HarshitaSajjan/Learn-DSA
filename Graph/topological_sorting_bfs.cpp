#include<bits/stdc++.h>
using namespace std;
// this can have two solution one based on bfs and other on dfs
/**** BFS based Solution(Kahn's Algorithm)
 * can  also be used for cycle detection in directed graph
 * store indegree of every vertex  --> array indeg of size V
 * create a queue,q 
 * add all 0 indegree vertices to the q
 * // count=0;
 * while(q is not empty){
 * u = q.pop();
 * print u
 * for every  adjacent v of u
 * reduce indegreee of v  by one
 * if indegree of v becomes zero , add v to the q
 * // count++;
 * }
 * return (count!=v)
 * if count == v then it is acyclic
*/

vector<int>topoSort(vector<int>adj[], int V){
    int indegree[V] = {0};
    for(int i=0; i<V; i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }
    queue<int>q;
    for(int i=0; i<V; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    vector<int>topo;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        topo.push_back(node);

        for(auto it : adj[node]){
            indegree[it]--;
            if(indegree[it] == 0)
            q.push(it);
        }
    }
    return topo;
}

int main() {
    int V = 6;
    vector<int> adj[6] = {{1, 2}, {3}, {3}, {4, 5}, {}, {}};
    vector<int> result = topoSort(adj, V);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}

//Detect cycle in directed graph using kahns algorithm
#include<bits/stdc++.h>
using namespace std;

bool isCyclic(vector<int> adj[], int V) {
    vector<int> indegree(V, 0);
    for (int i = 0; i < V; ++i) {
        for (auto it : adj[i]) {
            indegree[it]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < V; ++i) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    int count = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        count++;
        for (auto v : adj[u]) {
            indegree[v]--;
            if (indegree[v] == 0) {
                q.push(v);
            }
        }
    }

    return count != V;
}

int main() {
    vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
    int V = 6;
    if (isCyclic(adj, V))
        cout << "Graph contains cycle\n";
    else
        cout << "Graph doesn't contain cycle\n";

    return 0;
}



/**
 * Time Complexity : O(V+E)
 * of Kahn's algorithm
 * 
 */