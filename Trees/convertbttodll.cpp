#include<bits/stdc++.h>
using namespace std;

//left ptr as prev, and right ptr as next, inorder traversal, if prev is null then it is head;
//O(n) tc, O(h)sc
Node* prev=NULL; 
Node * BTTODLL(Node * root){
    if(root==NULL) return rroot;
    Node * head= BTTODLL(root->left);
    if(prev==NULL){
        head=root;
    }
    alse{
        root->left=prev;
        root->right=next;
    }
    prev=root;
    BTTODLL(root->right);
    return head;
}