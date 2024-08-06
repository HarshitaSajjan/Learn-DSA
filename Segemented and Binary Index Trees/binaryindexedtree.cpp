/*Binary Indexed tree
used for fixed size array snd multiple queries of the folowing types O(logn)
    prefix operation(sum product xor or etc)
    update a value
it is actually an array but theconcept is tree based
requires O(nlogn) preprocessing time ands theta(n) space
also known as FenwickTree
can also be used for range queries

BIT takes less time  and less space but cant be applies to all s where sT are applied like max of range

St- range
BIT- prefix
*/

/*Method1 Simple

getSum(i); run a loop from 0 to i and sum all elements
O(n)
update(i, x); arr[i]=x
O(1)
*/

/*Method2 : prefix Sum
arr[]
pre_sum[]
getsum(i): return pre_sum[i]; O(1)
upadate (i,x): diff x-arr[i] O(n)
arr[i=x];
for every index j from i to n-1
pre_sum[i]+=diff
*/

/*Method3 - Segemnt tree need 4n space and operations
getsum(i) O(logn)
    upperbound: 4logn operations
update(i,x): O(logn)
    upperbound: logn operations

getsum(i) = getsum(0,i) in sgement tree
*/

/*Update in BIT
one to last set bit till we r in range

nextIndex(i) = i+i&(-i)
*/
int n;
int arr[n];
int BIT[n+1];
void updateBIT(int i, int x){
    int diff = x-arr[i];
    arr[i]=x;
    i=o+1;
    while(i<=n){
        BITtree[i]+=diff;
        i=i+i&(-i);
    }
    //tc <2^n, bit by bit, O(log2^n) = O(logn)
}

/*Value of getsum(i)
i=i+1;
result = bittree[i]+bittree[parent[i]]+ bittree[preant(preant[i])]
value of parent(i) = i-i&(-i)
ie turn off the last set bit
*/

int bittree[n+1];
int getsum(int i){
    i=i+1;
    int res=0;
    while(i>0){
        res+=res+bittree[i];
        i=i- i&(-i)
    }
    return res;
}
/*
O(logn) -  max val
O(logn) *
*/
//next index => i=i+i&(-i);

int n;
int arrr[n]
int bittree[n+1];
void update (int i, int x){
    int diff = x-arr[i];
    arr[t]=x;
    i=i+1;
    while(i<=n){
        bitreee[i]+=diff;
        i=i+ i&(-i);
    }
}

//O(logn) tc