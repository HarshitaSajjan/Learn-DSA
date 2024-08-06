#include<bits/stdc++.h>
using namespace std;

int diff = new_val -arr[i];

void updateRec(ss, se, i, si, diff){
    if(i<ss||i>se) return;
    tree[si]=tree[si]+diff;

    if(se>ss){
        int mid = (ss+se)/2;
        updateRec(ss, mid, i, 2*si+1, diff);
        updateRec(mid+1, se, i, 2*si+2, diff);
    }
}
//TC O(logn), not more than 2 node at each level;