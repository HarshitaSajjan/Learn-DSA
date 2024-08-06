#include<bits/stdc++.h>
using namespace std;

/*insertfront()
insertRear()
deleteFront()
deleteRear()
getFront()
getRear()
size()
isFull()
isEmpty()
*/

/*simple implementation*/
struct Deque{
    int size,cap;
    int *arr;

    Deque(int c){
        cap=c;
        size=0;
        arr= new int[cap];
    }
    /*front at 0 and rear at size-1
    deleterear and insertrear O(1)
    deletefront and insertfront O(n)*/

    bool isFull(){return(size==cap);}
    bool isEmpty(){return (size==0);}

    void insertRear(int x){
        if(isFull()) return;
        arr[size]=x;
        size++;
    }
    void deleteRear(){
        if(isEmpty()) return;
        size--;
    }
    int getRear(){
        if(isEmpty()) return -1;
        else return (size-1);
    }
    void insertFront(int x){
        if(isFull()) return;
        for(int i=size-1; i>=0; i--){
            arr[i+1]=arr[i];
    arr[0]=x;
    size++;
        }
    }
    void deleteFront(){
        if(isEmpty()) return;
        for(int i=0; i<size-1; i++)
            arr[i]=arr[i+1];
            size--;
    }
    int getfront(){
        if(isEmpty()) return -1;
        else return 0;
    }

};



/*Efficient Implementation*/

struct deque{
    int *arr;
    int front, cap, size;
    deque(int c){
        arr = new int[c];
        cap=c;
        front=0; 
        size=0;
    }
//rear is always (front+size-1)%cap;
void deleteFront(){
    if(isEmpty()) return;
    front = (front+1)%cap;
    size--;
}
void insertRear(int x){
    if(isFull()) return;
    int new_rear = (front+size)%cap;
    arr[new_rear]=x;
    size++;
}
int getFront(){
    if(isEmpty()) return;
    else return front;
}
void insertFront(int x){
    if(isFull()) return;
    front = (front+cap-1)%cap;
    arr[front]=x;
    size++;
}
void deleteRear(){
if(isEmpty()) return;
size--;
}
int getRear(){
    if(isEmpty()) return -1;
    else return (front+size-1)%cap;
}
};