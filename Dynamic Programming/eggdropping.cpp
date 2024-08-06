/*e is no of eggs
f no of florrs

threshold floor
this is the min floor to break the egg
egg may break from 1st floor 
egg may not break from the top floor
if an egg breaks froma floor, it will break from higher floors also
;
minimum trails to find threshold floor


let res(f,e) be the minimum trials in the worst casr foe f floors and e eggs
res(f,e) = min (max(break, notbreak))+1;
           min(max(res(x-1 , e-1), res(f-x, e)))+1
    base case
    res(f,1)=f
    res(1,e)=1
    res(0,e)=0
*/

//DP
int res(int e, int f){
    int dp[f+1][e+1];
    for(int i=1; i<=e; i++){
        dp[i][i]=1;
        dp[0][i]=0;
    }
    for(int j=1; j<=f; j++){
        dp[j][1]=j;
    }
    for(int i=2; i<=f; i++){
        for(int j=2; j<=e; j++){
            dp[i][j]=INT_MAX;
            for(int x=1; x<=i; x++)
                dp[i][j]=min(dp[i][j], 1+max(dp[x-1][j-1], dp[i-x][j]));
        }
    }
    return dp[f][e];
}

//tc O(f2e) time , space O(fe)

