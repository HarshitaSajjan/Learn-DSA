#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.front()<<" "<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<" "<<q.back()<<endl;

    while(q.empty()==false){
        cout<<q.front()<<" "<<q.back()<<endl;
    }
    return 0;
}
/*push()
pop()
front()
back()
empty()
size()
tc O(1)

queue can be implemented on any underlying container that provides the following functions


stack has

list and deque, if not mentioned by default it will be deque
empty()
sie()
front()
back()
push_back()
pop_front()
*/