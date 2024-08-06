#include<bits/stdc++.h>
using namespace std;


/*Naive Solution
maintain sorted array
if(size%2!=0) return temp[size/2];
else return (temp[size/2] + temp[(size-1)/2])/2;

TC O(n2)
*/

/*Better Solution
augmented bst

TC O(n*h) = O(nlogn)
*/

//Efficient Solution
//max heap and min heap, inserting here O(logn) and extractin max and min from both heaps is also O(logn), every operation here is logn, TC O(nlogn)

void printMedians(int arr[], int n){
    priority_queue<int>s;
    priority_queue<int, vector<int>, greater<int>>g;
    s.push(arr[0]);
    cout<<arr[0]<<endl;
    for(int i=1; i<n; i++){
        int x=arr[i];
        if(s.size()>g.size()){
            if(s.top()>x){
                g.push(s.top());
                s.pop();
                s.push(x)
            }
            else g.push(x);
            cout<<(s.top()+g.top())/2<<endl;
        }
        else{
            if(x<=s.top())
            s.push(x);
            else{
                g.push(x);
                s.push(g.top());
                g.pop();   
            }
            cout<<s.top()<<endl;
        }
    }
}