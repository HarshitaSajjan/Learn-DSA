#include<bits/stdc++.h>
using namespace std;

/*petrol pump in circular manner and distnace betwenn them is givenn, and amt of perol at the petrol pump is given
truck with infinite capacity, i unit of petrol to teavel one unit distance, initially truvk is empty*/


//Naive O(n2)tc O(1)sc
int firstpp(int petrol[],int dist[], int n){
    for(int start=0; start<n; start++){
        int currpetrol=0;
        int end= start;
        while(true){
            currpetrol+=(petrol[end]-dist[end])
            if(currpetrol<0)
            break;
            end=(end+1)%n;
            if(end==start)
                return (start+1);
        }
    }
}

//Better solution - use a deque, keep adding items to the end of deque while currpetrol is greater than equla to 0-> keep running items from the front of deque while currpetrol is negative


//Efficient Solution O(n)time, O(1)sc : if currpetrol becomes negative at pi then none of the petol pumps p0 to pi can be solution 

int firstpetropump(int petrol[], int dist[], int n){
    int start=0;
    int currpetrol=0;
    int prevpetrol=0;
    for(int i=0; i<n; i++){
        currpetrol+=(petrol[i]-dist[i]);
        if(currpetrol<0){
            start=i+1;
            prevpetrol+=currpetrol;
            currpetrol=0;
        }
    }
    return ((currpetrol+prevpetrol)>=0)?(start+1):-1
}