#include<bits/stdc++.h>
using namespace std;

//naive O(n2)tc
int leftmost(string &str){
    for(int i=0; i<str.length(); i++){
        for(int j=i+1; j<str.length();j++){
            if(str[i]==str[j])
                return i;
        }
    }
    return -1;
}

//Better aproach
const int CHAR = 256;
int leftmost(string &str){
    int count[CHAR]={0};
    for(int i=0; i<str.length();i++)
        count[str[i]]++;
    for(int i=0; i<str.length(); i++)
        if(count[str[i]]>1)
            return i;
    return -1;
}


//Efficient solution

const CHAR=256;
int leftmostchar(string &str){
    int findex[CHAR];
    fill(findex, findex+CHAR, -1);
    int res=INT_MAX;
    for(int i=0; i<str.length(); i++){
        int fi =findex[str[i]];
        if(fi==-1)
            findex[str[i]]=i;
        else
            res=min(res, fi);
    }
    return (res==INT_MAX) ?-1:res;
}

//Efficient approach -2
int leftchar(string str){
    bool visited[CHAR];
    fill(visited, visited+CHAR, false);
    int res =-1;
    for(int i=str.length()-1; i>=0; i--){
        if(visited[str[i]])
            res=i;
        else
            visited[str[i]]=true;
    }
    return res;

}