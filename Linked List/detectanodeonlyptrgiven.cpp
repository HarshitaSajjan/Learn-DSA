#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

/*SLL
given addressor ref of random in ll , u have to del this node

assume that node will never be th last node
*/

void deletenode(Node* head){
Node *temp=ptr->next;
ptr->data= temp->data;
ptr->next = temp->next;
delete(temp);
//wont work if it is last node
}
