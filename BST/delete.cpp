#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left, *right;
    Node(int x){
        key = x;
        left = right = NULL;
    }
};

Node *getSuccessor(Node *curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
    curr= curr->left;
    return curr;
}

Node *delNode(Node *root, int x){
    if(root==NULL) return root;
    if(root->key>x)
    root->left = delNode(root->left,x);
    else if(root->key<x)
    root->right = delNode(root->right,x);
    else{
        if(root->left ==NULL){
            Node *temp = root->right;
            delete(root);
            return temp;
        }
        else if(root->right==NULL){
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else{
            Node *succ = getSuccessor(root);
            root->key = succ->key;
            root->right =delNode(root->right,succ->key);
        }
        return root;
    }
}
/*works like search and insert
TC O(h)
SC O(h)
*/