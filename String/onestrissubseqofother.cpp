#include<bits/stdc++.h>
using namespace std;


//Naive is generate all subseq then compare , tc O(2^n*n)
/*
if(s1[i]==s2[j]){i++; j++;}
else{i++;}
*/

//Iterative
bool issubseq(string &s1, string &s2, int n , int m){
    int j=0;
    if(n<m) return false;
    for(int i=0; i<n&&j<m;i++){
        if(s1[i]==s2[j])
        j++;
    }
    return (j==m);
}

//Recursive - timeO(m+n) space O(m+n)

bool issubseq(string &s1, string &s2, int n , int m){
    if(m==0)
        return true;
    if(n==0) 
        return false;
    if(s1[n-1]==s2[m-1])
        return issubseq(s1,s2,n-1, m-1);
    else    
        return issubseq(s1, s2, n-1, m);
}
