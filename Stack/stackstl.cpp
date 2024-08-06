#include<bits/stdc++.h>
using namespace std;


/*
O(1)tc 
push();
pop()
top()
size()
empty()

stack can be implemented on any underlying container that provides following operations
back()
size()
empty()
push_back()
pop_back()


stack is conatiner adapter, queue and pq also are
*/
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<" ";
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<" ";

    while(s.empty()==false){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}