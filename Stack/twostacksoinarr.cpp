#include<bits/stdc++.h>
using namespace std;

//Implement Two Stacks in array -> we are given AN ARRAY , WE NEED T IMPLEMENT TWO STACKS IN IT

struct Twostacks{
    int *arr, cap, top1, top2;
    Twostacks(int n){
        cap=n; 
        top=-1;
        top2=cap;
        arr= new int[n];
    }
    void push(int x){
        if(top1<top2-1){
            top1++;
            arr[top1]=x;
        }
    }
    void push2(int x){
        if(top1<top2){
            top2--;
            arr[top2]=x;
        }
    }
    int pop(){
        if(top>=0){
            int x=arr[top1];
            top--;
            return x;
        }
    }
    int pop2(){
        if(top2<cap){
            int x=arr[top2];
            top2++;
            return x;
        }
        else{
            exit(1);
        }
    }
}

