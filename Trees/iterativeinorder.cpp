#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right; 
    Node(int k){
        key=k;
        left=right=nullptr;
    }
};

 //using stack
 void iterativeInorder(Node *root){
    stack<Node*>st;
    Node* curr = root;
    while(curr!=NULL||st.empty()==false){
        while(curr!=NULL){
            st.push(curr);
            curr= curr->left;
        }
        curr= st.top();
        st.pop();
        cout<<(curr->key)<<" ";
        curr = curr->right;
    }
}
int main(){

}
/* TC theta(n)
Sc O(h)
*/