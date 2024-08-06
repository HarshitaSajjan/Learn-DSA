#include<bits/stdc++.h>
using namespace std;

void printsnake(int mat[r][c]){
    for(int i=0; i<r; i++){
        if(i%2==0){
            for(int j=0; j<c; j++){
                print(mat[i][j] + " ");
        }
    }
    else{
        for(int j=c-1; j>=0; j--){
            print(mat[i][j] + " ");
        }
    }
}
/*TC theta(r*c)*/
