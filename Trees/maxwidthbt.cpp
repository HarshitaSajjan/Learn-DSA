#include<bits/stdc++.h>
using namespace std;

//theta(width)sc, theta(n)tc
int maxwidth(Node *root){
    if(root==NULL) return 0;
    queu<Node*>q;
    q.push(root);
    int res=0;
    while(q.empty()==false){
        int count=q.size();
        res=max(res,count);
        for(int i=0;i<count; i++){
            Node *curr=q.top();
            q.pop();
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right)''
        }
    }
    return res;
}