#include<bits/stdc++.h>
using namespace std;


//inorder preorder given, bt can be cinstructed only when inorder and one more traversal, not with pre and post
//tc O(n2), but using hashtable O(n)
int preindex=0;
Node *ctree(int in[], int pre[], int is, int ie){
    if(is>ie)return NULL;

    Node *root=new Node (pre[preindex++]);

    int inindex;
    for(int i=is, i<=ie; i++){
        if(in[i]==root->key){
            inindex=i;
            break;
        }
    }
    root->left=ctree(in, pre, is, inindex-1);
    root->right=ctree(in, pre, inindex+1; ie);
    return root;
}