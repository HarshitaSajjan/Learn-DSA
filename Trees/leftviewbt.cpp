#include<bits/stdc++.h>
using namespace std;


//Method1 recursive theta(n) tc, theta(H)sc
int maxlen=0;
void printleft(Node *root, int level){
    if(root==NULL) return;
    if(maxlevel<level){
        cout<<root->key<<" ";
        maxlevel=level;
    }
    printleft(root->left, level+1);
    printleft(root->right, level+1);
}

void printleftview(Node *root){
    printleft(root,1);
}



//Method2 iterative tc theta(n), sc theta(w)

void printtleft(Node * root){
    if(root==NULL) return;
    queue<Node 8>q;
    q.push(root);
    while(q.empty()==false){
        int count=q.size();
        for(int i=0; i<xcount; i++){
            Node * curr=q.top();
            q.pop();
            if(i==0)
                cout<<curr->key<<" ";
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
    }
}