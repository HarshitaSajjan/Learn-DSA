#include<bits/stdc++.h>
using namespace std;

//Pair with given sum in an unsorted array

//NAive O(n2)tc

bool ispair(int arr[], int n, int sum){
    for(int i=0; i<n; i++){
        for(int j=i+1;j<n; j++){
            if(arr[i]+arr[j]==sum)
            return true;
        }
    }
    return false;
}

//sorting O(nlogn)
//Efficient tc(n), sc O(n)
bool ispair(int arr[], int n int sum){
    unordered_set<int>s;
    for(int i=0; i<n; i++){
        if(s.find(sum-arr[i])!=s.end())
            return true;
        s.insert(arr[i]);
}
    return false;
}