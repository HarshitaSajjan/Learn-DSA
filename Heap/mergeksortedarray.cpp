#include<bits/stdc++.h>
using namespace std;

/*Super Naive Solution
put all elemenst in res[]
sort res[]

TC O(nk lognk) k in number of input arrays
n is the maximum number of elements in an array
*/

/*Naive Solution
copy first array to res[]
do the following for remainging arrays starting from the second array merger curretn array into res[]

TC O(n+2n+3n+.....+kn)
=O(nk2)
*/

/*Efficient Solution
use min heap, will contain obj of class 
value, position of array, position of value in array

TC O(nklogk)
*/
struct triplet{
    int val, apos, vpos;
    triplet(int v,int ap, int vp){
        val=v,apos=ap, vpos=vp;
    }
};
struct mycmp{
    bool operator()(triplet &t1, triplet &t2){
        return t1.val>t2.val;
    }
};

vector<int>mergeArr(vector<vector<int>>&arr){
    vector<int>res;
    priority_queue<triplet, vector<triplet>, mycmp>pq;
    for(int i=0; i<arr.size(); i++){
        triplet t(arr[i][0], i, 0);
        pq.push(t);
    }
    while(pq.empty()==false){
        triplet curr = pq.top(); 
        pq.pop();
        res.push_back(curr.val);
        int ap = curr.apos, vp=curr.vpos;
        if(vp+1<arr[ap].size()){
            triplet t(arr[ap][vp+1], ap, vp+1);
            pq.push(t);
        }
    }
    return res;
}