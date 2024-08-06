/*in memo, we simply modify the rec osolution by memo array
that was top down, 
ginning from main probelm and calling from sub problem and checking if it is already computed or not

anohter eay os bottom up 
have arr or table and buld up manner
if u need solution for n , is dependent on n-1, n-2

forst compute 0, 1 ,2 3,4 so when we need foer n whoch is dependent n-1, n-2, they are already computed
rule for dimensions of array s same, ie parameters, range decides the size of array

here we need to take care of dependency, 
table shuld befilled in sucha way that if we need 2 valiue then those two value should be computer already


*/

int fib(int n){
    int f[n+1];
    f[0]=0;
    f[1]=1;
    for(int i=2; i<=n; i++)
        f[i]=f[i-1]+f[i-1];
    return f[n];
}

// theta(n) time  theta(n) space


/*side note
finding nth fib number has better soltiiotn
in logn time
this approach is divide and conquer related to matrix

dp is not the best solution for fib no.
dp is no significance its just a name

*/


/*memo is easy to implment when u have rec
overhead rec func calls
easy if we already have rec solution

tabl can sometime be difficult to implement
doestnt req rec call overhead
faster than memo


first write rec solutionthen overlappingn subproblems then we get to know it is sp
*/