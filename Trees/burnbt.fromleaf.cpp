#include<bits/stdc++.h>
using namespace std;


//find farthest node from the given leaf
//the farthest node must be reachable through one of the ancestors


int res=0;
int burntree(Node *root, int leaf, int &dist){
    if(root==NULL)return 0;
    if(root->data==leaf){
        dist=0; return 1;
    }
    int ldist=-1, rdist=-1;
    int lh = burntree(root->left, left, ldist);
    int rh = burntree(root->right, leaf, rdist);
    if(ldist!=-1){
        dist=ldist+1;
        res=max(res, dist+rh);
    }
    if(rdist!=-1){
        dist=rdist+1;
        res=max(res, dist+lh);
    }
    return max(lh, rh)+1;
}