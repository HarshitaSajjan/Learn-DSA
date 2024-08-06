//heapify is mainly used as sub routine in many operations such as extract min and build heap
#include<bits/stdc++.h>
using namespace std;

int arr[];
int size, capacity;
void minHeapify(int i){
    int leftchild= left(i), rightchild=right(i);
    int smallest =i;
    if(leftchild<size && arr[leftchild]<arr[i])
    smallest = leftchild;
    if(rightchild<size && arr[rightchild]<arr[i])
    smallest = rightchild;
    if(smallest!=i){
        swap(arr[i], arr[smallest]);
        minHeapify(smallest);
    }
}
// TC theta(1) - O(h) h = logn
//SC O(h) - O(1)


//get min return min element as constant opn arr[0]

//swap root elemtn withlast element, size--, then heapify for this the call min value child
int extarctMin(){
    if(size==0)
    return INF;
    if(size==1){
        size--; 
        return arr[0];
    }
    swap(arr[0], arr[size-1]);
    size--;
    minHeapify(0);
    return arr[size];
}
//Tc O(logn)
//SC rec(logn) iterative O(1)

