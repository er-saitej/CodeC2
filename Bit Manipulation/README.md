# Bitwise Operators
#### They operate on binary bits of data - will be much faster compared to normal operators.
#### AND - & 
#### OR - |
#### XOR - ^ - If both bits are same, result will be 0.
#### BINARY ONE'S COMPLIMENT - ~ - flips the value of most significant bit also. Positive number will be turned to negative.
#### BINARY LEFT SHIFT - <<
#### BINARY RIGHT SHIFT - >>

1&0 = 0\
0&1 = 0\
1&1 = 1\
0&0 = 0\
\
1|0 = 1\
0|1 = 1\
1|1 = 1\
0|0 = 0\
\
1^0 = 1\
0^1 = 1\
1^1 = 0\
0^0 = 0\
\
5&7 = 000101 & 000111 = 000101 - so equals to 5\
5|7 = 000101 | 000111 = 000111 - so equals to 7\
5^7 = 000101 ^ 000111 = 000010 - so equals to 2\
~5 = ~000101 = 111010 - but puts in 2's compliment 000110 - so equals to -6\
~0 = ~000000 = 111111 - but puts in 2's compliment 000001- so equals to -1.\
\
\
\
### Binary Left Shift
5<<2 - 0000101 - everything moves by factor of 2\
<<00>> will fall <<00101>> moves left by 2 <<00>> add 2 0's in the last\
So answer will be 0010100 - 20\
5<<3 = 0000101 = 0101000 = 40.\
#### Mathematically, 5<<3 = 5*(2^3) = 40

### Binary right shift
5>>2 - 0000101>>2 = 0000001 = 1\
Same as left shift - but fall happens on right.\
5>>3 = 0000101 = 0000000 = 0\
#### Mathematically, 5>>3 = 5/(2^3) = 0

