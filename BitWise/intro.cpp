Bitwise Operators - 6
arithematic operators + - * / 
logical operators true false used in conditional statements
bitwise operators on binary representation of numbers and operate on individual bits of numbers that os passed through operators
bitwise Operators
and - bitwise and of binaryrepresentation of tw numbers  both r 1 then 1
or  - both 0 then 0 , 1 when any of input is 1
XOR - 1 when two both input bits are diff, 0 when both bits are same
integers are repesented using 32 bits
number of bits required to represent integer is not fixed, compilers can choose any side
x^o=x
x^y=y^x
x^(y^z) = (x^y)^z
x^x = 0

left shift operator
if we assume that the leading y bits are 0, then result of x<<y is equivalent to x*2^y

right shift operator
x>>y is equivalent to floor(x/(2^y))


bitwise Not ~
unary operator, inverts all the bits in the binary representation of numbers
0 to 1 and 1 to 0
unsigned int x=1, unsigned meand 0 ot positive no negative allowed
32 0's to 32 1's ie 0 to 2^32 -1 == 4294967295
max number = 2^n -1

signed input
leading bit is 0 then positive number 
if leading bit is 1 the negative number
bitwise negation of positive number and if the numbe ris signed then definitely negative number
signed number is reprsented in 2's compliment forms = 2^n -x in n bits representation
 range of signed numbers in -2^31 to 2^31-1