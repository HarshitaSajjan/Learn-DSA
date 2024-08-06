#include<bits/stdc++.h>
using namespace std;
//n char in string then 2^n subset

void printPowerset(string str){
    int n=str.length();
    int powSize = pow(2,n);
    for(int counter=0;counter<powSize; counter++){
        for(int j=0; j<n; j++){
            if(counter &(1<<j)!=0)
                print(str[i]);
        }
        print("\n");
    }
}

//TC theta(2^n * n)