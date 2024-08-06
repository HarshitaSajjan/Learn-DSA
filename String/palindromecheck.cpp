#include<bits/stdc++.h>
using namespace std;


//Naive Method
/*input str, and rev of it, compare both of them  and return true if same else false;
*/
//theta(n) time n space 

bool ispal(string str){
    string rev =str;
    reverse(rev.begin(), rev.end());
    return (rev==str);
}

//Efficient Solution 

bool ispali(string &str){
    int begin=0;
    int end=str.length()-1;
    while(begin<end){
        if(str[begin]!=str[end])
            return false;
        begin++;
        end--;
    }
    return true;
}
//time theta(n) worst and theta(1) best , O(1) space