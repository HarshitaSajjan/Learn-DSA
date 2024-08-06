#include<bits/stdc++.h>
using namespace std;

void transposematrix(int mat[n][n]){
    int temp[n][n]
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        temp[i][j] = mat[j][i];

    for(int i=0; i<n; i++)
        for(int j=0; j<n;j++)
            mat[i][j] = temp[i][j];
}
void transposematrix1(int mat[n][n]){
        for(int i=0;i<n; i++)
            for(int j=0; j<n; j++);
             swap(mat[i][j], mat[j][i]);
}
