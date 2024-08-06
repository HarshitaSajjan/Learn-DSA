#include<bits/stdc++.h>
using namespace std;

//n is non negative integer
//naive - epredtedly divide by two if it becomes odd number then not a power but if we get 1 at end as 1 then power of one

//Method1(Naive)
bool isPow2(int n){
    if(n==0)
        return false;
    while(n!=1){
        if(n%2!=0)
            return false;
        n= n/2;
    }
    return true;
}

//Method2
//power of two has only one bit set
bool isPow21(int n){
    // return ((n!=0)&&((n&(n-1))==0))
    if(n==0)
        return false;
    return ((n&(n-1))==0);
}
