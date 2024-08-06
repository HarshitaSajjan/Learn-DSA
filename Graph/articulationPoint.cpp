/***  Articulation poitns or cut vertices
  given connected and undirected graph

  articulation points are the points, removal of which and associated points will increase the connected components by more than one
  Ap are imorntant when u have connected network and u need to find vulnerable points, ie. pts if they breakdown , then whole network become disconnected
  if ap are found, add some edgess around them ro remove AP

  based on DFS, using some tree prop we find AP
back edges- edge which goes to one of the ancestors in dfs tree

 1 st rule: root of dfs tree has two childeen then it is AP
 2 nd rule(to find node is ap or not) not a root:
        discovery time: timer... first vertex 1 then increment by 1 for each visited vertex
        low value: lowest discovery time  reachable through tree or abck edges
        non root node is AP if its low valuei sgreater than or equal to discvery time of this node
        u->v
        low[v]>= disc[u]
        u is articulation point
        v is child of u
*/
         
#include<bits/stdc++.h>
using namespace std;
void dfs(int node, int parent, vector<int>&vis, int time[], int low[], vector<int>&mark, vector<int>adj[]){
  int timer;
  vis[node]=1;
  time[node]=low[node]=timer;
  timer++;
  int child=0;
  for(auto it: adj[node]){
    if(it==parent) continue;
    if(!vis[it]){
      dfs(it, node, vis, time, low, mark, adj);
      low[node] = min(low[node], low[it]);
      if(low[it]>=time[node] && parent!=-1){
        mark[node]=1;
      }
      child++;
    }
    else{
      low[node]=min(low[node], time[it]);
    }
  }
    if(child>1 && parent == -1){
      mark[node] = 1;
    }
}



vector<int>articulationPoints(int n, vector<int>adj[]){
  vector<int>vis(n, 0);
  int time[n];
  int low[n];
  vector<int>mark(n,0);
  for(int i=0; i<n; i++){
    if(!vis[i]){
      dfs(i, -1,vis, time, low, mark, adj);
    }
  }
  vector<int>ans;
  for(int i=0; i<n; i++){
    if(mark[i]==1){
      ans.push_back(i);
    }
  }
  if(ans.size()==0)
  return {-1};

  return ans;

}


int main() {

    int n = 5;
    vector<vector<int>> edges = {
        {0, 1}, {1, 4},
        {2, 4}, {2, 3}, {3, 4}
    };

    vector<int> adj[n];
    for (auto it : edges) {
        int u = it[0], v = it[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    Solution obj;
    vector<int> nodes = obj.articulationPoints(n, adj);
    for (auto node : nodes) {
        cout << node << " ";
    }
    cout << endl;
    return 0;
}