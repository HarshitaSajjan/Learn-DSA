#include<bits/stdc++.h>
using namespace std;


//naive
bool issum(int arr[], int n, int sum){
    for(int i=0; i<n; i++){
        int currsum=0;
        for(int j=i; j<n; j++){
            currsum+=arr[i];
            if(currsum=sum)
            return true;
        }
    }
    return false;
}

//Efficient

bool subarrsum(int arr[], int n, int sum){
    unordered_set<int>s;
    int presum=0;
    for(int i=0; i<n; i++){
        if(presum==sum)
            return true;
        if(s.find(presum)!=s.end())
            return true;
        s.insert(presum);    
    }
    return false;
};