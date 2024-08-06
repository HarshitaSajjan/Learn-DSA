#include<bits/stdc++.h>
using namespace std;


//no od nodes on longest path between two leaf nodes
/*idea - find the follwoing value for every node and return the maximum

max(1+lh+rh)
lh ->left hegiht
rh->right height*/

//naive O(n2)
//tn = tn-1+thetan

int height (Node* root){
    if(root==NULL) return 0;
    else 
    return 1+max(hegiht(root->left, root->right));
}

int diameter(Node *root){
    if(root==NULL) return 0;
    int d1 = 1+height(root->lrgt)+height(root->right);

    int d2 = diameter(root->left);
    int d3 = diamtr(root->right);

    return max(d1, max(d2, d3));

}

//better o(n)
/*precompute height of every node unorderedmap<Node*, int>
*/


//efficient O(n) tc, no overhead of map, this function returns  height, but sets the res variable to have diameter

int res=0;
int height(Node * root){
    if(root==NULL){
        int lh = height(root->left);
        int rh = height(root->right);
        res= max(res, lh+rh+1);

        return 1+max(lh,rh);
    }
}