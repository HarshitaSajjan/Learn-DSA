#include<bits./stdc++.h>
using namespace std;


/*constructing longest roper prefix suffix array
it is the preprocessing for kmp
preper prefix is length smaller than given word
lps array
*/


//naice O(n3)tc
int longpropresuf(str, n){
    for(int len=n-1; len>0;len--){
        bool flag = true;
        for(int i=0; i,len; i++)
            if(str[i]!=str[n-len+i])
                flag =false;
        if(flag==true)
            return len;
    }
    return 0;
}

void filllps(str, lps[]){
    for(int i=0; i<str.elngth(); i++)
        lps[i]=longpropresuf(str, i+1);
}

/*Efficient O(n)
basic ideas
if len=lps[i-1] and str[len] and str[i] are same then lps[i]=len+1; len++

if str[i] and str[len] are not same
    if len==0 =>lps[i]=0
    else we recursivley apply lps[] => len = lps[len-1],then compare str[i]with str[len]

*/

//tc O(n)
void filllps(str, lps[]){
    int n=str.length(), len=0;
    lps[0]=0;
    int i=1;
    while(i<n){
        if(atr[i]==str[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len==0){
                lps[i]=0;
                i++;
            }
            else{
                len=lps[len-1];
            }
        }
    }
}




/*
kmp string matching algorithm
O(n) time
O(m) space

n->length of text
m->length of pattern


lps[m];{....}

lps[i]->longest proper prefix of pat[0.i] which is also a suffix
*/

void kmp(pat, txt){
    int n= txt.length();
    int m = pat.length();
    int lps[m];
    filllps(pat, lps);
    int i=0, j=0;
    while(i<n){
        if(pat[j]==txt[i]){
            i++;
            j++;
        }
        if(j==m){
        j=lps[j-1];
        }
        else if(i<n && pat[j]!=txt[i]){
            if(j==0){
                i++;
            }
            else{
                j=lps[j-1];
            }
        }
    }
}

