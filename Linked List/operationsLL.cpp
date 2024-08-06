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

Node *insertBegin(Node *head, int x){
    Node *temp=new Node(x);
    temp->next = head;
    return temp;

// TC O(1) 
}

Node *insertEnd(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL)return temp;
    Node *curr = head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next = temp;
    return head;
}

Node *delHead(Node *head){
    if(head==NULL) return NULL;
    else{
    Node *temp= head->next;
    delete(head);
    return temp;
    }
}
// TC O(1)

Node *delTail(Node *head){
    if(head==NULL) return NULL;
    if(head->next ==NULL){
        delete head;
        return NULL;
    }
    Node *curr= head;
    while(curr->next->next!=NULL){
        curr = curr->next;
        delete(curr->next);
    }
    curr->next = NULL;
    return head;
}
//TC theta(N)

Node *insertposn(Node* head, int pos, int data){
    Node *temp = new Node(data);
    if(pos==1){
        temp->next=head;
        return temp;
    }
    Node *curr= head;
    for(int i=1; i<=pos-2 && curr!=NULL; i++){
    curr = curr->next;
    }
    if(curr==NULL) return head;
    temp->next= curr->next;
    curr->next = temp;
    return head;
}

int searchLLiterative(Node *head, int x){
    //iterative - traveersal Q of LL
    int pos=1;
    Node *curr= head;
    while(curr!=NULL){
    if(curr->data=x)
    return pos;
    else {
        pos++;
        curr=curr->next;
    }
    }
    return -1;
}
//TC O(n) SC O(1)

int searchRec(Node *head, int x){
    if(head==NULL) return -1;
    if(head->data == x) return 1;
    else{
        int res = searchRec(head->next, x);
        if(res==-1) return -1;
        else return (res+1);
    }
}

//TC O(n) SC O(n), bin search cant be applied here but special case of LL is skip list in that we can use
int main(){
    Node *head=NULL;
    head = insertBegin(head,30);
    head = insertBegin(head, 40);
    head = insertBegin(head, 50);
    
    return 0;
}