#include<bits/stdc++.h>
using namespace std;


//binary array

//NAIVE 

int longsub(bool arr[], int n){
    int res=0;
    for(int i=0; i<n; i++){
        int co=0, c1=0;
        for(int j=i; j<n;j++){
            if(arr[j]==0)
            co++;
            else 
            c1++;
            if(co==c1)
            res=max(res, j-i+1);
        }
    }
    return res;
}


//Efficient O(n) tc and sc
/*this problem is going to reduce into the problem of finding length of longest subarray with 0 sum*/
// replace with -1,presum, hashing