/*
prev of hed is last node
next of last node is head;

an empty CDLL 
head NULL

 a single node CDLL
 prev and next is itself

 we get all adv og cll and dll

 we can access last node in constant tim without maintaining extra tail ptr/ref
*/

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev; 
    Node*next;
    Node(int d){
        data=d;
        prev=NULL;
        next= NULL;
    }
};

Node *insertHead(Node* head , int x){
    Node *temp= new Node(x);
    if(head==NULL){
        temp->next= temp;
        temp->prev= temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev = temp;
    return head ;
}
int main(){
    return 0;
}

