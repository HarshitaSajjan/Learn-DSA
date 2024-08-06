//Kruskal's Algorithm for Minimum Spanning Tree
#include<bits/stdc++.h>
using namespace std;
//spanning tree with v vertices have v-1 edges
//wieght of spanning tree is weight of edgesa on the given spanning tree, and which has minimum is called mst


/* based on  minimum edges and there shouldnt be any cycles, it is greedy algorithm
1. sort all edges in increasing order
2. initialize MST =[], res =0;
3. do the following for eveyr edge 'e' while the MST size does not become v-1,
    if adding e to MST does not cause a cycle
            MST = MST U{e};
            res = res+e.weight
4. return res
*/

/*Implementation
create a seperate graph
add edge and check if cycle if formed or not

*/
struct Edge{
    int src, dest, wt;
    Edge(int s, int d, int w){
        src=s;
        dest=d;
        wt=w;
    }
};
bool myCmp(Edge e1, Edge e2){
    return e1.wt<e2.wt;
}

//grah as collection of edges we wont use adjlist and adj matrix as finding all edges will be difficult so we will store as array of edges
//find operation help to find cycle and union operation helps to add edge
int parent[V], rank[V];
int kruskal(Edge arr[]){
    sort(arr);
    for(int i=0; i<V; i++){
        parent[i]=i;
        rank[i]=0;
    }
    int output[V-1];
    int res=0;
    for(int i=0, s=0; s<V-1; i++){
        Edge e= arr[i];
        int x = find(e.src);
        int y = find(e.dest);
        if(x!=y){
            output[i]=e;
            res+=e.wt;
            Union(x,y);
            s++;

        }
    }
    return res;

}

