#include<bits/stdc++.h>
using namespace std;

//Naive TC O(nk)  SC O(n)
void printkClosest(int arr[], int n, int k, int x){
    bool visited[n]={false};
    for(int i=0; i<k; i++){
        int mindiff = INT_MAX;
        int mindiffidx;
        for(int j=0; j<n; j++){
            if(visited[j]==false && abs(arr[j]-x)<=mindiff){
                mindiff=abs(arr[j]-x);
                mindiffidx=j;
            }
        }
        print(arr[mindiffidx]+ " ")
        visited[mindiffidx]true;
    }
}

//Efficient Solution
/*
create a max heap, pq(priority queue)
for(int i=0;i<k; i++)
    pq.insert(abs(arr[i]-x),i);
for(int i=k; i<n; i++){
int diff = abs(arr[i]-x);
if(pq.peek().diff>diff){
pq.pop()
pq.add(diff,i)
}
}
for(int i=0; i<k; i++)
    print(pq.pop().index+" ");

    TC = klogk + (n-k)logk+ klogk = O(nlogk)
*/