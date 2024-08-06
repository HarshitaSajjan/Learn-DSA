#include<bits/stdc++.h>
using namespace std;

void spiralorder(int mat[][], int r, int c){
    int top=0, left=0, bottom=r-1, right =c-1;
    while(top<=bottom && left<=right){
        for(int i=left; i<=right; i++)
            print(mat[top][i] + " ");
            top++;
        for(int i=top; i<=bottom; i++)
            print(mat[i][right]+" ");
            right--;
        if(top<=bottom){
            for(int i=right; i>=left;i--)
                print(mat[bottom][i]+" ");
                bottom--;
        }
        if(left<=right){
            for(int i=bottom; i>=top; i--)
                print(mat[i][left]+ " ");
                left++;
        }

    }
}

/*
tc theta(r*c)
*/
