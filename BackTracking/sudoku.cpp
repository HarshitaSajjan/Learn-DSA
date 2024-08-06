//Sudoku Problem
//every number in every row and column should be different
 // size of the given grid is always square
 /*
 9*9 = (3*3)(3*3)
 */
// naive is to try all possible configuration, every place can fill value from 1to n, x^n configurations, if following rule then return true and print otherwise return false;

//try to find free cell then try to put 1 if its false then 2 then 3 and so on and recur for other mepty cell and so on.
int grid[n][n];
bool isSafe(int i, int j, int N){
    for(int k=0; k<n; k++)
        if(grid[k][j]==n || grid[i][k]==n)
            return false;
    int s= sqrt(n)
    int rs=i-i%s;
    int cs=j-j%s;
    for(int i=0; i<s;i++)
        for(int j=0;j<s; j++)
            if(grid[i+rs][j+cs]==N)
                return false;
    return true;
}
bool solve(){
    int i, j;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(grid[i][j]==0)
            break;
    if(i==n && j==n)
    return true;
    for(int N=1; N<=n; N++){
        if(isSafe(i,j,N)){
            grid[i][j]=N;
            if(solve())
                return true;
            grid[i][j]=0;
        }
    }
    return false;
}