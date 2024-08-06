/*
Tree Traversal
printing every key of tree exactly once
to search the key
to know the size of tree 
etc are based on tree traversal
traverses every node of tree exactly once or processes eery novde at least once



Breadth First 
    Level order (like reading a book line by line)
Depth First one side first and then other side
    Inorder
    Preorder
    Postorder


    root, left subtree, rght subtree -> three things
    what is done need to do taht recursivley for subtree
    recursive 
        traverse root
        traverse left subtree
        traverse right subtree


        can travers in 3! way but 3 are most famous and s used popular-> inorder preorder postorder
        left is visited first and then right

    Inorder left root right
    Preorder root left right
    Postorder left right root
*/
/*
TC SC thetaO(x)
*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key = k;
        left = right =NULL;
    }
};

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);
    }
}


/*TC O(n)
SC O(heightOf Binary tree) = O(h)
*/

void preorder(Node *root){
    if(root!=NULL){
        cout<<(root->key)<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

/*
TC O(n)
SC O(h)
*/


void postorder(Node *root){
    while(root!=NULL){
    postorder(root->left);
    postorder(root->right);
    cout<<(root->key)<<" ";
    }
}


/*
TC O(n)
SC O(h) 
*/

 /*Level Order*/
 // first find height of binary treee ans then print the nodes at distance k from node

// O(N)+O(n*h) for the above approach = O(h*n)
// this can be O(n) recursion is not good idea, we can use queue
//enqueue root then take out then enqueue their child levele nodes then take them out then their children so oonn
/*
empty queue
enqueue root
run loop while q not empty
taking out an item
checking whether its left and right child are nit empty if not enqueu them then print, then so on,
three states 
1.never went to queue
2.its there in queue(node is discovered)
3.it went to queue and came out of the queue(it is processed)
4. enqueue its children(goes from undiscivered state to discovered state)
enqueueO(1)
dequeueO(1)
overall O(n)
theta(n)
auxilary space O(n) one level at most at a timen/2 nodes at last level
theta (W) where W is width

*/

void levelorder(Node *root){
    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        Node *curr = q.front();
        q.pop();
        if(curr==NULL){
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<(curr->key)<<" ";
        if(curr->left!=NULL) q.push(curr->left);
        if(curr->right!=NULL) q.push(curr->right);
    }
}

/*TC O(h) extra nulls
overall(n+h) = O(n)

SC theta(W+1) where w is width = O(n)
widht can go upto theta(n)
*/

void levelorder2(Node *root){
    if(root==NULL) return;
    queue<Node *> q;
    q.push(root);
    while(q.empty()==false){
        int count=q.size();
        for(int i=0; i<count; i++){
            Node *curr = q.front();
            q.pop();
            cout<<(curr->key)<<" ";
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
        cout<<"\n";
    }
}
/*
TC traverse n node
for every node enetring and coming out of queue once 
= O(n)

SC theta(W) or O(n)
*/