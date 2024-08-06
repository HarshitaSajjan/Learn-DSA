#include<bits/stdc++.h>
using namespace std;


//naive, consider every eleemnt as smallest  hteta(n2)

int getmaxarea(int arr[], int n){
    int res=0;
    for(int i=0; i<n; i++){
        int curr=arr[i];
        for(int j=i-2;j>=0; j--){
            if(arr[j]>=arr[i])
            curr+=arr[i];
            else break;
        }
        for(int j=i+1; j<n; j++){
            if(arr[j]>=arr[i]) 
            curr+=arr[i];
            else break;
        }
        res=max(res, curr);
    }
    return res;
}

//Btter solution O(n), three traversal to find the arrray. 
/*initialise res=0;
find prev smaller element for every element
find next smaller element for everty element
do the following for every arr[i]
    curr+=arr[i]
    curr+=(i-pos[i]-1)*arr[i])
    curr+=(ns[i]-i-1)*arr[i]
    res=max(res,curr)

return res
*/


//efficient solution
/*create a stack s
int res=0;
for(int i=0; i<n;i++){
while(s.empty()==false && arr[s.top()]>=arr[i]){
tp=s.pop();
curr=arr[tp]*(s.empty()?i:(i-s.top()-1));
res=max(res,curr);
}
s.push(i);
}
while(s.empty()==false){
tp=s.pop();
curr=arr[tp]*s.empty()?n:(n-s.top()-1));
res=max(res, curr);
}
return res;

*/
