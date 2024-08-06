#include<bits/stdc++.h>
using namespace std;


//bt to and back string or array
/*applications
hierarchial info and want to send across network then need to serialise it
*/
const int EMPTY=-1;
void serialise(Node *root, vector<int>&arr){
    if(root==NULL){
        arr.push_Back(EMPTY);
        return;
    }
    arr.push_back(root->data);
    serialize(root->left,arr);
    serialize(root->right,arr); 
}
//thet(n) tc and sc
const int EMPTY=-1;
int index=0;

Node *deserialise(vector<int>&arr){
    if(index==arr.size()) return NULL;

    int val=arr[index];
    index++;
    if(val==EMPTY) return NULL;

    Node *root = new Node(val);
    root->left=deserialize(arr);
    root->right=deserialise(arr);

    return root;
}
//theta(n) tc



//naive is to store two travrsal of the tree
//we use -1 for null, assumption:-1 is not present in the tree as data

