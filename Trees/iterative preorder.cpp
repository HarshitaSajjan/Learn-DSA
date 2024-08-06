#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key=k;
        left = right = NULL;
    }
};

void iterativepreorder(Node *root){
    stack<Node*>st;
    if(root==NULL) return;
    st.push(root);
    while(st.empty()==false){
        Node *curr = st.top();
        cout<<(curr->key)<<" ";
        st.pop();
        if(curr->right!=NULL) st.push(curr->right);
        if(curr->left!=NULL) st.push(curr->left);
    }
}

/*
TC O(n)
SC O(n)
*/


// Space optimizes Solution
// SC O(h)

/*
1.Create am empty stack st
2.st.push(root)
3. curr=root;
while(st not empty){
    while(curr's key)
    if(curr's right not null)
        st.push(curr's right);
        curr = curr->left;
        }
        curr = st.pop();
}
*/

void iterativepreorder2(Node *root){
    if(root==NULL)return;
    stack<Node*>st;
    Node *curr= root;
    while(curr!=NULL||st.empty()==false){
        while(curr!=NULL){
            cout<<(curr->key)<<" ";
            if(curr->right!=NULL)
                st.push(curr->right);
                curr=curr->left;
        }
        if(st.empty()==false){
            curr= st.top();
            st.pop();
        }

    }
}
    /*
    TC O(n)
    SC O(H)
    */