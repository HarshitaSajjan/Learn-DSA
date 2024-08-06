#include<bits/stdc++.h>
using namespace std;

//Method1 - sort the array and print last k elements

//method2 - maxheap - O(n) to build maxheap and  extractingg k items O(klogn)   = O(n+klogn)

//method 3 efficient solution
/*
build min heap of first k items
traverse from(k+1)th element
    compare current element with top of heap if smaller than top , ignore it
    else remove the top element and insert the curretn element in the min heap
prints contents of min heap

TC O(k) + O((n-k)*logk)+O(k) = O(k+(n-k)logk)


*/