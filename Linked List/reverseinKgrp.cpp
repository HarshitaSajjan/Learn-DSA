#include<bits/stdc++.h.
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next = NULL;
    }
};
//Iterative
void ReverseinK(Node *head, int k){
    Node *curr=head;
    Node *prev=NULL;
    Node *next = NULL;
    int count =0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;
        count++;
    }
}

//Recursive
void reverseinKrec(Node *head, int k){
    Node *curr= hed, *next=NULL, *prev=NULL;
    int count=0;
    while(curr!=NULL && count<k){
        next = curr->next;
        curr->next =prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        Node*rest_head = reverseinKrec(next,k);
        head->next = rest_head;
    }
    return prev; //prev is new head
}
//O(n) tc sc O(n/k)

//Iterative soltuion

Node *revKrec(Node *head, int k){
    Node *curr=head, *prevFirst=NULL;
    bool isfirstpass=true;
    while(curr!=NULL){
        Node *first=curr, *prev=NULL;
        int count=0;
        while(curr!=NULL && count<k){
            Node *next = curr->next;
            curr->next = prev;
            prev =curr;
            curr=next;
            count++;
        }
        if(isfirstpass){
            head=prev;
            isfirstpass=false;
        }
        else{
        prevFirst->next=prev;
    }
    prevFirst=first;
    }
    return head;
}

