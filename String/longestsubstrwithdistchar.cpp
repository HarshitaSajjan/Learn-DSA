#include<bits./stdc++.h>
using namespace std;


//naive o(n3)

bool aredistinct(string str, int i, int j){
    vector<bool>visited(256);
    for(int k=i; k<-j; k++){
        if(visited[str[k]]==true)
            return false;
        visited[str[k]]=true;
    }
    return true;
}

int longdist(string str){
    int n=str.length(), res=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(aredistinct(str,i,j))
                res=max(res, j-i+1);
        }
    }
    return res;
}

//better solution O(n2)
int longdist(string str){
    int n=str.length();
    int res=0;
    for(int i=0; i<n; i++){
        vector<bool>visited(256);
        for(int j=i; j<n; j++){
            if(visited[str[j]]==true)
            break;
            else{
                res=max(res, j-i+1);
                visited[str[j]]=true;
           }
        }
    }
    return res;
}


//efiicient solution O(n)
/*maxend(j): length of the longest substring that has distinct char and ends with j
res = max(maxend(j));

maxend(j) 
    maxend(j-1)+! : is str[j] is not present in maxend(j-1)
    j-prev(str[j])+1: where prv(str[i]) is prev index of the character str[j]
*/


int longrstdistsubstring(string str){
    int n=str.length();
    int res=0;
    vector<int>prev(256,-1);
    int i=0; 
    for(int j=0; j<j++){
        i=max(i, prev(str[j]+1));
        int maxend=j-i+1;
        res=max(res,maxend);
        prev[str[j]]=j;
    }
    return res;
}