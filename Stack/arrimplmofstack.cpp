#include<bits/stdc++.h>
using namespace std;

Mystack s(10);
s.push(5);
s.push(15);
s.push(20);
cout<<s.size()<<endl;
cout<<s.peek()<<endl;
cout<<s.pop()<<endl;
s.push(35);
cou<<<s.peek()<<endl;
cout<<s.isempty()<<endl;


struct mystack{
    int *arr;
    int cap;
    int top;
    mystack(int c){
        cap=c;
        arr= new int[cap];
        top=-1;
    }
    void push(int x){
        top++; // if(top==cap-1){}
        arr[top]=x;
    }
    int pop(){
        //if(top==-1){}
        int res= arr[top];
        top--;
        return res;
    }
    int peek(){
        //ig(top==-1){}
        return arr[top];
    }
    int size(){
        return (top+1);
    }
    bool isEmpty(){
        return (top==-1);
    }
};

/*probelm with this ocde
doesnot handle overflow and underflow
we need to provide capacity initilly no dynamic resizing

push pop tc O(1)

*/

struct mystack{
    vector<int>v;
    void push(int x){
        v.push_back(x);
    }
    int pop(){
        int res= v.back()
        v.pop_back();
        return res;
    }
    int peek(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool isEmpty(){
        return v.empty();;
    }
};

