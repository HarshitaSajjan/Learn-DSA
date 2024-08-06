/*s1 to s2
insert, delete, replace,
minimum no.of operations

*/

#include<bits/stdc++.h>
using namespace std;

//Recusive

int ed(string s1, string s2, int m, int n){

    if(m==0) return n;
    if(n==0) return m;
    if(s1[m-1]==s2[n-1]) 
        return ed(s1, s2, m-1, n-1);
    else
        return 1+min(ed(s1, s2, m, n-1), ed(s1, s2,m-1, n), ed(s1, s2, m-1, n-1));
}


//Memoization
int ed(string s1, string s2, int m, int n){
    vector<vector<int>>dp(m+1, vector<int>(n+1,-1));
    if(m==0) return n;
    if(n==0) return m;
    if(dp[m][n]!=-1) return dp[m][n];
    if(s1[m-1]=s2[n-1])
        dp[m][n] = ed(s1, s2,m-1, n-1);
    else 
        dp[m][n]= 1+min(ed(s1, s2, m, n-1), ed(s1, s2,m-1, n), ed(s1, s2, m-1, n-1));

    return dp[m][n];
}

//Tabulation
int ed(string s1, string s2, int m, int n){
       vector<vector<int>>dp(m+1, vector<int>(n+1,0));
       for(int i=0; i<=m; i++){
        dp[i][0]=i;
       }
       for(int i=0;i<=n; i++){
        dp[0][i]=i;
       }
       for(int i=0; i<=m; i++){
            for(int j=1; j<=n; j++){
    if(s1[m-1]==s2[n-1])
        dp[i][j]=dp[i-1][j-1];
    else
        dp[i][j]=1+min(dp[i][j-1], dp[i-1][j], dp[i-1][j-1]);
            }
       }
    return dp[m][m];
}

//time theta(mn), space theta(mn)

//closest word when typed wrong words
//application in bioinformatics

