#include<bits/stdc++.h>
using namespace std;
//Search in a row wise and column wise sorted matrix
//naive O(r*c)
void search(int mat[r][c], int x){
    for(int i=0; i<r; i++){
        for(int j=0; j<c;j++){
            if(mat[i][j]==x){
                print("founf at" +i + "," + j)
                return
            }
    }
    print("NOT FOUND");
}

//Efficient Solution O(R+C)
/*
begin from  the top right corner
if x is same print positiomn adn return
if x is smaller move left
f x is greter move down 
 either start from top right or bottom left
*/

void search2(int mat[r][c], int x){
    int i=0;
    int j=c-1;
    whie(i<r && j>=0){
        if(mat[i][j]==x){
        cout<<"found at" + i +"," + j;
        return;
        }
        else if(mat[i][j]<x){
            j--;
        }else{
            j++;
        }
    }
        cout<<"Not found";
}