//Chaining
/*maintain arrya of Linkes List headers
hash(key)=key%7(here);

whenevrr a colision happens, insert a item at end of LL
prime no. greater and closest to n
chances of collision are less in prime no.
here 7 is prime

10^m, m decimal digits
2^m then m bits


Performance
m=no of slots in hash table
n = no of keys to  be inserted
load factor alpha= n/m (how big u want hash tbale should be), it should be small, to avoid collisions
expected chain length = alpha
expected time to search O(1+alpha)
to insert.delete O(1+alpha)

data structure to sotred chain
    ll
    dynamic sized array(vectorc++, arraylist in java, lost in python)
    self balancing bst(avl tree, red black tree)
*/

//Implementation of Chaining - bucket(m) size = no of entries

struct Myhash{
    int bucket;
    list<int>*tableMyhash(int b){
        bucket=b;
        table = new list<int>[b];
    }
    void insert(int key){
        int i=key%bucket;
        table[i].push_back(key);
    }
    bool search(int key){
        int i =key%bucket;
        for(auto x: table[i])
            if(x==key)
                return true;
        return false;
    }
    void remove(int key){
        int i=key%bucket;
        table[i].remove(key(;))
    }
}


/*Open Addressing
no of slots in hash table>= no of keys to be inserted
cache friendly

single array
linear rpboing
quadratice probing
doible hasing

hash(key)=key%7;
linearly search for next empty slot when there is collision in linear probing 
search also linearly
we comoute hash fn, we goto index, if find key then done, return true, otherwise linearly search, stop search when empty slot, key found, or traverse through whole table

probem wth making slot empty 
search will fail, 
so mark the slot as deleted , search will stop at empty not deleted slot


Clustering(a problem with linear probing), these clusters impact performance

hash(key, i) = (h(key)+i)%7 =>linear probing
hash(key, i) = (h(key)+i^n)%7 =>quadratic probing
clustering is still there, linear prob primary clusters, qp sedcondary clusters, but better than LP
QP may not find empty slot even if it is trhere,
alpha <0.5 and n is prime then there is guarantee works then
*/
//Implementation of Open Addressing

struct myhash{
    int *arr;
    int cap, size;
    myhash(int c){
        cap=c;
        size=0;
        for(int i=0; i<cap; i++)
        arr[i]=-1;
    }
    int hash(int key){
        return key%cap;
    }
    bool search(int key){
        int h=hash(key); 
        int i=h;
        while(arr[i]!=-1){
            if(arr[i]==key)
                return true;
            i=(i+1)%cap;
            if(i==h)
                return false;
        }
        return false;
    }
    bool insert(int key){
        if(size==cap)
            return false;
        int i = hash(key);
        while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)
            i=(i+1)%cap;
        if(arr[i]==key)
            return false;
            else{
                arr[i]=key;
                size++;
                return true;
            }
    }
    bool erase(int key){
        int h= hash(key);
        int i=h;
        while(arr[i]!=-1){
            if(arr[i]==key){
                arr[i]=-2;
                return true;
            }
            i=(i+1)%cap;
            if(i==h)
                return false;
    }
    return false;
}
//how to handle the cases when -1 and -2 are input keys 
/*cahhining
hash table never fills
less sensitive to hash functions
poor cache performance
extra space for links
comparisons (1+alpha)


Open addressing
table may become full and resizing becomes mandatory
extra care required for clustering
cache friendly
extra space might be needed to achieve same performance as chaining
comparison 1/(1-alpha)
*/

/*
Double Hahsing - 2 hash functions
hash(key, i) = (h1(key)+i*h2(key))%m =>linear probing
if h2(key) is relatively prime to m then it always finda freee slot if there is one
distribute keys more uniformly than linear probing and quadratic hashing
no clustering

exampl
m=7
h1(key) = key%7
h2(key) = 6-(key%6)

why h2(key) and m should be relatively prime


void doublehashinginsert(int key){
if(table if ful)
return error;
probe=h1(key);
offset=he(key)
while(table[probe] is occupied)
    probe = (probe+offset)%m;
    table[probe]=key; 
}

linear probing = offset =1;

performance analysis of search
alpha = n/m (should be <=1)
assumption : every probe sequence looks art a random location
(1-alpha) fraction of the table is empty
expected of probe required=1/(1-alpha)
alpha tends to 1 it becomes infinite

if lapha =0.8 search=5 unsuccesful
alpha=0.9 search=10
*/

