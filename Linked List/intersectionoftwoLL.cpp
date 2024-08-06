#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next; 
    Node(int x){ 
        data = x;
        next = NULL;
    }
};

/*method1 
create an empty hash set hs
traverse the first list  and put all of its nodes into the hs
ytraverse the second list and look for every node in hs, as soon as we find a node present in hs, we return a value of it

O(m)+O(m)+O(m+n) time
O(m) space

*/

/*Method2
O(1) space
O(n) time
count nodes in both the lsist let the counts be c1 and c2
traverse the bigger list abs(c1-c2) times
traverse both the list simultanouesly until we see a common node

while(curr!=NULL && curr2!=NULL){
if(curr1==curr2) return curr->data
curr1->curr1->next;
curr2=curr2->next;
}
return -1;
*/ 
