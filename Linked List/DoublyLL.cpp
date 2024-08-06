#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev; 
    Node*next;
    Node(int d){
        data=d;
        prev=NULL;
        next= NULL;
    }
};



int main(){
    Node *head= new Node(10);
    Node *temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp2->prev = temp1;
    temp1->next = temp1;


    return 0;
}

/*
DLL u can traverse  both the directions, like in webpg

a given delete a node in O(1) time with given reference/pointer to it

inseert/deletebefore a given node

insert/delet from both ends in O(1) time by maintaining tail

extra space for prev
code becomes more complex

*/