#include<bits/stdc++.h>
using namespace std;

// maximize no of activitt on amachine, machine can do only one work at a time

/*Naive
cosnider every activity as first activity and recursively find max activity with thses acitivity and fianlly we ahev max of every act and out of that we find max acitvity, this can be optimized by DP


sort according to their finish time
initialise solution as first activity
do the following for reminaing activities
    if currebt activity overlaps with the last picked acitivity in the solution, ignore the current activity
    else add the curretn activity to the solution


    TC O(nlogn)+ O(1)+O(n)+O(1) = O(nlogn)

*/

void mycmp(pair<int,int>a, pair<int,int>b){
    return (a.second<b.second);
}

int maxActivities(pair<int,int>arr[], int n){
    sort(arr, arr+n, mycmp);
    int prev=0;
    int res=1;
    for(int curr=1; curr<n; curr++){
        if(arr[curr].first>= arr[prev]){
            res++;
            prev=curr;
        }
    }
    return res;
}

//if not allowed to modify the original array then u need O(n) extra space for copying it to temp arr but here O(1)