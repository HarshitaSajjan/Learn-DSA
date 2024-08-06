/*situatuion 
even coins arraged in a row
2 player playing a game
both players pick coin on their turns

need ti fond max val which u can collect if u get ac hanee to make a first move

not mac val but to find strategy that u cannot loose the game

either pick odd or all even

*/
#include<bits/stdc++.h>
using namespace std;

//Recursive 1
int sol(int arr[], int i, int j, int sum){
    if(j==i+1)
        return max(arr[i], arr[j]);
    return max(sum-sol(arr, i+1, j, sum-arr[i]), sum-sol(arr,i,j-1, sum-arr[j]));

}


int mainsol(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++)
        sum=sum+arr[i];
    return sol(arr,0, n-1, sum); 
}


//Recursive 2
int soll(int arr[], int i, int j){
if(j==i+1) max(arr[i], arr[j]);

    return max(arr[i]+(min(soll(arr, i+2, j), soll(arr, i+1, j-1))), arr[j]+(min(soll(arr, i+1, j-1), soll(arr, i, j-2))));
}


//DP tc theta(n2) sc theta(n2)
int sol(int arr[], int n){
    int dp[n][n];
    for(int i=0; i<n-1; i++)
        dp[i][i+1]=max(arr[i], arr[i+1]);
    for(int gap=3; gap<n; gap=gap+2){
        for(int i=0; i+gap<n; i++){
            j=i+gap;
            dp[i][j]=max(arr[i]+min(dp[i+1][j], dp[i+1][j-1]), arr[j]+min(dp[i+1][j-1], dp[i][j-2]));
        }
    }
    return dp[0][n-1];
}