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

//Method1- using length of Linked List

void printnthNode(Node*head, int n){
    int len =0;
    for(Node *curr=head; curr!=NULL; curr=curr->next)
    len++;
    if(len<n)
    return;
    Node *curr=head;
    for(int i=1; i<len-n+1; i++)
    curr=curr->next;
    cout<<(curr->data)<<" ";
}

//Method2 - using two pointers/ references
/*
move first two posn ahead
start second ptr from head;
move both first and second at same speed, when first reaches null second reaches the required node(here n=3);

*/
void printend2(Node *head, int n){
    if(head==NULL) return;
    Node *first = head;
    for(int i=0; i<n; i++){
        if(first==NULL) return;
        first = first->next;
    }
    Node *second =head;
    while(first!=NULL){
        second=second->next;
        first=first->next;
    }
    cout<<second->data;
}
//TC O(n)