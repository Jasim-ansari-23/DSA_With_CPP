1. Logical Operators

&& - AND Operator
|| - OR Operator
! - NOT Operator

Logical Operators are used to check whether an expression is true or false. There are three logical operators i.e. AND, OR, and NOT. They can be used to compare Boolean values but are mostly used to compare expressions to see whether they are satisfying or not. 

AND: it returns true when both operands are true or 1.

OR: it returns true when either operand is true or 1.

NOT: it is used to reverse the logical state of the operand and is true when the operand is false.

#include <iostream>
using namespace std;
 
int main()
{
    int a = 1, b = 0;
    cout << "The value of a && b is " << (a && b) << endl;
    cout << "The value of a || b is " << (a || b) << endl;
    cout << "The value of !a is " << (!a) << endl;
}

2. Bitwise Operators

| - Bitwise OR
^ - Bitwise XOR
~ - Bitwise Complement
>> - Shift Right Operator
<< - Shift Left Operator


A bitwise operator is used to perform operations at the bit level. To obtain the results, they convert our input values into binary format and then process them using whatever operator they are being used with. 

#include<iostream>

using namespace std;

int main()
{
    int a = 4; //it'll multiply 2*2
    cout<< (a<<1) << endl; // it'll shift left added 0
    int b = 4; //it'll divide 2*2
    cout<< (b>>1); // it'll shift right added 0
    return 0;
}

3. 