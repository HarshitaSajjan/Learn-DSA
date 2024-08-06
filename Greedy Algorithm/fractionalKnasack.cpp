#include<bits/stdc++.h>
using namespace std;

//kanpscak capacity and also fractional from some

/*
calculate ratio(value/weight) for every item
sort alll item in decreasing order of the ratio
initialise, res=0, curr_cap=give cap;
do the following for every item I in sorted order
    else if (i.weight<=curr_cap){
    curr_cap=i.weight;
    res+=i.value;
    }
    else{
    res+=(i.value)*(curr_cap/i.weight);
    return res
    }
    return res;

    TCO(nlogn)+O(n) = O(nlogn)
*/

bool mycmp(pair<int,int>a, pair<int,int>b){
    double r1 = (double)a.first/a.second;
    double r2 = (double)b.first/b.second;

    return r1>r2;
}


double fknaps(pair<int, int>arr[], int n){
    sort(arr, arr+n, mycmp);
    double res=0.0;
    for(int i=0; i<n; i++){
        if(arr[i].second<=W){
            res+=arr[i].first;
            W=W-arr[i].second;
        }
        else{
            res+= arr[i].second * ((double)W/arr[i].second);
            break;
        }
    }
    return res;
}
