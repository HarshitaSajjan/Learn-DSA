#include<bits/stdc++.h>
using namespace std;

/*every day prices of stock, we need to find span if stock\
span on a day is no of consecutive day including the curr day and days just day before which have value equal or smaller
day 1 span is always 1

*/
//NAIVE Solution O(n2) worst case
void printspan(int arr[], int n){
    for(int i=0; i<n; i++){
        int span=1;
        for(int j=i-1; j>=0; && arr[j]<=arr[i]; j--)
            span++;
        print(span+ " ");
    }
}


//Efficient Solution
/*
if(there is a greater element on left side)
span = index of curr element  index of closes greater element of left side

otherwise
index of curr element + 1
tc theta(n).space O(n)
*/

void printspann(int arr[], int n){
    stack<int>s;
    s.push(0);
    print(1);

    for(int i=1; i<n; i++){
        while(s.isempty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
    spane=s.isempty() ?i+1:i-s.top();
    print(span);
    s.push(i);
    }
}