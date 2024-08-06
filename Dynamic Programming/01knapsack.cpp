#include<bits/stdc++.h>
using namespace std;

/*Given knapsackof some capacity
ie value and weight

suppose u have budget and have multiple task u can pick in budget every task has value , maximum values should be picked in budget and there is only one instance of every item
Or suppose u r student ans have exam , and q , and values are marks, and u have some time, u have to maximie marks, there is no patrtial marking


*/

//Recursive
int knapSack(int W, int wt[], int val[], int n){

    if(n==0||W==0)
    return 0;
    if(wt[n-1]>W) 
        return knapSack(W, wt, val, n-1);
    else
        max(knapSack(W, wt, val, n-1), val[n-1]+knapSack(W-wt[n-1], wt, val, n-1));

}
//tc O(2^n)


//DP
//tc O(W*n), optimize then w*n<2^n

/*table size (W+1)(n+1)
dp[i][j] = max val that we can collect with first i items and knapsack capacity j
*/
int knapsack(int W, int wt[], int val, int n){
    int dp[n+1][W+1];
    for(int i=0; i<=W; i++){
        dp[0][i]=0;
    }
    for(int i=0;i<=n; i++){
        dp[i][0]=0;
    }
    for(int i=1;i<=W;i++){
        for(int j=1; j<=n; j++){
            if(wt[i][j]>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);
        }
        return dp[n][W];
    }
}
//theta(W*n) time = pseudo polynomial solution
//space theta(W*n)
