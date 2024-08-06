#include<bits/stdc++.h>
using namespace std;


/*
infix x+y
postfix xy+
prefix +xy


advantages
do not require paanthesis predecence rules and associativity rules
can be evaluated by writing a program that treverses the given expression exactly once


operator predcedence inc from bottom to up
^       right to left    ^->exponent
* /  left to right
+ -  left to right


rules
1. according to their pred
2. if pred is same then acc to associativity

steps to postfix conversion

x+y*z=(x+(y*z))=(x+(yz*))=xyz*+

(x+y)*z=((x+y)*z)=((xy+)*z)=xy+z*
*/

/*infix to postfix O(n)tcandsc
create a stack st
do the following for every char x from left to right
if x is
    operand: output it
    left paranthesis: push to stack
    right paranthesis: pop from st until left paranthesis is found,output the popped operators
    operator: if st is empty, push x to st
        else compare with st top
      higher precedence (than st top) pushto st
      lower precedence, pop st top and output until a higher precedence operator is found the push s to st
    pop and output everything from st
*/


/*Evaluation of postfix expression
traverse from left to right, when we see operator then evaluate the prev 3 operands

create a empty stack st
raverse thrugh every symbol x of given postfix
        if x is AN OPERAND PUSH TO XT
        else (x is an operator)
            op1 = st.pop();
            op2 = st.pop();
            compute op2xop1 and push the result to st
        st.top()
*/

//operators which have same precedence haeve same predecence
//naive 
/*fully paraenthesis
satrt cinverting to innermost to outermost*/

/*infix to prefix conversion theta(n)
create a empty stack st
create an empty string prefix
do the following for every character c from right to left
if c is
    operand: push it to prefix
    right paranthesis: push to st
    left paranthesis: pop fromt until right paranthesis is found, . appned the popped character to prefix
    operator: if st is empty,push c to st 
                else compare with st top
        higher precedence:(than st top) push c to st
        lower precedence : pop st top and appende the popped item to prefix until a higher precedence operator is found (or st become empty) push c to st
        equal precedence: use associativity
pop everything from st and append to prefix
return reverse of prefix

*/

/*Evaluation of prefix expressions
right tio left traversing nlike postfix evaluation

*/