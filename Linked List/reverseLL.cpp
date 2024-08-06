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

//Naive Solution -using Auxilary array, two traversal, SC O(n)
Node *revList(Node*head){
    vector<int>arr;
    for(Node *curr=head; curr!=NULL; curr=curr->next){
        arr.push_back(curr->data);
    }
    for(Node *curr = head; curr!=NULL; curr=curr->next){
        curr->data= arr.back();
        arr.pop_back();
    }
    return head;
}

//Efficient - reverse links
/*
next = curr->next
curr->next = prev
prev =curr
curr=next
*/
void reverseLL(Node *head){
    Node *curr = head;
    Node *prev=NULL;
    while(curr!=NULL){
        Node *next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev; //prev is new head
} 
//O(n) tc O(1) sc

// recursive reverse 1
Node *recRec(Node *head){
    if(head==NULL || head->next==NULL) return head;
    Node* rest_head = recRev(head->next);
    Node *rest_tail = head->next;
    rest_tail->next =head;
    head->next = NULL;
    return rest_head;
}

//recursive reverse 2
Node *recRev2(Node*head){
    Node *curr=head;
    if(curr==NULL)return prev;
    Node *next=curr->next;
    curr->next=prev;
    return recRev2(next, curr);
}  
