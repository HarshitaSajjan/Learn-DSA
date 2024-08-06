/*2^n subseq
a element, u can pick it or u dont pick it
increasing subseq of max length
*/
#include<bits/stdc++.h>
using namespace std;


//naive - generate all possiblie subseq, the check which are incrasing andd take max of those... tc at least 2^n

/*longest increasing subseq that end with that element
lis arr of same size and first elemnt has lis 1, fill this array of lis , and find max of this arr.
to fill this lis array
when computing lis arr and we ahve lis of before elemetnts. we can append the elemnt if smaller element is found
*/

//DP
int lis(int arr[], int n){
    int lis[n];
    lis[0]=1;
    for(int i=1; i<n; i++){
        lis[i]=1;
        for(int j=0; j<i; j++){
            if(arr[j]<arr[i])
            lis[i]=max(lis[ ], lis[i]+1);
        }
    }
    int res=lis[0];
    for(int i=0; i<n; i++){
        res=max(res, lis[i]);
    }
    return res;
}
//theta(n2) time, space theta(n)
//overlapping as find lis of a element u need lis of elements before that
//better solution for this probem is not thriugh sp, it is through binary search nlogn

//Binary Search
/*min possible tail value for lis of length i+1
tail arr[]
size of tail array is length of lis

arr in decreasing sorted form, length is one is lis
increasing sorted form, length of arr is lis
*/

int ceilIdx(int tail[], int l, int r, int x){
    while(r>l){
        int m=l+(r-l)/2;
        if(tail[m]>=x)
            r=m;
        else
            l=m+1;
    }
    return r;
}
int LIS(int arr[], int n){
    int tail[n];
    int len=1;
    tail[0]=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>tail[len-1]){
            tail[len]=arr[i];
            len++;
        }
        else{
            int c= ceilIdx(tail, 0, len-1, arr[i]);
            tail[c]=arr[i];
        }
    }
    return len;
}

//theta(nlogn) time, theta(n)space



/*Variation of LIS
minimum deletions to make an aaray sorted- arr.size-lis
maximum sum increasing subsequence - 
maximum length bitonic subsequence - first increasing and then decreasing is bitonic subsequence, inc or dec is also considered as bitonic
building bridges
the longest chain
*/

//solution for  max sum inc subseq

int msis[n];
for(int i=0; i<n; i++){
    msis[i]=arr[i];
    for(int j=0; j<i; j++)
        if(arr[j]<arr[i])
            msis[i]= max(msis[i], arr[i]+msis[j]);
}
int res = msis[0];
for(int i=1; i<n; i++)
    res = max(res, msis[i]);
return res;


//solution for maximum length bitonic subsequence
/*similar to dp solution of lis, we will find lis ofevery element - for inc part
travers from right side, lds is lis reverse
now you got lid and lds array
find the subseq from the pivot as every element
length of bitonic subsequence = 
lis[i] + lds[i] -1

tc O(n2) and space theta(n)
theta(nlogn) time usign binary search method
*/

//Solution for builiding bridges
/*given arrray of pair of cities 
first side as one side of river and second as second side of river
these pair show the requirement of bridges
no two bridges should cross each other

sort all the array pairs in increasing order of first value of pair, if teo first value are same like (2,6) and (2,3) then  consider second value

find lis of the sorted arrat according to second values

tc O(nlogn) + O(nlogn) =  O(nlogn)

*/

//solution for longest chain

/*
given of arr of pairs
(a,b) where a<b
(a,b) (c,d) then b<c
logest search chain

sort the array of pairs according to first values
find lis in sorted array
arr[i].first>arr[j].second
why sorting - to make sure all the pairs appear in accodinrg to increasing values 

can be solved similar to activity selection in greeedy algorithm

more specific version of building bridges problem
*/