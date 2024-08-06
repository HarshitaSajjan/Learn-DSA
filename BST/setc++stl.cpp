#include<bits/stdc++.h>
using namespace std;
//stores in sorted order

int main(){
    set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(7);

    for(int x:s)
        cout<<x<<" ";
//set ignores duplicate value
//rbegin r end will be reversee
    set<int, greater<int>>s; //decreasing order
    for(auto it = s.begin(); it!=s.end(); it++)
        cout<<(*it)<<" " ;


        auto it= s.find(10);
        if(it==s.end())
            cout<<"not found"<<endl;
        else
            cout<<"found"<<endl;
        while(it!=s.end())
            cout<<*it<<" ";


        s.clear() //clears the set

        if(s.count(10)) //return boolean values
            cout<<"found"<<" ";
        else 
            cout<"not found"<<" ";


        s.erase(5);

        auto it = s.find(7);
        s.erase(it);

        s.erase(it, s.end());


        auto it = s.lower_bound(5);
        if(it!=s.emd())
            cout<<(*it)<<" "l
        else    
            cout<<" given wlement is "<<"greater than the largest"

        
        auto it = s.upper_bound(5);
        if(it!=s.end())
            cout<<(*it)<<" ";
        else    cout<<"given element is greater than the largest";


/*
set is built iwith self balacning uses rb tree
O(1)
begin end
rbegin rend
cbegin cend
crbegin crend
size
empty

O(logn)
insert() find()
count()
lower_bound(), upper_bound(), erase(val)


amortized O(1)
erase(it)

*/
    return 0;
}


struct test{
    int x;
    bool operator<(const test &t) const{
        return (this->x<t.x);
    }
}

/*spplicatiosn

sorted stream of data
double ended prioirty queue*/