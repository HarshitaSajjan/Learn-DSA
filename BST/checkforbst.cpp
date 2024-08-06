#include<bits./stdc++.h>
using namespace std;


/*a simple but wring solution
do any traversal fro everynode, check if ita left child is smaller and right is greater*/

/*correct bu inefficient
for everynode
find max in left subtree
find minimum inright sibtree

check if the curr node is greater than the max adn smaller than the the min

O(n2)
*/

/*efficieint solution

pass a range for every node
for root range is -inf to inf
for left child of a node , in range we change upprbound as the node's value
for right right child pf a node in range we chaneg lower bound as the odes value*/


bool isbst(Node * root, int min, it max){
    if(root==NULL)return true;
    return (root->data>min && root->data<max && isbst(root->left, min, root->data) && isbst(root->eright, root->data, max));
}


//efficient(inorder traversal), a bt is bst iff inorder traversal of it is in increasing order
//O(n)tc, O(h)sc

int prev =INT_MIN;
bool bst(Node*root){
    if(root==NULL) return true;
    if(bst(root->left)==false)return false;
    if(root->key<=prev)return false;
    prev=root->key;

    return bst(root->right);
}

