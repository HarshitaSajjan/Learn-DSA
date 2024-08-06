#include<bits/stdc++.h>
using namespace std;


/*
naive
initialize res=0;
traverse all rows one by one 
if current row is not same ay of the previous rows do res++;
return res;

TC
m rows and n cols
O(m*m*n)
*/

//Efficient solution

bool mat[M][N];
struct TrieNode{
    TrieNode *child[2];
    TrieNode(){
        child[0]=NULL; child[1]=NULL;
    }
}
bool insert(TrieNode *root, int row){
    TrieNode *curr= root;
    bool flag= false;
    for(int i=0; i<N ; i++){
        int index= mat[row][i];
        if(curr->child[index]==NULL){
            curr->child[index]=new TrieNode();
            flag = true;
        }
        curr=curr->child[index];
    }
    return flag;
}
int countDist(){
    TrieNode *root = new TrieNode();
    int res=0;
    for(int row=0; row<M; row++)
        if(insert(root,row)==true)
            res++;
            return res;
}


/*
TC O(mn)
SC O(mn)
*/