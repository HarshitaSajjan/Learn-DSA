// given root and keys// return true if given key is present in bst else false
//consider all are distinct

 /*Recursive Implementation*/

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left, *right;
    Node(int x){
        key =x;
        left = right = NULL;
    }
};

bool search(Node *root, int x){
    if(root==NULL) return false;
    else if(root->key==x) return true;
    else if(root->key>x) return search(root->left,x);
    else return search(root->right,x);
}

/*Iterative Implementation*/
bool search1(Node *node, int xx){
    while(node!=NULL){
        if(node->key==xx)return true;
        else if(node->key<xx)
        node = node->right;
        else
        node = node->left;
    }
    return false;
}

/*
TC O(h)
SC O(h)recursive
    O(1) iterative

upper bound by height hieght can become n if tree is skewed
best case O(logn) when it is balanced
cell balancing
*/