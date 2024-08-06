#include<bits/stdc++.h>
using namespace std;

/***
 * Kruskal's Algorithm for Minimum Spanning Tree
 * 
 * weighted graph, undirected graph, connected graph(one vertex tobery pther vertex)spanning tree which connectex all vertices, no cycle
 * V vertices, v-1 edges
 * minimum weight spanning trees
 * weight of spnnaing tree =  weight on all edges 
 * out of all possibility find minimum weight with spanning tree
 * 
 * 
 * pick weight edges, ensure all vertices are connect, no cycle
 * simple greedy algorithm
 * sort all edges in increasing order
 * initialise MST=[], res=0
 * do the following for every edge 'e' while MST size does not become V-1
 * (a) if adding e to MST does not cause a cycle
 * MST=MST U {e}
 * res = res+e.weight
 * 
 * 
 * 
 * Implementation
 * simple: create a seperate graph from MST
 *
 * 
 * input graph representation 

 * 
*/
  
  struct Edge{
  int src, dest, wt;
  Edge(int s, int d, int w){
  src=s; dest=d; wt=w;}
 };
 bool mycmp(Edge e1, Edge e2){
    return e1. wt<e2.wt;
 }
 int parent[V], rank[V];
 int kruskal(Edge arr[]){
    sort(arr, arr+E, mycmp);
    Edge output[V-1];
    for(int i=0; i<V; i++){
        parent[i]=i;
        rank[i]=0;
    }
    int res=0;
    for (int i=0,s=0; s<V-1; i++){// v-1 edges in mst
        Edge e =arr[i];
int x = find(e.src);
int y = find(e.dst);
if(x!=y){
    output[s] =e;//to print mst
    res+=e.wt;
    Union(x,y);
    s++;
}
    }
    return res;
 }

// find operation to detect cycle and union to add edge
// every node parent or itself, rank to initialize disjoint set
/*sort O(ElogE)
loop O(V)
find and union are conbstant time
union by rank O(E)

TC O(ElogE+V+E*alpha(V)) = O(ElogE)
alpha(V) depends on implementation
union by rank O(logV)
union by rank and path compression both then alpha() is constant
log V and Log E is same for connected graphs

auxilary space O(V) = two arrays used for storing


*/