#include<bits/stdc++.h>
using namespace std;

int f(int n, int k){
    if(n==0) return 0;
    int minsteps=INT_MAX;
    int jumps=0;
    for(int j=1; j<=k; j++){
        if(n-j>0){
            jumps = f(n-j,k)+ abs(a[n]-a[n-j]);
            minsteps=min(minsteps, jumps);
        }
    }
    return minsteps;
}

//Memoization
