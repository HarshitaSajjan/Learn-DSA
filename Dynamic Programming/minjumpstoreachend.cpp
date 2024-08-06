#include<bits/stdc++.h>
using namespace std;

//min jumps from the point to reach end

//Recursive
int minJumps(int arr[], int n){
    //recursively find out by which u can reach that cell, and take min of that
    if(n==1) return 0;

    int res = INT_MAX;
    for(int i=0; i<=n-2; i++){
        if(i+arr[i]>=n-1){
            int sub_res=minJumps(arr, i+1);
            if(sub_res!=INT_MAX)
                res=min(res, sub_res+1);
        }
    }
    return res;
}

//DP
int minjumps(int arr[], int n){
    int dp[n];
    dp[0]=0;
    for(int i=0;i<n; i++){
        dp[i]=INT_MAX;
    }
    for(int i=1; i<n; i++){
        for(int j=0;j<i;j++){
            if(arr[j]+j>=i)
            if(dp[j]!=INT_MAX)
                dp[i]=min(dp[i], dp[j]+1);
        }
    }
    return dp[n-1];
}

//tc theta(n2), sc theta(n)