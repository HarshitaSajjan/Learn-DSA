/*Minimize the maximum pages allocated
Only contiguos pages can be allocated
*/

/*Naive Recursive Solution
we need to choose (k-1) cuts out of (n-1) cuts shown above
total ways n-1Ck-1

*/

//Naive Recursive Solution
int minpgs(int arr[], int n., int k){
    if(k==1)
        return sum(arr, 0, n-1);
    if(n==1)
        return arr[0];
    int res=INF;
    for(int i=1; i<n; i++)
        res=min(res, max(minpgs(arr, i, k-1), sum(arr,i, n-1)));
    return res;
}

int sum(int arr[], int b, int e){
    int s=0;
    for(int i=b; i<=e;i++)
        s+=arr[i];
    return s;
}
// exponential time


//DP 
int minipages(int arr[], int n, int k){
    int dp[k+1][n+1];
    for(int i=1; i<=n; i++)
        dp[1][i]=sum(arr, 0, i-1);
    for(int i=1; i<=k i++)
        dp[i][1]=arr[0];
    for(int i=2. i<=k; i++){
        for(int j=2; j<=n; j++){
            int res=INT;
            for(int p=1; p<j; p++){
                res=min(res, max(dp[i-1][p], sum(arr,p,j-1)));
            }
            dp[i][j]=res;
        }
    }
    return dp[k][n];
}

//tc O(n^3k) => if sum is stored already then tc will be O(n^2k), sctheta(nk)+theta(n*n)

//bnsary search based soln O(nlogsum)