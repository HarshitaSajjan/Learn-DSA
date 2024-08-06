/***Minimum Spanning Tree*/
/***
 * vertices, connected with edges and these edges have weights
 * given a weighted and connected undirected graph
 * MST is defined only for undirected graph
 * spanning tree is a tree(not a cycle ) and this should be connecting all the vertices
 * v vertices then v-1 edges
 * 
 * if weighted graph --> consider all spanning tree --> need to find weights--> find spanning tree with minimum weights
 * 
 * Prims algorithm is greedy algortihm for finding mst
 * 
 * it has two sets
 * one included in mst and other not  yet an mst
 * mst has evrything and other will be empty at an end
 * one vertices | others no in mst
 * find minimum weith that connects to other
 * A|BCD
 * A to everything  
 * A-B | CD
 * A-B  |  
 * |    |  D
 * C    |
 * 
 * 
 * A-B    
 * |  \ 
 * C    D
 * 
 * at every step make a greedy choice
*/

#include<bits/stdc++.h>
using namespace std;
int primsMST(vector<int>graph[], int V){
    int key[V], res=0;
    fill(key, key+V, INT_MAX);
    key[0]=0;
    bool mSet[V]={false};
    for(int count=0; count<V; count++){
        int u=-1;
        for(int i=0; i<V; i++)
        if(!mSet[i] && (u==-1|| key[i]<key[u]))
        u=i;
        mSet[u]=true;
        res=res+key[u];
        for(int v=0; v<V; v++){
            if(graph[u][v]!=0 && !mSet[v])
            key[v]= min(key[v], graph[u][v]);
        }
    }
    return res;
}

/**TC: Theta (V) and in taht theta(V)
 * overall theta(V2)
 * this is using adj matrix and array
 * 
 * it can be optimized
 * adj list and min heap data structure
 * traversing through adjacent will O(V+E) work
 * 
 * in min heap 2nd loop )(VlogV)+O(V+E)*logV
 * V=O(E)
 * overall (ElogV)
*/

/*MIN HEAP METHOD*/


int SpanningTree(int V, vector<vector<int>>adj[]){
    priority_queue<pair<int,int>,  vector<pair<int,int>>, greater<pair<int,int>>>pq;
    vector<int>visited(V, 0);
    pq.push({0,0});
    int sum=0;
    while(!pq.empty()){
        auto it = pq.top();
        pq.pop();
         int node = it.second;
         int edge = it.first;
         if(visited[node]==1)
         continue;
         sum += edge;
         for( auto it : adj[node]){
            int adjNode = it[0];
            int edgewt = it[1];
            if(!visited[node]){
            pq.push({edgewt, adjNode});
         }
         }

    }
    return sum;
}