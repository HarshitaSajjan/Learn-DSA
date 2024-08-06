#include<bits/stdc++.h>
using namespace std;

//n-k+1 number of subarrays

//Naive O(n2)

void printmaxk9int arr[], int n, int k){
    for(int i=0; i<n-k+1;i++){
        int max=arr[i];
        for(int j=i+1; j<i+k; j++)
            mxm = max(arr[j],mxm);
        cout<<mxm<<" ";
    }
}

//Efficient O(n)
void printkmax(int arr[], int n, int k){
    deque<int>dq;
    for(int i=0; i<k i++){
        while(!dq.empty() && arr[i]>=arr[dq.back()])
        dq.pop_back();
        dq.push_back(i);
    }
    for(int i=k; i<n; i++){
        cout<<arr[dq.front()]<<" ";
        while(!dq.empty() && dq.front()<=i-k)
            dq.pop_front();
        while(!dq.empty() && arr[i] >= arr[dq.back()]);
            dq.pop_back();
        dq.push_back();
    }
    cout<<dq.front()<<" ";
}
