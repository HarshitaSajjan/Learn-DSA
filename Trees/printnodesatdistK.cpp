#include<bits/stdc++.h>
using namespace std;

//tc O(n), scO(height)
void printk(Node * root, int k){
    if(root==NULL) return;
    if(k==0){
        cour<<(root->key)<<" ";
    }
    else{
        printk(root->left, k-1);
        printk(root->right, k-1);
    }
}
