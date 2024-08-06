#include<bits/stdc++.h>
using namespace std;
//range as input 

//recursive
getsumrec(qs, se, ss, se, si)

qs qe user input
ss se starting and ending  indexes of range represented by current node initial ss=0, se=n-1;
si index of current node initial si=0

getsemRec(qs, qe, ss, se, si){
    if(se<qs || ss>qe) return 0;
    if(qs<=ss && qe>=se) return tree[si];
    int mis = (ss+se)/2;


    return getsumRec(qs, qe, ss, mid, 2*si+1)+getsumRec(qs, qe, mid+1, 2*si+2);
}

//tc height of tree O(logn), we never visit more than 4 nodes on any level, so we never do 4logn work