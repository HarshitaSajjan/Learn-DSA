#include<bits/stdc++.h>
using namespace std;


//naive O(n)

int countNode(Node *root){
    if(root==NULL) return 0;
    else return 1+countNode(root->left)+countNode(root->right);
}


//efficient O(logn*logn)
//tn <t(2n/3)+theta(n)

int countnode(Node *root){
    int lh=0, rh=0;
    Node *curr=root;
    while(curr!=NULL){
        lh++;
        curr=curr->left;
    }
    curr=root;
    while(curr!=NULL){
        rh++
        curr=curr->right;
    }
    if(lh==rh){
        return pow(2, lh)+1
    }
    else{
        return 1+countnode(root->left)+countnode(root->right);
    }
}