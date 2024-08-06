#include<bits/stdc++.h.
using namespace std;

/*set ar an array and sum
count of subsets of arr whose sum = given sum
*/

/*two cases , included or not included

make tree,
is sum of subset = given sum then return, otherwise no

*/

//Recursive - tc 2^n + 2^n -1 = theta(2^n)
// canbe optimized by backtracking and DPO(n*sum)
int countsubset(int arr[], int n, int sum){
    if(n==0) 
        return (sum==0) ? 1: 0;
    return countsubset(arr, n-1, sum) +countsubset(arr, n-1, sum-arr[n-1]);
}


/*DP - 2d arr n and sum
dp[i][j] => count of subsets in arr[0....i-1] with sum as j
*/

int countsubset(int arr[], int n, int sum){
    int dp[n+1][sum+1];
    for(int i=0; i<=n; i++){
        dp[i][0] =1;
    }
    for(int i=1; i<=sum; i++){
        dp[0][i]=0;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=sum;j++){
            if(j<arr[i-1])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]]
        }
    }
    return dp[n][sum];
}

//tc theta(n*sum), sc theta(n*sum)