#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
const int r=3;
const int c=2;
void print(int mat[r][c]){
    for(int i=0; i<r; i++){
        for(int j=0;j<c; j++)
            cout<<mat[i][j]<<" ";
    }
}
int main(){
    int mat[3][2]={{10,20},{30,40},{50,60}};
    print(mat);
    return 0;
}


void print1(int **arr, int m, int n){
     for(int i=0; i<r; i++)
        for(int j=0;j<c; j++)
            cout<<arr[i][j]<<" ";
}
int main(){
    int **arr;
    int m=3, n=2;
    arr= new int*[m];
    for(int i=0; i<m; i++){
        arr[i]= new int[n];
        for(int j=0; j<m; j++){
            arr[i][j]=i;
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}


void print2(int *arr[], int m, int n){
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cout<<arr[i][j]<<" ";
}
int main(){
    int m=3, n=2;
    int *arr[m];
    for(int i=0; i<m; i++){
        arr[i]=new int[n];
        for(int j=0;j<n; j++){
            arr[i][j]=i;
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}

void print3(vector<int>arr[],int m){
    for(int i=0; i<m; i++)
        for(int j=0; j<arr[i].size(); j++)
            cout<<arr[i][j]<<" ";
}

int main(){
    int m=3, n=2;
    int vector<int>arr[m];
    for(int i=0; i<m; i++){
        for(int j=0;j<n; j++){
            arr[i].push_back(i);
        }
    }
    print(arr);
    return 0;
}

void print4(vector<vector<int>>arr[]){
    for(int i=0; i<m; i++)
        for(int j=0; j<arr[i].size(); j++)
            cout<<arr[i][j]<<" ";
}

int main(){
    int m=3, n=2;
    vector<vector<int>>arr;
    for(int i=0; i<m; i++){
        vector<int>v;
        for(int j=0;j<n; j++){
            v.push_back(i)
            arr.push_back(v);
        }
    }
    print(arr);
    return 0;
}
};