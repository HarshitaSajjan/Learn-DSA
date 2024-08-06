#include<bits/stdc++.h>
using namespace std;

/*iterative*/

void reverse(queue<int>&que){
    stack<int>s;
    while(q.empty()==false){
        s.push(q.top());
        q.pop();
    }
    while(s.empty()==false){
        q.push(s.top());
        s.pop();
    }
}

/*recursive*/
void reverserec(queue<int>&q){
    if(q.empty()) return;
    int x=q.top();
    q.pop();
    reverse(q);
    q.push(x);
}