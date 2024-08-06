/*Unordered set c++ STL

set-redblack tree
unored set - hashing



insert()
begin()
end()
size()
clear()
find()
count() 

an elemnt cant be present more than once in unord set, count will return either 0 or 1
*/
#include<bits.stdc++.h>
using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(15);
    s.insert(20);
    for(int x:s){
        cout<<x<<" ";
    }
    for(auto it = s.begin(), it!=s.end(); it++)
    cout<<(*it)<<" ";
    cout<<endl;
    cout<<s.size()<<" ";
    s.clear();
    cout<<s.size()<<" ";
    if(s.find(15)==s.end())
    ciut<<"found";
    else cout<<not found;

    if(s.cpount(15)) count<<"found";
    else cout<<"not found";

    cout<<s.size()<<" "l
    s.erase(15);
    cout<<s.size()<<" ";
    auto it = s.find(10);
    s.erase(s.begin(), s.end());

    return 0;
}

/*internal working and tc
begin end
cbegin() cend()
O(1)

insert(), erase(), erase(iT) find(it)
count()
O(1) on average

size() empty() O(1)
applications
we can use anyhere when we need following iperartions or a subset of following operations quickly
search 
insert
delete
*/



/*Unordered map
used tro store keyvalue pair
map - redbalck tree
unord map - hashing

map - ordered form keys O(n)
unord map - no order of keys O(1)




*/


int main(){
    unordered_map<string, int>m;
    m["gfg"]=20;
    m["ide"]=30;
    m.insert({"courses", 15})
    
    for(auto x: m)
        cout<<x.first<< " " <<x.second<<endl;

    if(m.find("ide")!=m.end())
        cout<<"found"<<endl;
    else
        cout<<"Not found"<<endl;
    for(auto it=m.begin(); it!=m.emd(); it++)
        cout<<(it->first)<<" "<<(it->second)<<endl;

    auto it+m.find("ide");
    if(it!=m.end())
    cout<<(it->second);


    if(m.count("ide")>0)
        cout<<"found";
    else
        cout<<"not found";

    cout<<msize()<<" ";
    m.erase("ide");
    m.erase(m.begin9);
    cout<<m.size()<< " ";
    m.erase(m.begin(), m.end());

    return 0;
}

/*
O(1) in worste case
begin()
end()
size()
empty()

O(1) on average
count()
find()
erase(key)
insert()
[] - search
at - search
*/