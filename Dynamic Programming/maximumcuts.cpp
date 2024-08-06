#include<bits/stdc++.h>
using namespace std;

//rod of length n and three values a b c , max cuts suh that len of every cut should be either a b or c

//Recursive
int maxcut(int n, int a, int b, int c){
    if(n<0) return -1;
    if(n==0) return 0;
    int res = max(maxcut(n-a,a,b,c), maxcut(n-b,a,b,c), maxcut(n-c,a,b,c));
    
    if(res==-1)
        return res;
    else
        return(res+1);
}
//tc 3^n

//Tabulation
int maxcuts(int n, int a, int b,int c){
    int dp[n+1];
    dp[0]=0;
    for(int i=1; i<=n; i++){
        dp[i]=-1;
        if(i-a>=0)
            dp[i]=max(dp[i], dp[i-a]);
        if(i-b>=0)
            dp[i]= max(dp[i], dp[i-b]);
        if(i-c>=0)
            dp[i]=max(dp[i],dp[i-c]);
        if(dp[i]!=-1)
            dp[i]++;
    }
    return dp[n];
}

//tc theta(n),sc theta(n)