#include<bits/stdc++.h>
using namespace std;

class KStacks{
    //sn ==> 0,1,2,.....k-1
    int arr[], cap;
    void push(int x, int sn){}
    int pop(int sn){}
    bool isEmpty(int sn){}
    int size(int sn){}
    int top(int sn){}
};

struct kstacks{
    int *arr, *top, *next;
    int k,  freetop, cap;

    kstacks(int k1, int n){
        k=k1, cap=n;
        arr = new int[cap];
        top =new int[k];
        next= new int[cap];
        for(int i=0;i<k;i++)
            top[i];
        freetop=0;
        for(int i=0;i<cap-1; i++)
            next[i]=i++;
        next[cap-1]=-1; 
    }
    void push(int x, int sn){
        int i=freetop;
        freetop=next[i];
        next[i]=top[sn];
        top[sn]=i;
        arr[i]=x;
    }
    int pop(int sn){
        int i=top[sn];
        top[sn]=next[i];
        next[i]=freetop;
        freetop=i;
        return arr[i];
    }
};