/*
naive solution 
last column becomes first row
second last col becomes second row
*/
#include<bits/stdc++.h>
using namespace std;

void rotater90(int mat[r][c]){
    int temp[n][n]
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            temp[n-j-1][i] = mat[i][j];
    for(int i=0; i<n; i++)
        for(int j=0;j<n; j++)
            mat[i][j] = temp[i][j];
}

/*tc theta(n2) and sc too*/

//efficient soltion
/*
find transpose of the matrix
reverse the individual columns

tc theta(n2)
sc theta(1)
*/
void rotate901(int mat[n][n]){
    for(int i=0; i<n; i++)
        for(int j=0;j<n;j++)
            swap(mat[i][j], mat[j][i]);

    for(int i=0; i<n;i++){
        int low=0; 
        int high=n-1;
    while(low<high){
        swap(mat[low][i], mat[high][i]);
        low++;
        high--;
    }
    }

}