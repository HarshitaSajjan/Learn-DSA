#include<bits/stdc++.h1>
using namespace std;
//longest common subsequence
/*
subsequenceof a string can be obtained by zero or more char from it and these char should be in same order as string
"CDA" =  "", "C" "D" "A""CD" "CA" "DA" "CDA"
sybstrign mean contigous char but subsequence mean any char but in same orde4r
2^n subseuences in n length of string

subsequnce appears in both and max length of both
empty string is always common of strign of length zero

*/

/*naive way is find all subqsseuqnce and find common*/

//recursive soltuion
int lcs(string s1, string s2, int m, int n){
    if(m==0|| n==0)
    return 0;

    if(s1[m-1]==s2[n-1]) return 1+lcs(s1, s2, m-1, n-1);
    else
    max(lcs(s1,s2, m-1, n), lcs(s1, s2, m, n-1));-

}
//worst case tc is exponential

//there ar eoverlapping subprobelsm, sp we can use dp , here we can either use memo or tabuln

//Memoization

int memo[m+1][n+1]={-1,-1..};
int lcs(string s1, string s2, int m, int n){
    if(memo[m][n]!=-1) return memo[m][n];
    if(n==0||n==0) {
        memo[m][n]=0;
    }
    else{
        if(s1[m-1]==s2[n-1])
        memo[m][n]= +1 lcs(S1,s2,m-1, n-1);
        else 
        memo[m][n] = max(lcs(s1,s2, m-1, n), lcs(s1, s2, m, n-1));
    }
    return memo[m][n];
}

//2darr every entry filled once in arr theta(m*n)


//Tabulation - arr od size m+1 and n+1
/*fill the arr in bottom up manners, for 1,1 soln then we need soln for 01, 00, 10, thats y extra col to accomodate inputs

dp[i][j] = length of lcs of s[0,1,...i-1] and s2[0,1,,j-1]

first row and first col is zero
s1[i-1]==ss2[j-1];
retun 1+ dp[i-1][j-1];
else
dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
*/

int lcs(string s1, string s2){
    int m = s1.length();
    int n = s2.length();
    int dp[m+1][n+1];
    for(int i=0; i<=m;i++){
        dp[i][0]=0;
    }
    for(int i=0; i<=n; i++){
        dp[0][i]=0;
    }
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(s1[i-1]==s2[j-1]) return 1+ dp[i-1][j-1];
            else
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[m][n];
}

//theta(m*m) work TC

/*Space optimization*/
int lcs(string s1, string s2){
    int m = s1.length();
    int n = s2.length();
    vector<int> prev(m+1,0), cur(m+1,0);
    for(int i=0; i<=m;i++){
        prev[i]=0;
    }

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(s1[i-1]==s2[j-1]) 
            cur[i] =  1+ dp[i-1];
            else
            cur[i] = max(cur[j], prev[j]);
        }
        prev=cur;
    }
    return prev[n];
}




/*Variations of LCS
Diff Utility m- lot more useful in software development- difference between 2 files, extra added or removed from files , git or version control system like what is different from prev file
Minimum insertions and deletions to convert (s1 to s2, s1 = geek, s2= gfek, find out lcs,; and find minimum no of operations)
Shortest common subsequence
Longest Plaindromic subsequence-> given on str make other str which is reverse od s1, lcs will be the ans
Longest repeating subsequnce -> when we r matching 2 subseq we shouldnt cnsider the same char at same subseq 
space optimiation dp solution of lcs-> by having 2d araa of 2*m or 2*n
printing lcs -> use dp array, just traverse the array from right and bottom and whenever u see matching then go to diagonal when notmatching u take max of upprr and lower, when printing lcs u will be traversing the char from last char, do something so that output is appended in begingin


length of superstring
*/