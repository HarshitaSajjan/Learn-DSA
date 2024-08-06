#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int d){
        data=d;
        next=prev=NULL;
    }
};

Node *insertbegin(Node *head, int data){
    Node *temp = new Node(data);
    temp->next = head;
    if(head!=NULL)
        head->prev = temp;
        return temp;
}


Node *insertEnd(Node *head, int data){
    //head is midifes only when given node is null otherwise not
    Node *temp = new Node(data);
    Node *curr=head;
    if(head==NULL) return temp;
    while(curr!=NULL){
        curr=curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}

Node *reverseDLL(Node *head){
    if(head==NULL || head->next == NULL)return head;
    Node *prev =NULL;
    Node *curr= head;
    while(curr!=NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next =prev;
        curr=curr->prev;
    }
    return prev->prev;
}
// TC one traversal and contsnat SC

Node *delhead(Node *head){
    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        Node* temp= head;
        head = head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
}
//TC theta(1)

Node *delLast(Node* head){
    if(head==NULL ) return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->prev->next=NULL;
    delete curr;
    return head;
}
//TC theta(n), if maintain tail ptr, then tc can be reduced
/*tail->prev->next =NULL; no while loop required all ipmenetation need to ensure tail ptr is properly updated and tc becomes theta(1)*/