#include<bits/stdc++.h>
using namespace std;

struct TrieNode{
    TrieNode *child[26];
    bool isEnd;
    TrieNode(){
        isEnd=false;
        for(int i=0; i<26; i++)
        child[i]=NULL;
    }
}

/*
a 0
b 1 
c 2
. .
. .
. .
z 25

value  we get by subtrating char ascii value by a's ascii value
as ascii ar contigous
a = 97 
b=98 so on

empty trie is represnted by a root node with all 26 children as null, this rep is diff from binary tree
as in bt we rep it as null, we dont allocate memory for empty binary tree, but here we have memory is allocated even in empty trie it is just as 26 children are null for this root and and isend is false

*/

TrieNode *root;
bool search(string &key){
    TrieNode *curr= root;
    for(int i=0; i<key.length(); i++){
        int index=key[i]-'a';
        if(curr->child[index]==NULL)
            return false;
        curr= curr->child[index];
    }
    return curr->isEnd; 
}

void insert(string str){
    TrieNode *curr = root;
    for(int i=0; i<key.length(); i++){
        int index=key[i]-'a';
        if(curr->child[index]==NULL)
            curr->child[index] = new TrieNode();
        curr = curr->child[index];
    }
    curr->isEnd=true;
}

/*
alphabet is 26
ascii value is 256
allocation new node is contants
next child is also contants
theta(n) work for key of length n;

search is O(n) n is key length
*/

TrieNode *delKey(TrieNode *root, string &key, int i){
    if(root==NULL) return NULL;
    if(i==key.length()){
        root->isEnd = false;
        if(isEmpty(root)==true){
            delete(root);
            root==NULL;
        }
        return root;
    }
    int index=key[i]-'a';
    root->child[index]= delKey(root->child[index],key,i+1);
    if(isEmpty(root)&&root->isEnd==false){
        delete(root);
        root=NULL;
    }
    return root;
}
bool isEmpty(TrieNode *root){
    for(int i=0;i<26; i++)
        if(root->child[i]!=NULL)
            return false;
    return root;
}


/*
TC 
key length =n
trie delete O(n)
every recursive call constant work
overall O(n)
*/