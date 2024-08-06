#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next; 
    Node(int x){ 
        data = x;
        next = NULL;
    }
};

//Method1
void pairswap(Node *head){
    Node *curr=head;
    while(curr!=NULL && curr->next !=NULL){
        swap(curr->data,curr->next->data);
        curr=curr->next->next;
    }
}
//O(n) time ans O(1) space

//Method2- changing ptr/ref 

Node*pairwiseswap(Node *head){
    if(head==NULL || head->next==NULL)return ;
    Node *curr =head->next->next;
    Node *prev = head;
    head= head->next;
    head->next = prev;
    while(curr!=NULL && curr->next!=NULL){
        prev->next = curr->next;
        prev= curr;
        Node *next=curr->next->next;
        curr->next->next=curr;
        curr=next;
    }
    prev->next=curr;
    return head;
}