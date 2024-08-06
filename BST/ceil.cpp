//given root and key
//find ceil ie find the val of the larger key which is smallest of them

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left, *right;
    Node(int x){
        key =x;
        left = right =NULL;
    }
};


/*
O(h) time and O(1) space

naive - O(n) times - by traversing every node
*/

/*
Efficient Solution 
O(h) time
O(1) space
*/


Node *ceil (Node *root, int x){
    Node *res = NULL;
    while(root!=NULL){
        if(root->key==x)return root;
        else if(root->key<x)
        root = root->right;
        else root = root->left;
    }
    return res;
}
