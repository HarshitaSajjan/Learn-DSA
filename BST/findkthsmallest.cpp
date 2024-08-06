#include<bits./stdc++.h>
using namespace std;

/*desing a data structure that allows following operations efficiently
search
insert
delete
kth smallest

arr can be used
ll can be used
hashing last cant be done in linear time

use bst

*/


//naive O(m) for kth smallest

void kthsmallest(root, k){
    if(root is not null){
      kthsmallest(root->left, k)
      count++;
      if(count==k)
        print(root->key)
    kthsmallest(root->right);  
    }
}

//efficient O(h)

struct Node{
    int key;
    Node *left, right;
     int lcount;
     Node(int x){
        key =x;
        left=NULL;
        right = NULL;
        lcount=0;
     }
}
/*compare (lcount+1) with k
if same, return root
if greater, recur for left subtree with same k
if lesser, recur for right subtree with k as (a-lcount-1)

lcpount-> vount of aodes in the left subtree

how to maintai lcount during insertion/deletion

*/