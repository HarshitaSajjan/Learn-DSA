#include<bits./stdc++.h>
using namespace std;


/*create a empty map mp

do level order traversal and  put nodes into the mp
now traverse the map and print contents*/


boid vtra(Node *root){
    map<int, int>mp;
    queue<pair<Node*, int>>q;
    q.push({root, 0});
    while(q.empty()==false){
        autp p=q.front();
        Node *curr=p.first;
        int hd=p.second;
        mp[hd].push_back(curr->data);
        q.pop();
        if(curr->left!=NULL)
            q.push({curr->left, hd-1});
        if(curr->right!=NULL)
            q.push({curr->right, hd+1});
    }
    //print map cintents line by line
    for(auto p:mp){
        vector<int>v=p.second;
        for(int x:v)
            cout<<x<<" ";
        cout<<endl;
    }
}