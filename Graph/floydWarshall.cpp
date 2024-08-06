FLOYD-WARSHALL ALGORITHM

Purpose: Finds the shortest paths between all pairs of vertices.
Concept:
Initialize a matrix to represent the shortest paths between
each pair of vertices.
Update the matrix by considering all possible paths through
each vertex.
If a shorter path is found, update the matrix accordingly.
Complexity: O(V3)O(V^3)O(V3).


#include <bits/stdc++.h>
using namespace std;
void floydWarshall(int V, vector<vector<int>> &graph)
{
vector<vector<int>> dist = graph;
for (int k = 0; k < V; ++k) {
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            if (dist[i][k] != INT_MAX && dist[k][j] !=
            INT_MAX && dist[i][k] + dist[k][j] < dist[i][j]) {
            dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
}
for (int i = 0; i < V; ++i) {
    for (int j = 0; j < V; ++j) {
        if (dist[i][j] == INT_MAX) {
            cout << "INF ";
        } else {
            cout << dist[i][j] << " ";
        }
    }
    cout << endl;
}
}


int main() {
int V = 4;
vector<vector<int>> graph = {
{0, 3, INT_MAX, 7},
{8, 0, 2, INT_MAX},
{5, INT_MAX, 0, 1},
{2, INT_MAX, INT_MAX, 0}
};
floydWarshall(V, graph);
}

/*
single source in dijsktra and bellmanford

from all nodes as source - floyd warshall- multi source shortest path- detect negative cycles
note-> go via every vertex/nodes

for(via=0; via<n; via++){
for(int i=0 ; i<n; i++){
for)int j=0; j<n; j++){
cost[i][j]= min{cost[i][j], cost[i][via]+cost[via][j];}
}}}


if negative cycle
for(i=0->n){
if(cost[i][i]<0)}
//neg cycle exists
*/

void shortestdist(vector<vector<int>>&matrix){
    int n = matrix.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=1e9;
            }
            if(i==j)matrix[i][j]=0;
        }
    }
    for(int k=0; k<n; k++){
        for(int k=0; k<n; k++){
            for(int k=0; k<n; k++){
            matrix[i][j]=min(matrix[i][j], matrix[i][k]+matrix[k][j]);
            }
        }
    }
    for(int i=0; i<n; i++){//for neg cycles
        if(matrix[i][j]<0){

        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j]==1e9){
                matrix[i][j]=-1;
            }
            if(i==j)matrix[i][j]=0;
        }
    }

}
