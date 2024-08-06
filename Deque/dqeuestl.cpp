#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int>dq={10,20,30};
    dq.push_front(5);
    dq.push_back(50);
    for(auto x: dq)
        cout<<x<<" ";
    cout<<dq.front()<<" "<<dq.back()<<" ";

    deque<int>deq = {10,20,30, 40, 50};
    auto it= deq.begin();
    it++;
    deq.insert(it, 15);
    deq.pop_front();
    deq.pop_back();
    cout<<deq.size();
    
    return 0;
}