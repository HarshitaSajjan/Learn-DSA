#include<bits/stdc++.h1>
using namespace std;

//find by path compression
int find(int x){
    if(x==parent[x]x)
    return x;
    parent[x]= find(parent[x]);
    return parent[x];
}

/*TC with union by rank and path compressoion
for m operations on  n elements
O(malpha(n))
alpha(n) is inverse Ackermann Function
alpha(n)<=4 even for the largest value
constant time on average m time/m
*/