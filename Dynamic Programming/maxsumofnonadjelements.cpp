//subsequence which gives max sum, and non elements can be adjacent
/*
lets try out all subsequences, with given constaints
pick the one with maximum sum
recursion

print all subsequences

ind
do stuffs on that index
return best

subseq from arr ->index
pick and not pick


if overlapping subproblems then u can memoize it
*/

f(int n){
    if(n==0) return a[n];
    if(n<0) return 0;
    if(n<0) return 0;
     int pick = a[n]+f(n-2);
     int notpick = 0+ f(n-1);
     return max(pick, notpick);
}


int f(int ind, vector<int>&nums){
    if( ind==0) return nums[ind];
    if(ind<0) return 0;
    int pick = nums[ind]+ f(ind-2, nums);
    int notpick=0+f(ind-1, nums);

    return max(pick, notpick);
}

int maxnondjsum(vector<int> &nums){
    int n = nums.size();
    retun f(n-1, nums);
}

//Memoization

int f(int ind, vector<int>&nums, dp){
    if( ind==0) return nums[ind];
    if(ind<0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int pick = nums[ind]+ f(ind-2, nums, dp);
    int notpick=0+f(ind-1, nums, dp);

    return dp[ind]=max(pick, notpick);
}

int maxnonadjsum(vector<int> &nums){
    int n = nums.size();
    vector<int>dp(n, -1);
    retun f(n-1, nums ,dp);
}

//Tabulation
int maxnonadjsum(vector<int> &nums){
vector<int>dp(n+1, 0);
    dp[0]=a[0];
    int neg=0;
    for(int i=0; i<n; i++){
        take = a[ind]+dp[i-2];
        nottake=0+dp[i-1];
    }
    dp[i]=max(take, nottake);

}


//Space Optimization
int maxnonadjsum(vector<int> &nums){
int n = nums.size();
int prev=nums[0];
int prev2= 0;
for(int i=0; i<n; i++){
    int take = nums[i];
    if(i>1)
        take+=prev2;
    int nottake= 0+prev;
    int curri = max(take, nottake);
    prev2=prev;
    prev=curro
}
return prev;
}


//Recursive
int maxsum(int arr[], int n){
    if(n==1) return arr[0];
    else if(n==2) return max(arr[0], arr[1]);
    else 
    return max(maxsum(arr,n-1), maxsum(arr,n-1)+arr[n-1]);

    //T(n)= T(n-1)+T(n-1)theta(1) = O(2^n)
}


//DP
int maxmsum(int arr[], int n){
    int dp[n+1];
    dp[1]=arr[0];
    if(n==1) return arr[0];
    dp[2] = max(arr[0], arr[1]);
    for(int i=1;i<=n; i++){
        dp[i] = max(dp[i-1], dp[i-1]+arr[i-1]);
    }
    return dp[n];
}

//Optimized

int maxsumm(int arr[], int n){
if(n==1) return arr[0];
int prev_prev = arr[0];
int prev = max(Arr[0], arr[1]);
int res = rev;
dor(int i=1; i<=n; i++){
    res=max(prev, prev_prev+arr[i-1]);
    prev_prev=prev;
    prev=res;
}
return res;
}