#include<bits/stdc++.h>
using namespace std;

//simple implementation
int  parent[n];
void initialize(){
    for(int i=0; i<n;i++)
    parent[i]=i;
}
int find(int x){
    if(parent[x]==x)
    return x;
    else 
    return find(parent[x]);
}
void union(int x, int y){
    int x_rep = find(x);
    int y_rep=find(y);
    if(x_rep==y_rep)return;
    parent[y_rep]=x_rep;
}



/*TC worst case O(n)*/