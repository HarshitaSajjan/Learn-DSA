#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d){
        data = d;
        next =NULL;
    }
};
//Naive - O(n), if tail is introduce then O(1)
Node *insertbegin(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL)
    temp->next=temp;
    else{
        Node *curr=head;
        while(curr->next !=NULL)
            curr=curr->next;
        curr->next = temp;
        temp->next =head;
    }
    return temp;
}

//Efficient
Node *insertBegin(Node *head, int x){
    Node *temp= new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t = head->data;
        head->data =temp->data;
        temp->data=t;
        return head;
    }
}

Node *insertEnd(Node* head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        Node *curr= head;
        while(curr->next !=head)
            curr=curr->next;
        curr->next = temp;
        temp->next =head;
        return head;
    }
}
//TC theta(n), also to improve it u can maintain tial ptr

//Efficient - O(1);
Node*insertEnd1(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int t =  temp->data;
        temp->data;
        temp->data=head->data;
        head->data=t;
        return temp;
    }
}

//Navie
Node *delhead(Node *head){
    if(head==NULL) return NULL;
    if(head->next ==head){
        delete head;
        return NULL;
    }
    Node * curr=head;
    while(curr->next !=NULL)
        curr=curr->next;
    curr->next = head->next;
    delete head;
    return (curr->next);
    //TC theta(n)
}

//Efficient - copy data to head and delet the next head node

Node *delhead(Node *head){
    if(head==NULL) return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    head->data= head->next->data;
    Node * temp = head->next;
    head->next= head->next ->next;
    delete temp;
    return head;
}

Node *delKthnode(Node * head){
    //no of node>=k
    //case1, k=1 and del head
    //case2 node not head
    if(head==NULL) return head;
    if(k==1) return delhead(head);
    Node *curr=head;
    for(int i=0; i<k-2; i++)
        curr=curr->next;
    Node *temp= curr->next;
    curr->next= curr->next->next;
    delete temp;
    return head;
}