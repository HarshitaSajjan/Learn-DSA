#include<bits/stdc++.h>
using namespace std;

//METHOD1 O(n)tc
void printspiral(Noe * root){
    if(root==NULL) return ;
    queue<Node*>q;
    stack<int>s;
    bool reverse=false;
    q.push(root);
    while(q.empty()==false){
        int count=q.size();
        for(int i=0; i<count; i++){
            Node *curr=q.front();
            q.pop();
            if(reverse)
                s.push(curr->key);
            else
                cout<<curr->key<<" ";
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!-NULL) q.push(curr->right);
        }
        if(reverse){
            while(s.empty()==false){
                cout<<s.top()<<" ";
                s.pop();
            }
        }
        rever=!reverse;
        cout<<endl;
    }
}

//METHOD2 efficient use two stacks O(n)
/*
push root to stack s1
while any of the two stacks isnot empty
    while s1 is not empty
        take out a node, print it
        push children of the taken out node into s2
    while s2 is not empty
        tale out ode, print it
        push children of the  taken out node into s1 in reverse order
*/