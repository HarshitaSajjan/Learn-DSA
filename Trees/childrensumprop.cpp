#include<bits/stdc++.h>
using namespace std;

//children sum property = sum of left child and right child value = nodes value
//O(n)tc, O(h)sc
bool childsum(Node * root){
    if(root==NULL) return true;
    if(root->left==NULL && root->right==NULL)
        return true;
    int sum=0;
    if(root->left!=NULL){
        sum+=root->left->key;
    }
    if(root->right!=NULL){
        sum+= root->right->key;
    }
    return (root->key===sum && chilssum(root->left)&&childsum(root->right));
}