/*
My Notes:

Expressions:
This is the most basic building block for a cpp program
"A sequence of operators, and operands, that specifies a computation."
Computes a value from a number of operands
There is much, MUCH more to expressions the more advanced you get.

34 <---- is a Literal expression

favorite_number <---- variable expression

1.5 + 2.8 <----- is an addition Expression

2 * 5 <----- is an multiplication Expression

a > b <---- Is a relational expression

a = b <------- is an assignment expression




Statements:
A complete line of code that performs some action
usually terminated with a semi-colon
usually contains expressions
C++ has many types of statements
    - expression, null, compound, selection, iteration, declaration, jump, try blocks, and others.


int x;   is a decaration statement
favorite_number = 12;   is an assignment statement
1.5 + 2.8;    is an expression statement
x = 2 * 5;  is another assignment

if(a > b) cout << "a is greater than b.";   is an if statrement (I'm looking forward to this If statements can be fun)



Operators:

C++ has a rich set of operators
    - unary, binary, ternary

common operators can be grouped as follows;
assignment
arithmetic
increment/decrement
relational
logical
member access
other

Assignment operator (=):

lhs = rhs

rhs is an expression that is evaluated to a value
the value of the rhs is stored to the lhs

the value of rhs must be type compatible with the lhs
the lhs must be assignable

assignment expression is evaluated to what was just assigned
more than one variable can be assigned in a single statement

*/


// Assignment Operator Code example:

#include <iostream>

using namespace std;

// int main() {

//     int num1 {10}; // These are initialization
//     int num2 {20}; //

//     num1 = 100; // <---- This is assignment

//     cout << "num1 is " << num1 << endl;
//     cout << "num2 is " << num2 << endl;

//     cout << endl;
//     return 0;
// }



/*
The Arithmetic operators are exactly the same as JS:
+ addition
- subtraction
* multiplication
/ Division
% Modulo or remainder (Only works with integers)

+, -, *, / operators are overloaded to work with multiple types such as int, double, etc...
% is only for int types

Arithmetic Operator coding examples:
*/

int main() {

    int num1 {200};
    int num2 {100};

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    int result {0};

    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;

    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;


    result = num2 / num1;
    cout << num2 << " / " << num1 << " = " << result << endl;

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    num1 = 10;
    num2 = 3;

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    result = num1 * 10 + num2;


     cout << 5/10  << endl;

     cout << 5.0/10.0 << endl;

     cout << endl;
     return 0;

}