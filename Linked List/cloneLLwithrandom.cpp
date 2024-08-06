#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next; 
    Node *random;
    Node(int x){ 
        data = x;
        next = NULL;
    }
};

//Clone a Linked List with random pointers or references


/*Method1
create a hashmap hm
for(curr=h1; curr!=NULL; curr=curr->next)
hm[curr]=new Node(curr->data);

for(curr=h1; curr!=NULL; curr=curr->next){
clonecurr=hm.find(curr);
clonecurr->next-hm(curr->next);
clonecurr->random=hm(curr->randomd;
}
h2=hm[h1];
*/

/*Method2
O(n) time
O(1) space
STEP1:
for(curr=h1;curr!=NULL; curr=curr->next){
next=curr->next;
curr->next=new Node(curr->data)
curr->next->next=next;
curr=next;
}

STEP2:
for(curr=h1; curr!=NULL; curr=curr->next->next)
curr->next->random = (curr->random!=NULL)? curr->random->next :NULL

STEP3:
creat node and connect them
seperate node from original list and set next of all nodes
*/