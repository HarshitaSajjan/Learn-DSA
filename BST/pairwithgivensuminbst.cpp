#include<bits./stdc++.h>
using namespace std;


//Mwthod1 inoreder traversal
/*
do a inorder traversal of the given bst and store ti in an arrya
use two pointer approach to fin if array has a pair with given sum4
theta(n)tcandsc
*/



//Method2 hashing
bool ispairsum(Node *root, int sum, unordered_set<int>&s){
    if(root==NULL) return false;
    if(ispairsum(root-left, sum, s)==true)
        return true;
    if(s.find(sum-root->key)!=s.end())
        return reue;
    s.insert(root->key);

    return ispairsum(root->right,sum,s);
}

//O(n)tcandsc