#include<bits./stdc++.h>
using namespace std;

/*
txt, pat ->given
like naive algorithm, slide the pattern one by one
compare hash values of pattern, and current text window. if hash valuesmatch, then only compare individual charaters

p: hash values of the pattern
t: hash vakues of current window of text

simle hash: sum of values
problem: spurious hits

rolling has: compute i+1 using hash value of indiex i
ti+1 = ti + txt[i+m]-txt[i]

improved hash = 1=*d2+2*d1+3*d0

variable d
ti+1=d(ti-txt[i]*d^m-1)+txt[i+m];

horners value 
p=0
p=p*d+pat[0];
p= pat[0]*d+pat[1];
.
.
so on
*/

void rbsearch(pat, txt, m, n){
    int h=1;
    for(int i=1;i<=m-1;i++)
        h=(h*d)%q;
    int p=0, t=0;
    for(int i=0; i<n; i++){
        p=(p*d+pat[i])%q;
        t=(t*d+txt[i])%q;
    }
    for(int i=0;i<=n-m; i++){
        if(p==t){
            bool flag=true;
            for(int j=0; j<m;j++)
                if(txt[i+j]!=pat[j]){
                    flag=false;
                    break;
                }   
                if(i<n-m){
                    t=((d*(t-txt[i]*h)+txt[i+m]))%q;
                    if(t<0)
                    t=t+q;
                }
        }
    }
}

O((n-m+1)*m) tc, but worst case is more time than naive, but t wont be always so it is better