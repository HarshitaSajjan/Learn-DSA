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

/*cache is memory whoch is very close to cpu has vey less access time but small in size compared to ram, we need to have efificent utilizariton of this as it id very fast, lruis one of the techniques for this purpose, lru-least recently used, lru uses the concept of temporal locality which means item accessed nw=w is very likely to be acceseed in near future, it is kept in cache and we remove the leat recent item when we need memory and space
when somethingis not there in cache we call it a miss, and accesing which is already there in cache is called hit

*/

/*Simple implementation arrayO(n) time hit
O(n) miss*/

/*Efficient
hash table, hashing is unordered so with this we use DLL
hashing for quick access and insert
and DLL in the recency order
 
*/

refer(x){
   look  for x in has_trivial_copy_assign    if found HIT find the reference of the node in DLL. move the node to the front of dll.
    if not found MISS 
    insert a new node at the front of DLL 
    insert an entry into the HT 
}

O(1) timeO(1)space