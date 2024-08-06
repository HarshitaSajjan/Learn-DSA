/*when insert one it becomes both front and rear
second item insert
fron rear
remove item ->remove front and make new front

additonal operations
size()
getFront()
getrear()
isFull()
isEmpty()
*/

//O(n) time
struct Queue{
    int size, cap;
    int *arr;
    Queue(int c){
        cap=c;
        size=0;
        arr=new int[cap];
    }
    void enqueue(int x){
        if(isFull())return;
        arr[size]=x;
        size++;
    }
    void deque(){
        if(isEmpty())return;
        for(int i=0; i<size-1;i++){
            arr[i]=arr[i+1];
            size--;
        }
    }
    int getFront(){
        if(isEmpty()) return -1;
        else return 0;
    }
    int getRear(){
        if(isEmpty()) return -1;
        else return size-1;
    }
    bool isFull(){
        return (size==cap);
    }
    bool isEmpty(){
        return (size==0);
    }
    int size(){}
};  

//Efficient Solution O(1) time, circular array

struct Queue{
    int *arr;
    int front, cap, size;
    Queue(int c){
        arr=new int[c];
        cap=c;
        front=0;
        size=0;
    }
    void enqueue(int x){
        if(isFull())return;
        int rear=getRear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }
    void deque(){
        if(isEmpty())return;
        for(int i=0; i<size-1;i++){
            front=(front+1)%cap;
            size--;
        }
    }
    int getFront(){
        if(isEmpty()) return -1;
        else return front;
    }
    int getRear(){
        if(isEmpty()) return -1;
        else return (front+size-1)%cap;
    }
    bool isFull(){
        return (cap==size);
    }
    bool isEmpty(){
        return (size==0);
    }
    int size(){}
};  
