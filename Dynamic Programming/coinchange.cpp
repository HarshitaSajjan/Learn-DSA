/*array of coin types, total possible ways to get the sum, and infinite coins of the values

*/

#include<bits/stdc++.h>
using namespace std;

//Recursive

int getCount(int coins[], int n, int sum){
    //begining from last makes implementation easier

    if(sum==0)return 1;
    if(n==0)return 0;

    int res = getCount(coins,n-1, sum);
    if(coins[n-1]<=sum)
        res=res+getCount(coins, n, sum-coins[n-1]);

    return res;
}


//TC exponential , sc>O(n) or O(target)

//DP 
int getcount(int coins, int n, int sum){
    int dp[sum+1][n+1];
    for(int i=0; i<=n; i++){
        dp[0][i]=1;
    }
    for(int i=1; i<=sum; i++){
        dp[i][0]=0;
    }
    for(int i=1; i<=sum; i++){
        for(int j=1;j<=n; j++){
            dp[i][j]=dp[i][j-1];
            if(coins[j-1]<=i)
                dp[i][j]+=dp[i-coins[j-1]][j];
        }
    }
    return dp[sum][n];

}

//why sum+1 * n+1 not vice versa, it wont work, if we do the other way we will get more values, we wont be going through all the coins but fora coin we wuld be going through all the sums
//n*sum time and space, it can be optimied to theta(n) , and not any further optimization can be done

//if need to return total no of ways, then base case will return either 0 or 1

//recurrence -> (ind, T)
//explore all possibilities
// summ all possibilities and return



//memoization tc O(n*t) and spaceO(n*t)+O(t)
int getCount(int coins[], int n, int sum){
    //begining from last makes implementation easier
    vector<vector<int>>dp(sum+1, vector<int>(n+1,-1));
    if(sum==0)return 1;
    if(n==0)return 0;
    if(dp[sum][n]!=-1) return dp[sum][n];

    dp[sum][n] = getCount(coins,n-1, sum);
    if(coins[n-1]<=sum)
        dp[sum][n]+=getCount(coins, n, sum-coins[n-1]);

    return dp[sum][n];
}
//tabulation -> base vcase, index, t, copy the recurrence