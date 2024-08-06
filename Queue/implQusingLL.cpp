/*
enqueue(x)
deque()
size()
getFront()
getrear()
isempty()

*/

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
struct Queue{
    Node *front, *rear;
    int size;
    Queue(){
        front==NULL; rear=NULL;
        size=0;
    }
    void enque(int x){
        Node *temp=new Node(x); size++;
        if(front==NULL){
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }
    void deque(){
        if(front==NULL)return; sie--;
        Node *temp =front;
        front=front->next;
        if(front==NULL){
            rear=NULL;
        }
        delete(temp);
    }
}