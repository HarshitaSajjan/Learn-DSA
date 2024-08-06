/*
consider a situation where we have library avaiablle for queue
and we need stack library. how to implement the stack 


*/

struct Stack{
    int top(){}
    int push(){}
    int pop(){}
    int size(){}
};

struct stack{
    queue<int>q1, q2;
    int top(){
        return q1.front();
    }
    int size{
        return q1.size();
    }
    int pop(){
        return q1.front();
    }
    void push(int x){
        while(q1.empty()==false){
            q2.push(q1.top());
            q1.pop();
        }
        q1.push(x);
        while(q2.empty()==false){
            q1.push(q2.top());
            q2.pop();
        }
    }
};

/*More Variations*/
/*Implement stack using queue by making pop operation costly
implement stack using only one queue(we use recursion call stack here)
implement queue using stack
    by making enque() operation costly
    by making deque() operations costly
    by using one stack (and one recursion call stack)
    */