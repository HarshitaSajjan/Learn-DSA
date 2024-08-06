#include<bits/stdc++.h>
using namespace std;


//anagram is if this is perjmutation of other or not, every char taht appear in s1 should appear in s2 and frequencies should be same , however order of appearance can be different

//naive - O(nlogn) time
bool areanagram(string &s1, string &s2){
if(s1.length()!=s2.length())
    return false;
sort(s1.begin(), s1.end());
sort(s2.begin(), s2.end());

return (s1==s2);
} 

//Efficient Solution 
const int CHAR=256;
bool areanagrams(string &s1, string &s2){
    if(s1.length()!=s2.length())
        return false;
    int count[CHAR]={0};
    for(int i=0; i<s1.length(); i++){
        count[s1[i]]++;
        count[s2[i]]--;    
    }
    for(int i=0; i<CHAR; i++)
        if(count[i]!=0)
            return false;
        return true;
}
//time O(1) and space O(CHAR)