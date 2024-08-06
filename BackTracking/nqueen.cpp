#include<bits/stdc++.h>
using namespace std;

//Super Niave solution - generate N^2CN possible configurations
//Naive solution - generate all permutations of row numbers
//Backtracking solution - if we place queen and as soon as we realise we will not get the solution we will cut the recursion at that point

bool board[n][n];

bool solve(){
    if(solveRec(0)==false)
    return false;
    else{
        printMatrix(board);
        return true;
    }
}
bool isSafe(int row, int col){
    for(int i=0; i<col; i++)
        if(board[row][i])
        return false;
    for(int i=row, j=col; i>=0 &&   j>=0; i--,j--)
        if(board[i][j])
        return false;
    for(int i=row, j=col; j>=0 && i<n; i++,j--)
        if(board[i][j])
        return false;
    return true;
    
}
bool solveRec(int col){
    if(col==n)return true;
    for(int i=0; i<n; i++){
    if(isSafe(i, col)){
        board[i][col]=1;
        if(solveRec(col+1))
        return true;
        board[i][col]=0;
    }
    }
    return false;
}