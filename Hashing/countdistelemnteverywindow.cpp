#include<bits/stdc++.h>
using namespace std;


//naive O((n-k)*k*k)

void printdistwind(int arrr[], int n, int k){
    for(int i=0; i<=n-k; i++){
        int count=0; for(int j=0;j<k;j++){
            bool flag=false;
            for(int =0;p<j; p++)
            if(arr[i+j]==arr[i+p]){
                flag=true;
                break;
            }
            if(flag==false)
            count++;
        }
        cout<<count<<" ";
    }
}


/*Efficient solution O(n)tc, sc O(k)

create a freq map of first k items
freq{1}=3, fe{20}=1
print size of the freq map

for(int i=k; i<n; i++)
    decrease freq of arr[i-k]
    if the fre of arr[i-k] becomes 0, remove it from the map
    if arr[i] does not exist in the map, insert it, else increase its freq in the map
    print size of the map
*/