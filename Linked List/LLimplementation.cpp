//mermory (array of bytes), 4 node for int and 4 byte for adds

#include<bits/stdc++.h>
using namespace std;
// why struct bcz we need to store mixed type of data in one place
struct Node{
    int data;
    Node *next; //self referential structures , as every node need to have add of next node, and next node has same data structure
    Node(int x){ // constructor, makes progamming better instead of using seperate function
        data = x;
        next = NULL;
    }
};
int main(){
    Node *head = new Node(10);
    Node *temp = new Node (20);
    Node *temp2 = new Node(30);
    head->next = temp;
    temp->next = temp2;

    return 0;
}

