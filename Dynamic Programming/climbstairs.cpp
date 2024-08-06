//given number of stair, either climb one step or two step, return no. od distinct ways to climb 0 to n steps
#include<bits/stdc++.h>
using namespace std;

/*1d problems
understand a dp problem
count the total no of ways
multiple ways but tell -> min output or max output

try all possible ways ->count or figure the best way -> thats when u apply something as recursion


trick
try to represent problem in terms if index
do all possible stuffs on that indexaccording to problem statement
summ up all stuffs->count all ways
max or min (of all stuffs)->find min or max if asked


*/

int climstairs(int n){
    if(n==0) return 1;
    if(n==1) return 1;
     int left = climstairs(n-1);
     int right = climstairs(n-2);

    return left+right;
}

/*Matrix Exponentiation logn time */


//Memoization
int f(int n, vector<int>&dp){
    if(n<=1) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]= f(n-1)+f(n-2);
}
int climb(int n){
    vector<int>dp(n, -1);
    return f(n, dp);
}


//Tabulation
int climbst(int n){
    vector<int>dp(n+1,0);
    dp[0]=1;
    dp[1]=1;
    for(int i=2; i<=n; i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}


//Space optimization

int clstairs(int n){
    vector<int>dp(n+1,0);
    int prev2=0;
    int prev=1;
    for(int i=2; i<=n+1;i++){
        int curri= prev+prev2;
        prev2=prev;
        prev =curri;
    }


}
