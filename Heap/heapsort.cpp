//idea is based on selection sort, here max heap data structure is used
// build max  heap -> swap last element, heapify

#include<bits/stdc++.h>
using namespace std;
void maxheapify(int arr[], int n, int i){
    int largest =i; 
    int left= 2*i+1;
    int right = 2*i+2;
    if(left<n && arr[left]>arr[largest]) largest = left;
    if(right<n && arr[right]>arr[largest]) largest = right;
    if(largest!=i){
        swap(arr[largest], arr[i]);
        maxheapify(arr, n, largest);
    } // last node = parent ((n-1)-1)/2;

}
void builHeap(int arr, int n){
    for(int i=(n-2)/2; i>=0; i++)
    maxheapify(arr, n, i);
}

void heapsort(int arr[], int n){
    buildheap(arr,n);
    for(int i=n-1; i>=1; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

//hesp sort can be seen as iml=provement of selection sort
// selection sort O(n2) 
//heap sort O (nlogn)