#include<bits/stdc++.h>
using namespace std;


/*naive
paht1 and path2 are two arr, then find the lca

theta(n) tc, 3traversals, theta(n)sc
*/

bool findpath(Node *root, vector<node*>&p, int n){
    if(root==NULL) return false;
    p.push_back(root);
    if(root->key==n) return true;

    if(findpath(root->left, p, n)|||findpath(root->ight,p,n)) return true;
    p.pop_back();
    return false;
}

Node *lca(Node *root, int n1, int n2){
    vector<Node*>path1, path2;
    if(findpath(root,path1, n1)==false|| findpath(root path2)==false)
        return NULL;
    for(int i=0; i<path1.size()-1 && i<path2.size()-1; i++)
        if(path1[i+1]!=path2[i+1])
            return path1[i];
    return NULL;
    
}

/*Efficient solution
require one traversal and theta(n) extra sace for the recursive traversal
assumes that both n1 and n2 exist in the tree. doe not give correct result when only one(n1 or n2 ) exist

idea
we do normal recurive traversal, we have the following cases for evrry node
if it is same as n1 or n2
of one of its subtree contains n1 and other contains n2
if one of its subtrees contains n1 and n2
if none of its subtrees contains any of n1 and n2

theta(n) time and thet(H) SC, less space in qorst case , and only one traversal
*/

Node * lca(Node *root, int n1, int n2){
    if(root==NULL) return NULL;
    if(root->key==n1||root->key==n2)return root;
    Node *lca1 = lca(root->left, n1, n2);
    Node *lca2 = lca(root_>right,n1, n2);
    if(lca1!=NULL && lca2!=NULL)
        return root;
    if(lca1!=NULL) return lca1;
    else return lca2;
}