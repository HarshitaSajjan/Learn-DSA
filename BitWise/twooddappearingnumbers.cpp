#include<bits/stdc++.h>
using namespace std;
// at least two odd appearing number  odd doesnt mean 1
//naive theta(n2)

void oddAppearing(int arr[], int n){
    for(int i=0; i<n; i++){
        int count =0;
        for(int j=0; j<n;j++)
            if(arr[i]==arr[i])
                count++;
        if(count%2!=0)
            print(arr[i]);
    }
}

//efficient solution theta(n)
void oddappearing(int arr[], int n){
    //xor of all the numbers
    //divide all numbers in to two grps, such that one grp have last bit has set and other sdoesnt 
    int XOR =0, ans1=0, ans2=0;
    for(int i=0; i<n; i++){
        XOR=XOR^arr[i]; //rightmost set bit
    }
    int sn = XOR & ~(XOR-1);
    for(int i=0;i<n; i++){
        if((arr[i]&sn)!=0)
            ans1=ans1^arr[i];
        else 
            ans2= ans2^arr[i];
    }
    print(ans1, ans2); 
} 

