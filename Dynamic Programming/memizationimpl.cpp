/*Memoization

first few fibonacci numbers are 
0 1 1 2 3 5 ....
*/

int fib(int n){
    if(n==0||n==1) return n;
    else 
    return fib(n-1) + fib(n-3);
}
//2^n


//Memoization

int memo[]={-1,-1,-1...};
int fib(int n){
    if(memo[n]==-1){
        int res;
        if(n==0||n==1) 
            res=n;
        else
            res = fib(n-1) + fib(n-2);
        memo[n]=res;
    }
    return memo[n];
}


//2N-1 function calls * theta(1) work in every function call= theta(n) time

/*
plain rec -> memo
memo arr
dimension, depends on parameter in rec, 
one parameter,  then 1d arr
2 para(subseq) then 2d array
no of dimn in memo array = no of paramet that we changein rec call
size od dimn also depends on vlaue theat we r changning
sie by min and max vlaue of parametr

memo is easy to write
create arr, initiliase with some value ie it can the value which will not be an answer
modify crecursion 
instead of returning  
and condition at begining that checks if memo value already exsits of u have already compited this subprobem then only return the memo arr
if u have computed once no need to compute again,
when can u reuse, when u have overlapping sub probelms



*/