#include<bits/stdc++.h>
using namespace std;


//Naive O(n2)tc sc O(1)

int countDist(int arr[], int n){
    int res=0;
    for(int i=0; i<n; i++){
        bool flag=false;
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==false)
        res++;
    }
    return res;
}

//Efficient Solution
int countdist(int arr[], int n){
    unordered_set<int>s;
    for(int i=0; i<n; i++)
        s.insert(arr[i])
    return s.size();
}

//improved
int countdistt(int arr[], int n){
    unordered_set<int>(arr, arr+n);
    return s.size();
}

//tc theta(n), sc O(n)