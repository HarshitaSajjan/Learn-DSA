struct Node{
    int key;
    Node *left;
    Node *right; 
    Node(int k){
        key=k;
        left=right=nullptr;
    }
};

int main(){
    Node *root = new Node(10);
    root->left= new Node(20);
    root->right = new Node(30);
    root->left->left= new Node(40);
}

//if an empty tree
/*
Node *root = NULL;  
root = null means there is nothing in tree
*/