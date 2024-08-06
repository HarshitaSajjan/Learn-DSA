#include<bits/stdc++.h>
using namespace std;

long long int maxnonadjsum(vector<int> &nums){
int n = nums.size();
int prev=nums[0];
int prev2= 0;
for(int i=0; i<n; i++){
    int take = nums[i];
    if(i>1)
        take+=prev2;
    int nottake= 0+prev;
    int curri = max(take, nottake);
    prev2=prev;
    prev=curri;
}
return prev;
}


long long int houserobber(vector<int>&valhouse){
    vector<int>temp1, temp2;
    int n = valhouse.size();
    if(n==1) return valhouse[0];
    for(int i=0; i<n; i++){
        if(i!=0) temp1.push_back(valhouse[i]);
        if(i!=n-1) temp2.push_back(valhouse[i]);
    }
    return max(maxnonadjsum(temp1), maxnonadjsum(temp2));
}
