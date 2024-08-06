#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next =NULL;
    }
};

//Naive-stack

bool isplaindrome(Node *head){
    stack<char>st;
    for(Node *curr=head; curr!=NULL; curr=curr->next){
        st.push(curr->data);
    }
    for(Node *curr=head; curr!=NULL; curr=curr->next){
        if(st.top()!=curr->data)
        return false;
        st.pop();
    }
    return true;
}
//tc theta(n) and theta(n) sc

//Efficient solution
/*find middle node and reverse the after middle then compare one by one if match then move forward otherwise return false*/

bool isplaindromeeff(Node *root){
    if(head==NULL) return true;
    Node *slow=head, *fast =head;
    while(fast->next!=NULL && fast->next->next !=NULL){
        slow=slow->next;
        fast = fast->next->next;
    }
    Node *rev= reverselist(slow->next);
    Node *curr=head;
    while(!=NULL){
        if(rev->data != curr->next)    return false;
    rev= rev->next;
    curr=curr->next;
    }
    return true;
}

//theta(n) time, theta(1) space