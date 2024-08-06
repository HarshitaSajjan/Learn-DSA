#include<bits./stdc++.h>
using namespace std;

/*
no preprocessing
naive O((n-m+1)*m)
naive when all characters of pattersn are distinct : O(n)


preprocessing apttern
Rabin karp O(n-m+1)*m) but better than naiveon average
KMP O(n)


preprocessing text
Suffix Tree O(m)
not a algo it is ds

m->pattern length
n->text length
1<=m<=n
*/

//naive O((n-m+1)*m)tc, O(1) sc
void patsearch(string &txt, string &pat){
    int m = pat.length();
    int n = txt.length();
    for(int i=0; i<=n-m; i++){
        int j;
        for(j=0; j<m;j++)
            if(pat[i]!=txt[i+j])
                break;
        if(j==m)
            cout<<i<<" ";
    }
}


//Improved naive algorithm for distinct in pattern theta(n) tc

void pattsearch(txt, pat){
    int n=txt.lengtj();
    int  m = pat.length();
    for(int i=0; i<=n-m; i++){
        int j;
        for(j=0; j<m; j++){
            if(pat[j]!=txt[i+j])
            break;
        }
        if(j==m)
            print(i+" ");
        if(j==0)
            i++;
        else    
            i=(i+j);
    }
}