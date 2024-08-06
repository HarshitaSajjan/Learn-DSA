#include<bits/stdc++.h>
using namespace std;


/*largest submatrix with 1s*/


//naive O(r3c3)tc every size if it has all 1s

//efficient solution O(rc)
//every row as histogram base

int maxrect(int mat[r][c]){
    int res= largesthist(mat[0],c);
    for(int i=1; i<r; i++){
        for(int j=0;j<c;j++){
            if(mat[i][j]==1)
                mat[i][j]+=mat[i-1][j];
        }
        res=max(res, largesthist(mat[i],c))
    }
    return res;
}