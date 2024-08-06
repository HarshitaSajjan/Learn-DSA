#include<bits/stdc++.h>
using namespace std;
int main(){
    //maxheap
    priority_queue<int>pq;
    //minheap
    priority_queue<int, vector<int>, greater<int>>pq; // data type  of pq elements
    //O(n)
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}

//priority_queue<int>(arr, arr+3);
top empty O(1)
push pop O(logn)


//pq is used in many applicatrions like dijkstra , prims huffman, heap sort, and any other place here heap is used