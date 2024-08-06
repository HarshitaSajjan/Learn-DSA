#include<bits/stdc++.h.
using namespace std;

//val and set of coins and inf supply of every coin in the given set, we have to get the value using minimum coins
//greedy approach can be applied but wont always work, but greedy will work for india coins but not randon  

//Recursive
/*we will check if it is smaller than or equal to val*/

int getMin(int coins[], int n, int val){
    if(val==0) return 0;
    int res=INT_MAX;
    for(int i=0; i<n; i++){
        if(coins[i]<=val){
            int sub_res=getMin(coins,n, val-coins[i]);
            if(sub_res!=INT_MAX)
                res=min(res, sub_res+1);
        }
    }
    return res;
}


//DP
int getmin(int coins[], int n, int val){
    //arr of val+1 size
    int dp[val+1];
    dp[0]=0;
    for(int i=0; i<n; i++){
        dp[i]=INT_MAX;
    }
    for(int i=1;i<=val; i++){
        for(int j=0;j<n;j++){
            if(coins[j]<=i){
            int sub_res = dp[val-coins[i]];
            if(sub_res!=INT_MAX)
                dp[i]=min(dp[i], sub_res+1);        
            }
        }
    }
    return dp[val];
}
//tc theta(n*val), sc theta(val)