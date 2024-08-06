#include<bits/stdc++.h>
using namespace std;
//hegithofleft and right should be equal of diff should be 1


//NAIVE O(n2)

bool isbal(Node * root){
    if(root==NULL) return true;
    int lh = height(root->left);
    int rh=height(root->right);
    return (abs(lh-rh)<=1 && isbal(root->left) && isbal(root->right));
}

//efficient O(n)

itn isbala(node *root){
    if(root==NULL) return 0;
    int lh = isbala(root->left);
    if(lh==-1) return -1;
    int rh=isbala(root->right);
    if(rh==-1)return -1;
    if (abs(lh-rh)>1) return -1;
    else return max(lh, rh)+1;
}