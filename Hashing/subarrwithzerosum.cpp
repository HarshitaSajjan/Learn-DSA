#include<bits/stdc++.h>
using namespace std;

//naive tc O(n2)
bool iszerosubarr(int arr[], int n){
    for(int i=0; i<n; i++){
        int currsum=0;
        for(int j=i; j<n; j++){
            currsum+=arr[j];
            if(currsum==0)
            return true;
        }
    }
    return false;
}

//Efficient solution = use prefixsum & hashing , tc O(n)

bool issubarr(int arr[], int n){
    unordered_set<int>h;
    int presum=0;
    for(int i=0;i<n; i++){
        presum+=arr[i];
        if(h.find(presum)!=h.end())
            return true;
        if(presum==0)
            return true;
        h.insert(presum);
    }
    return false;
}