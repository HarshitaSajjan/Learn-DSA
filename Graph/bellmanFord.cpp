#include<bits/stdc++.h>
using namespace std;
/**given graph and source vertex
 * need to find shortest vertex to every other vertex
 * shortest path
 * 1. bfs O(V+E) unweighted graph (paht with min no. of edges)
 * 2. topological O(V+E)  directed and acyclice graph
 * 3. dijkstra for both directed and undirected and may contain cycle but wont wokr if graph has negative weigth edge
 * 4. bellman ford single source shortest path works when negative weights also
 * 
 * 
 * Idea: we first find shortest path that are of  edge length one, then shortest path of edge length two and so on...
 * 
 * Algorithm: we relax all edges V-1 times
 * ifd[v]>d[u]+wt(u,v)
 * d[v]=d[u]+wt(u,v)
 * 
 * 
 * 
 * d[v]={inf,inf,inf....}
 * d[s]=0;
 * for(count=0; count<(V-1); count++)
 * for evry edge(u,v)
 * if(d[v]>d[u]+wt(u,v))
 * d[v]=d[u]+wt(u,v)
 * 
 * 
 * TC O(VE)
*//***
negative weight cycle
*
*shortest dist = -inf, as we keep on iterating in cycle


for every edge(u,v)
if(d[v]>d[u]+wt(u,v))
print("negative weight cycle found")


*/
/***
 * dijsktra faster than bellamn but cant handle  negative weight edges it alo reports negative weight cycke
 * O(V+E)
 * dynamic progamminr algorithm
 * it workins in bottom-up manner
 * shortest path edge with upto v- 1(1,2 3 soon edges at a time)
 * we cannot have simple path with edges more than v-1
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // Code here
        vector<int>dist(V, 1e8);
        dist[S]=0;
        for(int i=0; i<V-1; i++){
            for(auto it:edges){
                int u=it[0];
                int v=it[1];
                int wt=it[2];
                
                if(dist[u]!=1e8 && dist[u]+wt<dist[v]){
                    dist[v]=dist[u]+wt;
                }
            }
        }
        for(auto it: edges){
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            
            if(dist[u]!=1e8 && dist[u]+wt<dist[v]){
                return{-1};
            }
        }
        return dist;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, m;
        cin >> N >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src;
        cin >> src;

        Solution obj;
        vector<int> res = obj.bellman_ford(N, edges, src);

        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends