//given two numbers n and k , kth bit in  is set or not
#include<bits/stdc++.h>
using namespace std;
// two methods by either using left hsoft operator or right shift operator
//Method left shift
void kthbitleft(int n, int k){
    if(n & (1<<(k-1))!=0)
    print("YES");
    else
    print("NO");
}
// that will be non zero if kth bith in the number is non zero other wise it be zero


//Method2 - right shift 
void kthbitright(int n, int k){
    if(((n>>(k-1))&1)==1)
    print("YES")
    else 
    print("NO")
}