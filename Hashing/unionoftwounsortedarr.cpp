#include<bits/stdc++.h>
using namespace std;

//NAIVE tc O((m+n)*(m+n)), sc O(m+n)

int findunion(int a[], int b[], int m, int n){
    int c[m+n];
    for(int i=0; i<m; i++)
        c[i]=a[i];
    for(int i=0;i<n;i++)
        c[m+i]=b[i];
    int res=0;
    for(int i=0; i<m+n; i++){
        bool flas=false;
        for(int j=0; j<i; j++)
            if(c[i]==c[j]){
                flag=true;
                break;
            }
            if(flag==false)
            res++;
    }
    return res;
}


//Efficient  tc O(m+n) sc O(m+n)

int findunion(int a[], int b[], int m, int n){
    unordered_set<int>s;
    for(int i=0; i<m; i++)
        s.insert(a[i]);
    for(int j=0; j<n;j++)
        s.insert(b[j]);
    return s.size();
}