#include<bits./stdc++.h>
using namespace std;

//naive O(n2)tc, O(1) sc
void printceiling(int arr[], int n){
    print(-1);
    for(int i=1; i<n; i++){
        int diff = INT_MAX;
        for(int j=0; j<i; j++)
            if(arr[j]>==arr[i])
                diff=min(diff, arr[j]-arr[i]);
        if(diff==INT_MAX)
            print(-1);
        else    print(arr[i]+diff);
    }
}


//Efficient  O(nlogn) - selfbalancing tree

void printceil(int arr[], int n){
    print(-1)
create a self balancing bst(set in c++), 
let this be sinsert arr[0]int s
for(int i=1l i<n; i++){
    if(s contains a ceiling of arr[i])
        print the ceiling
    else
        print -1
    insert arr[i] into s
}
}