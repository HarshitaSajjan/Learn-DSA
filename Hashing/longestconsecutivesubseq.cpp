#include<bits/stdc++.h>
using namespace std;


//METHOD1 sorting O(nlogn)
int findlongest(int arr[], int n ){
    sort(arr, arr+n);
    int res=1;
    int curr=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]+1)
        curr++;
        else{
            res=max(res,curr);
            curr=1;
        }
    }
    res=max(res, curr);
    return res;
}


//Efficient O(n)

/*
initialise res=0;\create hash table h
insert all elements into h
for(int i=0; i<n; i++)
if arr[i]-1 is not present in h
curr=1
while(h contains arr[i]+curr)
curr++
res =max(res, curr)
return res;
*/