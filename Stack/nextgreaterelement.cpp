#include<bits/stdc++.h>
using namespace std;

/*given an array of integers, find next greater(position wise closest and on right side) for every array element*/

//NAIVE O(n2)

void nextgreater(int arr[], int n){
    for(int i=0; i<n;i++){
        int j;
        for(j=i+1; j<n;j++){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==n)
        cout<<-1<<" ";
    }
}


//efficient O(n) tc and sc

vector<int>nextgreaterele(int arr[], int n){
    vector<int>v;
    stack<int>s;
    s.push(arr[n-1]);
    cout<<"-1"<<" "; 
    for(int i=n-2; i>=0; i--){
        while(s.empty()==false && s.top()<arr[i])
        s.pop();
        int nextgreter = (s.empty())?1:(s.top());
        v.push_back(nectgreater);
        s.push(arr[i]);
    }   
    reverse(v.begin(), v.end());
    return v;
}

//print output in reverse order
