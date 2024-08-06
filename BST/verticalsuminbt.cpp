#include<bits./stdc++.h>
using namespace std;


//nodes with same horizontal distance

/*create a map that stores sum for a given horizontal distance
traverse the map and print values*/


void vsumR(Node * root, int hd,map<int, int>mp){
    if(root==NULL)return;
    vsumR(root->left, hd-1, mp);
    mp[hd]+=root->data;
    vsumR(root->rright, hd+1,mp);
}

void vsum(Node *root){
    if(root==NULL)return;
    map<int,int>mp;
    vsumR(root, 0, mp);
    for(auto sum: mp)
        cout<<sum.second<<" ";
}

//O(nloghd +hd) tc, 