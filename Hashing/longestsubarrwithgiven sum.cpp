#include<bits/stdc++.h>
using namespace std;


//Longest subarray with given sum


//NAIVE - O(n2)tc O(1)sc

int maxlen(int arr[] ,int n, int sum){
    int res=0;
    for(int i=0; i<n; i++){
        int currsumm=0;
        for(int j=i; j<n; j++){
            currsumm+=arr[j];
            if(currsum==sum)
            res=max(res, j-i+1);
        }
    }
    return res;
}


//Efiicient O(n) tc and sc

int maxlen(int arr[], int n, int sum){
    unordered_map<int, int>m;
    int presum=0, res=0;
    for(int i=0; i<n; i++){
        presum += arr[i];
        if(presum==sum){
            res=i+1;
        }
        if(m.find(presum)==m.end()){
            m.insert({presum, i});
        }
        if(m.find(presum-sum)!=m.end()){
            res=max(res,i-m[presum-sum]);
        }
    }
    return res; 
}