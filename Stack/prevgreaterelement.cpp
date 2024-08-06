#include<bits/stdc++.h>
using namespace std;
 /*
 given an array of distinct integers, find closest(position wise) gretaer on left of every element, if there is no greater element on left then print -1;
 */

//NAIVE O(n2)

void prinprevgreter(int arr[], int n){
    for(int i=0; i<n; i++){
        int j;
        for(int j=i-1; j>=0; j--){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==-1)
            cout<<-1<<" ";
    }
}

//efficient O(n)

void prevgreater(int arr[], int n){{
    stack<int>s;
    s.push(arr[0]);
    for(int i=0; i<n; i++){
        while(s.empty()==false && s.top()<=arr[i])
        s.pop();
        int pg = (s.empty())?-1:s.top();
        cout<<pg<<" ";
        s.push(arr[i]);
    }
}}