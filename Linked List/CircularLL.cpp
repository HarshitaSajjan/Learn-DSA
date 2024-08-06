//last node connecting to heas node, structure is same as SLL, CLL can be either SCLL or DCLL44
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node (int d){
        data=d;
        next =NULL;
    }
};

int main(){
    Node *head= new Node(10);
    head->next = new Node(20);
    head->next->next= new Node(30);
    head->next->next->next= new Node(40);
    head->next->next->next->next= head;
//empty cll is null and single node, head->nect = head;
return 0;
}

/*
we cantraverse the whole list through any node
implementation of algoriths like round robin
we can insert ar the beginning and the end by just maintaining one tail reference/pointer
round robin is cpu scheduling mechanism generally, when process is done then u need to be remove fomr the process

implemetation of operations become complex

*///Method1 - for loop
void *traverseCLL(Node *head){
    if(head==NULL) return ;
    cout<<head->data<<" ";
    for(Node *p = head->next; p!=head; p=p->next)
    cout<<p->data;
}

//Method 2- do while loop
void traversecll2(Node* head){
    if(head==NULL) return;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }   
    while(p!=head);
}