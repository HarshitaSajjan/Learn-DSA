#include<bits/stdc++.h>>
using namespace std;

/*
base case: if whole string is plaindrome return 0

*/

//Recursive
int palpart(string s, int i, int j){
    if(isPalindrome(s, i ,j)) return 0;
    int res = INT_MAX;
    for(int k=i; k<j; k++){
        res = min(res, 1+palpart(s,i,k)+palpart(s, k+1,j));
    }
    return res;
}

//Tabulation
int paliprt(string str){
    int n= str.length();
    int dp[n][n];
    for(int i=0;i<n; i++){
        dp[i][i]=0;
    }
    for(int gap =1; gap<n; gap++){
        for(int i=0; i+gap<n; i++){
            int j=i+gap;
            if(isPalindrome(s, i, j))
                dp[i][j]=0;
            else{
                dp[i][j]=INT_MAX;
                for(int k=i; k<j; k++)
                    dp[i][j] = min(dp[i][j], 1+dp[i][k]+dp[k+1][j]);
            }
        }
        return dp[0][n-1];
    }
}