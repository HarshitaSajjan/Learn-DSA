#include<bits./stdc++.h>
using namespace std;


//two strings which are permutation of each other a called anagram


//naive O(n-m+1)*m)
bool ispresent(string &txt, string &pat){
    int n=txt.length();
    int m = pat.length();
    for(int i=0; i<=n-m; i++){
        if(areanagram(pat, txt, i))
            return true;
    }
    return false;
}
const int CHAR =256;
bool areanagram(string &pat, string &txt, int i){
    int count[CHAR]={0};
    for(int j=0; j<txt.length(); j++){
        count[pat[i]]++;
        count[txt[i]]++;
    }
    for(int j=0;j<CHAR; j++)
        if(count[j]!=0)
            return false;
    return true;
}


//efficient O(m+(n-m)*CHAR)tc, theta(CHAR)sc

bool ispresent(string &txt, string &pat){
    int ct[CHAR]={0}, cp[CHAR]={0};
    for(int i=0; i<at.length(); i+++){
        ct[txt[i]]++;
        cp[pat[i]]++;
    }
    for(int j=pat.length(); i<txt.length();i++){
        if(aresome(ct,cp))
            return true;
        ct[txt[i]]++;
        ct[txt[i-pat.length()]]--;
    }
    return false;
}