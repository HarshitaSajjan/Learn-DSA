#include<bits/stdc++.h>
using namespace std;


int maxbt(Node * root){
    if(root==NULL){
        return INT_MIN;
    }
    else    return max(root->key, max(maxbt(root->left), maxbt(root->right)));
}
//O(n) O(h)