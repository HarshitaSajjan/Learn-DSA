#include<bits/stdc++.h>
using namespace std;
/*given anu,ber n, print first n numbers in increasing order such that all these numbers have digits in set{5,6}
NOTE  : N CAN BE A NUMBER ANS=D THE RESULT VALUES MIGHT not fit in basic data types like long int or long long int
*/

void printFirst(int n){
    queue<int>q;
    q.push("5");
    q.push("6");
    for(int count=0; count<n; count++){
        string curr=q.top();
        cout<<curr<<" ";
        q.pop();
        q.push(curr+"5");
        q.push(curr+"6");
    }
}
//O(n) time