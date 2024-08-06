#include<bits/stdc++.h>
using namespace std;



//NAIVE O(m* (m+n))


int intersection(int a[], int b[], int m, int n){
    int res=0;
    for(int i=0; i<m; i++){
        bool flag=false;
        for(int j=0; j<i-1; j++)
            if(a[j]==a[i]){
                flag=true;
                break;
            }
            if(flag==true){
                continue;
            }
            for(int j=0;j<n;j++)
                if(a[i]==b[j]){
                    res++;
                    break;
                }
    }
    return res;
}

//Efficient Solution tc O(m+n), sc = O(m)

int intersection(int a[], int b[], int m, int n){
    unordered_set<int>s;
    for(int i=0;i<m; i++){
        s.insert(a[i]);
    }
    int res=0;
    for(int j=0;j<n; j++){
        if(s.find(b[j])!=s.end()){
            res++;
            s.erase(b[j]);
        }
    }
    return res;
}
