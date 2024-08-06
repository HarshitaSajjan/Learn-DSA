//Rat in a Maze, 0and 1, 0 cant move ie they r blocked , go through inblocked cells ie. 1's, rat at top left and cheese at bottom right
/*only two moves allowed from (i,j)
(i+1, j) - below
(i, j+1) - right
*/

#include<bits/stdc++.h>
using namespace std;

bool maze[n][n], sol[n][n];
bool SolveMaze(){
    if(SolveMazeRec(0,0)==false)
        return false;
    else{
        printMatrix(sol);
        return true;
    }
}
bool isSafe(int i, int j){
    return (i<n && j<n && maze[i][j]==1);
}
bool SolveMazeRec(int i, int j){ 
    if(i==n-1 && j=n-1){
        sol[i][j] = 1;
        return true;
    }
    if(isSafe(i,j)==true){
        sol[i][j]=1;
        if(SolveMazeRec(i+1,j)==true)
        return true;
        else if(SolveMazeRec(i, j+1)==true)
        return true;
        sol[i][j]=0;
    }
    return false;
}