#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next = NULL;
    }
};

void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

void recPrint(Node *head){
    if(head==NULL)
    return ;
    cout<<(head->data)<<" ";
    recPrint(head->next);
}
// TC O(n), SC(n)

int main(){
    
/*Traverse Linked List
Node *head = new Node(10);
head ->next = new Node(20);
head->next ->next = new Node(30);
head->next ->next->next = new Node (40);
print(head);
*/

//Recursive Linked list


return 0;
}