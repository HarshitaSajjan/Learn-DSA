#include<bits/stdc++.h>
using namespace std;


int getsize(Node * root){
    if(root==NULL) 
        return 0;
    else
        return 1+getsize(root->left)+getsize(root->right);
}
//tcO(n), sc O(h)