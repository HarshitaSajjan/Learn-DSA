#include<bits/stdc++.h>
using namespace std;
/**
 * Given a weighted graph and a source, find shortest distancrs from source to all other vertices
 */
/*** similar to prims algorithm
 * source vertex, initialize source as 0 and every other as inf
 * pick a vertex and finalise a distance, one set whose dist if finalised and other set whose distance is yet to be finalosed
 * pick one by one vertex and finalise distance
 * relax(u,v) - updating dist if we r getting smaller dist
 * u - vertex just finalised
 * v- adjacent node
 * {
 * d[v]>d[u]+w(u,v)
 * d[v] = d[u]+w(u,v)
 * }
 * 
 * 
*/
/***
 * do not work for negative weight edges
 * does the shortest path change is add a weight to all edges of original path(depends on number of edges so path changes)
 * but if u multiply then shortest path doesnt change, as it doesnt impact no of edges, they will be multiplies by same factor
 * 
*/
/**
 * create  an empty priority queue(or min heap)pq
 * dist[v] = {inf, inf, inf....}
 * dist[s]=0
 * insert all dist into pq
 * while(pq.empty()==false)
 * u=pq.extractMin()
 * relax all adjacent of u that are not in pq
 * 
 * 
 * using stl or library functions wont support decrease key that y extarctmin operation
 * keep/ delete old value and insert new value ->trick
 * 
 * 
 * TC 
 * extractMin O(logV)
 * update O(V)
 * insert O(V)
 * relax O(logV)
 * 
 * overall 
 O(vlogv+elogv)
 * 
*/


/*adj matrix representation of graph and need to produce dist array*/
/*undirected adj matrix
u->v
v->u
*/

vector<int>dijkstra(vector<int>graph[], int V, int src){
    vector<int>dist(V, INT_MAX);
    dist[src]=0;
    vector<bool>fin(V, false);
    for(int count=0; count<V-1; count++){
        int u=-1;
        for(int i=0; i<V; i++){
            if(!fin[i] && (u==-1|| dist[i]<dist[u]))
            u=i;
            fin[i] = true;
        }
        for(int v=0; v<V;v++){
            if(graph[u][v]!=0 && fin[v]==false)
            dist[v] = min(dist[v], dist[u]+graph[u][v]);
        }
    }
        return dist;
}

/**
 * TC
 * outer loop theta(V)
 * inner loop two consecutive loops both theta(V)
 * overall theta(V)
 * 
 * optimize adj list implementation and min heap dta structure
 * TC O((V+E)logV)
 * 
 * two methods for dijkstras
 * 1. using set
 * 2. Using priority queue
 * 
 * 
 * 
 * The only difference between using a Priority Queue and a Set is that in a set we can check if there exists a pair with the same node but a greater distance than the current inserted node as there will be no point in keeping that node into the set if we come across a much better value than that. So, we simply delete the element with a greater distance value for the same node.
 */
/*Set*/
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        set<pair<int,int>>st;
        vector<int>dist(V,INT_MAX);
        st.insert({0,S});
        dist[S]=0;
        
        while(!st.empty()){
            auto it = *(st.begin());
            int node = it.second;
            int dis = it.first;
            st.erase(it);
            
            for(auto it: adj[node]){
            int adjNode= it[0];
            int edgeWt = it[1];
            if(dis+edgeWt < dist[adjNode]){
            if(dist[adjNode] != INT_MAX)
            st.erase({dist[adjNode], adjNode});
            dist[adjNode]= dis+edgeWt;
            st.insert({dist[adjNode], adjNode});
            }
            }
        }
        return dist;
        
    }
};


/*Priority Queue*/
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        vector<int>dist(V, INT_MAX);
        dist[S]=0;
        pq.push({0,S});
        
        while(!pq.empty()){
            int adjNode= pq.top().second;
            int dis= pq.top().first;
            pq.pop();
            
            for(auto it: adj[adjNode]){
                int v= it[0];
                int u= it[1];
                if(dis+u<dist[v]){
                dist[v]=dis+u;
                pq.push({dis+u, v});
                }
            }
        }
        return dist;
    }
};

