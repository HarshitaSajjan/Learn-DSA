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

//Naive
void middleLL(Node* head){
    if(head==NULL) return;
    int count=0;
    Node*curr;
    for(curr=head; curr!=NULL; curr=curr->next)
    count++;
    curr=head;
    for(int i=0; i<count/2; i++)
    curr=curr->next;
    cout<<curr->data;
}

//Efiicient Solution slow and fast ptr
void printMiddleLL(Node *head){
    if(head==NULL) return;
    Node *slow= head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast = fast->next->next;
    }
    cout<<slow->data;
}