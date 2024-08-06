#include<bits/stdc++.h>
using namespace std;
int arr[];
int size, capacity;
void decreasekey(int i , int x){
    arr[i] =x;
    while(i!=0 && arr[parent[i]]>arr[i]){
        swap(arr[i], arr[parent[i]]);
        i = parent(i);
    }
}
 // TC O(logn)

 void delete(int i){
    //calls two fn , decresekey (3,-inf) and then extract min

 }
 // TC O(log)


//Build Heap - givena random array , rearrange its elements to form a min heap

void buildheap(){
    for(int i=(size-2)/2; i>=0;i--){
        minHeapify(i);
    }
}

//TC O(nlogn)