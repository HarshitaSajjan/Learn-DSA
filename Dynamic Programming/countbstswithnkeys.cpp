#include<bits/stdc++.h>
using namespace std;

/*res(n) = res(0)*res(n-1) + res(1)*res(n-2) + .....res(n-1)*res(0)
= res(i)*res(n-i-1);

res(0)=1; base case;
*/

//DP
int countbsts(int n){
    int dp[n+1];
    dp[0]=0;
    for(int i=1; i<=n; i++){
        dp[i]=0;
        for(int j=0;j<i; j++)
            dp[i]+=dp[j]*dp[i-j-1];
    }
    return dp[n];
}

//tc O(n2), sc theta(n)

/*application of catalan numbers

*/