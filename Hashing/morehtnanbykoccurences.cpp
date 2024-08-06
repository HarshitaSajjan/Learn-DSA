#include<bits/stdc++.h>
using namespace std;

//NAIVE  O(nlogn)
void printnbyk(int arr[], int n, int k){
    sort(arr, arr+n);
    int i=1;
    int count=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            count++;
            i++;
        }
        if(count>n/k)
            print(arr[i-1]+" ");
        count=1;
        i++;
    }
}

//Efficient solution theta(n) tc, O(n)sc

void printnbyk(int arr[], int n, int k ){
    unordered_map<int, int>m;
    for(int i=0; i<n;i++)
        m[arr[i]]++;
    for(auto e:m)
        if(e.second>n/k)
            cout<<e.first<<" ";
}

/*if k is small and n is large then hasmap wont work*/

//O(nk) solution 
//let rescount be the number of elements int the result, rescount<=k-1
// k*(n/k  +1) <=n
//n+k!<=n

/*burays algorithm
create an epty map m
for(int i=0; i<n; i++)
    if(m contains arr[i])
        m[arr[i]]++;
    else if m.size() is less than (k-1)
        m.put(arr[i],1)
    else
        decrease all values in , by one, if value becomes 0, remove

for all elements in m, print the elements that actually appear more than n/k times

in the rejected set, an element rejects (k-1) distinct others
*/
