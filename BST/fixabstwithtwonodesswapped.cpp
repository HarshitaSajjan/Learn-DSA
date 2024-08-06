#include<bits./stdc++.h>
using namespace std;


/*ajacent nodes */

prev=-inf, first=NIL, second=NIL;
for(int i=; i<n;i++){
    if(arr[i]<prev){
        if(first=NIL)
            firsr=prev;
        second=arr[i];
    }
    prev=arr[i];
}



//tc O(n)
Node *prev =NULL, *first=NULL, *second=NULL;
void fixbst(Node * root){
    if(root==NULL) return;
    fixbst(root->left);
    if(prev!=NULL && root->key<prev->key){
        if(first==NULL)
            first=prev;
        second=root;
    }
    prev = root;
    fixbst(root->right);
}