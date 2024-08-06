#include<bits/stdc++.h>
using namespace std;


/*naive is using push anf pop
O(n) time and space
*/

/*efficient solution O(n)space
main stack and aux space

puhsh(x)
ms.push(x);
if(as.top()>=ms.top())
as.push(x);

pop()
if(ms.top()==as.top())
as.pop()
ms.pop()


push smaller or eqalu item 

*/

/*First metho assuming all elementas positive
push() pop() peek() getmin() in O(1) time and space
*/
stack s
int min

void push(int x)
if(s.isempty())
min =tans.push(x)
else if(x<=min)
s.push(x-min) //s.push(2*x-min)
min=x
else
s.push(x)

int getmin() return min

int peek()
t=s.peek()
return t<=0?min:t // return (t<=min)? min: t

int pop()
t=s.pop();
if(t<=0) // if(t<=min)
res=min
min=min-t // min = 2*in-t
return res
else
return t



/*approach for negatives as well
we push 2x-min only when x<=min
so 2x-min is laways going to be less than or equal to x, & x is going to be our new min
2x-min=x+(x-min)
*/