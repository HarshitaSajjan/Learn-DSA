#include<bits/stdc++.h>
using namespace std;


//NAIVE O(n2)tc, O(1) sc

int maxcommon(bool arr1, bool arr2[], int n){
    int res=0;
    for (int i = 0; i < n; i++){
        int sum1=0, sum2=0;
        for(int j=i; j<n; j++){
            sum1+=arr1[j];
            sum2+=arr2[j];
            if(sum1==sum2)
                res=max(res,j-i+1);
        }
        return res;

    }
    
}

//Efficient O(n)tcandsc
/*this problem,  is going to reduce into the problmem of finding the logest subarray with 0 sum

int temp[n];
for(int i=0; i<n; i++)
    temp[i]=arr1[i]-arr2[i];
*/