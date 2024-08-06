#include<bits/stdc++.h>
using namespace std;

/*
push(x)
pop()
size()
isEmpty()
peek()

maintain LIFO order
adding and removing item at head O(1)
*/

strcut Node{
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
struct Mystack{
    Node *head;
    int size;
    mystack(){
        head=NULL;
        size=0;
    }
    void push(int x){
        Node *temp = new Node(x);
        temp->next head;
        temp=head;
        size++;
    }
    int pop(){
        if(head==NULL)
            return INT_MAX;
        int res = head->data;
        Node *temp=head;
        head=head->next;
        delete(temp);
        size--;
        return rres;
    }
    int size(){
        return size;
    }
    bool isEmpty(){
        return (head==NULL);
    }
    int peek(){
        if(head==NULL)
            return INT_MAX;
        return head->data;
    }
};
//tc O(1) worst case 
// tc in vector amortized O(1)