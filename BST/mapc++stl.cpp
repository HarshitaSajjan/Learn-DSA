#include<bits/stdc++.h>
using namespace std;
/*map uses rbtree
map used to store key value pair
set - single object
map - pair
element in map are ordered in keys


at() only whne key is present
insert()
operator()
size()
empty()
clear()
begin()
end()


find
count
lower_bound
upper_bound
erase

*/

int main(){
map<int, int>m;
m.insert({10,200});
m[5]=100;
m.insert({3,300});
m.insert({3,400}); // ignored
for(auto &x: m)
    cout<<x.first<<" "<<x.second<<" ";

cout<<m.size()<<" ";
cout<<m[20]<<" ";
cout<<m.size()<<" ";

    m[10]=300;
m.at(10)=300;

for(auto it=m.begin(); it!=m.end()l it++)
    cout<<(*it).first<<" "<<(*it).second<<endl;
m.clear();
cout<<m.size();




map<int,string>m; // map<int, string, greater<int>>m; for decreasing
mp.insert({5,"gfG"});
mp.insert({2,"ide"});
m.insert({1,"practice"});
if(m.find(3)==m.end())
cout<<"notfound";
else
cout<<"found";


for(auto it= m.find(2); it!=mm.end(); it++)
    cout<<(*it).first<<" "<<(*it).second<<endl;


if(m.count(2)==0)cout<<"found"
else cout<<"notfound";


auto it=m.lower_bound(2);
if(it!=m.end()) cout<<(*it).first;
else cout<<"no equal or greater vla";

auto it=m.upper_bound(2);
if(it!=m.end()) cout<<(*it).first;
else cout<<"no greater vla";

m.erase(5);
cout<<m.size()<<" ";

m.erase(m.find(5));

m.erase(m.find(2), m.end());

/*
O(1)
begin
end
rbegin
rend
crbegin
crend
cbegin
cend
size
empty


O(logn)
count
find
erase(key)
insert
[]
at


erase(it) ->onavg O(1)time
*/
    return 0;
}



/*applications

sorted stream of data with key, value pairs

doubly ended prioirity queue with items with key,value, pairs
*/