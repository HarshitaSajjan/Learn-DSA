#include<bits./stdc++.h>
using namespace std;



//naive, generate all permu in increasing order, and check, n! perm then O(n*n!)time


//efficient solution: count lexicographically smaller string + 1


const int CHAR=256;
int lexrank(string &str){
    int res=1;
    int n=str.length();
    int mul=fact(n);
    int count[CHAR]={0};

    for(int i=0; i<n; i++)
        count[str[i]]++;
    for(int i=1;i<n; i++)
        count[i]+=count[i-1];
    for(int i=0; i<n-1; i++){
        mul=mul/(n-1);
        res=res+count[str[i]-1]*mul;

        for(int j=str[i]; j<CHAR;j++)
            count[j]--;
    }
    return res;
}