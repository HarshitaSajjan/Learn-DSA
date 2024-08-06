#include<bits/stdc++.h>
using namespace std;


/*Matrix Chain Multiplication

mat(3*4)*mat(4*5) 
    num ber of multiplication = 3*4*5

minimu no of element multi requuire to multiply all these matrix together

*/

//Recursive
int mcm(int arr[], int i, int j){

    if(i+1==j) return 0;
    int res = INT_MAX;
    for(int k=i+1;k<j; k++){
        res= min(res, mcm(arr, i, k)+mcm(arr, k, j)+arr[i]*arr[k]*arr[j]);
    }
    return res;
}


mchain(arr, i, j)= min(mchain(arr, i, k)+ mchain(arr, k, j)+ arr[i]*arr[j]*arr[k])


/*dp[n][n]
dp[i][j] ->stores the result fro subarray from i to j 
dp[0][n-1] =>final result
*/

//Tabulation

int mchain (int arr[], int n){
    int dp[n][n];
    for(int i=0; i<n-1; i++)
        dp[i][i+1] =0;
    for(int gap=2; gap<n; gap++){
        for(int i=0; i+gap<n; i++){
            int j=i+gap;
            dp[i][j]=INT_MAX;
            for(int k=i+1; k<j;k++){
                dp[i][j]=min(dp[i][j], dp[i][k]+dp[j][k]+ arr[i]*arr[j]*arr[k])
            }
        }
    }
    return dp[0][n-1]
}

//O(n3) time and theta(n2) space