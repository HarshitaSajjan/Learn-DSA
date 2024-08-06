//givem root and key, finr floor of given bst
//floor is closest smaller or equla to value, if val is present return the val or if it is not present then return the largest value which is smaler than the key, if smaller value is not present then return NULL

/*
recursive
TC O(h)
SC O(1)

naive - in pre level order traversal
TC O(n)
and keep updatinsclosest smaller node
SC O(n) or O(h)

*/

/*Efficient solution is using BST Search*/
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node *left, *right;
    Node(int x){
        key =x;
        left = right =NULL;
    }
};

Node *floor(Node *root, int x){
    Node *res = NULL;
    while(root!=NULL){
        if(root->key ==x) return root;
        else if(root->key > x) 
        root = root->left;
        else{
            res = root;
            root = root->right;
        }
    }
    return res;
}
/*
tc O(h)
sc O(1)
*/