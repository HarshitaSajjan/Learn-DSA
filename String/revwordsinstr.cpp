#include<bits/stdc++.h>
using namespace std;

/*
NAive
create a stack
push words one by one to tha stack
pop words from the stack and append to output

sc O(n)
*/

//better
void reversewords(char str[], int n ){
    int start=0;
    for(int end=0; end<n; end++){
        if(str[end]==' '){
            reverse(str,start, end-1);
            start=end+1;
        }
    }
    reverse(str, start, n-1);
    reverse(str, 0, n-1);
}
void reverse(char str[], int low, int high){
    while(low<=high){
        swap(str[low], str[high]);
        low++;
        high--;
    }
}

/*in case you a initialisea character array like below
char str[] = "sdfg as asd" ;
do pass array size minus one as parameter*/