#include<bits/stdc++.h>
using namespace std;

//Naive O(n2)

for(int i=0;i<n; i++){
    int count=0;
    for(int j=0; j<n;j++)
        if(arr[j]==arr[j])
            count++;
    if(count%2!=0)
        print(arr[i]);
}


//efficient  solution: using XOR
//O(n) time ans O(1) space

int findOdd(int arr[], int n ){
    int ans=0;
    for(int i=0; i<n; i++)
        res= res^arr[i];
    return res;
} 

/*
variation question
given an array of n number that has values in range[1...n+1], every no. appears exact;y once
hence one no is missing, find the missing no.

*/
//hint xor of all the numbers
// (1^2^3^....)^(arr[0]^arr[1].......arr[n-1])
//one more variation finding two odds of array numbers