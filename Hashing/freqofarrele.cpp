#include<bits/stdc++.h>
using namespace std;

//naive tc O(m2), sc O(1)

void printfreq(int arr[], int n){
    for(int i=0; i<n; i++){
        bool flag=false;
        for(int j=0; j<i; j++)
            if(arr[i]===arr[j]){
                flag=true;
                break;
            }
            if(flag==true)
            continue;

            int freq=1;
            for(int j=i+1; j<n; j++)
                if(arr[i]==arr[j])
                freq++;
            cout<<arr[i]<<" "<<freq<<endl;
    }
}

//Efficient Solution  tc theta(n), sc O(n)

int countfreq(int arr[], int n){
    unordered_map<int, int>hm;
    for(int x: arr)
        hm[x]++;
    for(auto e:hm)
        cout<<e.first<<" "<<e.second<<endl;
}