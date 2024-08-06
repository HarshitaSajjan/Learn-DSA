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
// no extra space , merge two sorted linked list

/*two ptrs for two LL a and b and head of  LL, also maintain tailptr to  amke easy the append the node

tail=head=b
compare a and b 
whch is smaller add that to tail

*/

Node *MergeLLSort(Node *a, Node *b){
    if(a==NULL)return b;
    if(b==NULL) return a;
    Node *head = NULL, *tail=NULL;
    if(a->data<=b->data){
        head=tail=a;
        a=a->next;
    }else{
        head=tail=b;
        b=b->next;
    }
    while(a!=NULL && b!=NULL){
        if(a->data<=b->data){
            tail->next=a;
            tail=a;
            a=a->next;
        }
        else{
            tail->next;
            tail=b;
            b=b->next;
        }
    }
    if(a==NULL)
    tail->next=b;
    else tail->next=a;
    return head;
}
//O(m+n) time O(1) space