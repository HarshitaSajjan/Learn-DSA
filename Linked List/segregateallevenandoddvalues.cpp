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
//their relative order should be same

//naive, tyraverse ll stored add of last node, all odd node then add this to last ie. till end, it requires two traversal

/*one traversal
while yraversing keep connecting even edd and odd end
*/
Node *segregate(Node* head){
    Node *eS=NULL, *esE = NULL, *oS=NULL, *oE=NULL;
    for(Node *curr=head, curr!=NULL;curr=curr->next){
        int x=curr->data;
        if(x%2==0){
            if(eS==NULL){
            eS=curr;
            eE=eS;
            }
            else{
                eE->next=curr;
                eE=eE->next
            }
        }
        else{
            if(oS==NULL){
                oS=curr;
                oE=oS;
            }
            else{
                oE->next=curr;
                oE=oE->next;
            } 
        }
    }
    if(oS==NULL||eS==NULL)return head;
    eE->next=oS;
    oE->next=NULL;
    return eS;
}