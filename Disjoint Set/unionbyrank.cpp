#include<bits/stdc++.h>
using namespace std;
int parent[n], rank[n];

//rank is height of tree
void initialize{
    for(int i=0; i<n; i++){
    parent[i]=i;
    rank[i]=0;    
    }
}

void union(int x, int y){
    int x_rep = find(x), y_rep= find(y);
    if(x_rep==y_rep)return ;

    if(rank[x_rep]<rank[y_rep]) 
        parent[x_rep]=y_rep;
    else if(rank[y_rep]<rank[x_rep])
        parent[y_rep] = x_rep;
    else{
        parent[y_rep] =x_rep;
        rank[x_rep]++;
    }
}

//smaller rank as child of higher rank representative
 // avg TC O(logn) if m operation then m*logn
