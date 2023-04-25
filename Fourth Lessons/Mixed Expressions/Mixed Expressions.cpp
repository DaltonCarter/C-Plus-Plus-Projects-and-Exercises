/*
My Notes:

Mixed Type Expressions:
C++ operations occur on same type operands
if operands are of different types, C++ will convert one
IMPORTANT! Since it could affect calculation results
C++ will attempt to automatically convert types(coercion)
if it can't a compiler error will occur

Conversions:
Higher vs lower types are based on the size of the values the type can hold
    - long double, double, float, unsigned long, long unsigned, int, int short, and char types are always converted into int

Type Coercion: conversion of one operand to another data type
Promotion: conversion to a higher type
    -Used in mathmatical expressions
Demotion: conversion to a lower type
    -used with assignment to lower type


     Example:

     lower op higher     the lower is promoted to a higher
     2 * 5.2
     2 is promoted to 2.0

     lower = higher       the higher is demoted to a lower
     int num {0};
     num = 100.2;


     Explicit Type Casting - static_cast<type>

     int total amount {100};
     int total_number {8};
     double average {0.0};

     average = total_amount / total_number;
     cout << average << endl;                      This will display 12

     average = static_cast<double>(total_amount) / total_number;
     cout << average << endl;                                          this will display 12.5



Coding Example:

Ask the user to enter 3 integers
calculate the sum of the integers then
calculate the average of the 3 integers

display the 3 integers entered
the sum of the 3 integers and
the average of the 3 integers
*/

#include <Iostream>

using namespace std;

int main() {

int total {};
int num1 {}, num2 {}, num3 {}; //Make sure to initialize each one when declaring this way.
const int count {3};

cout << "Please enter 3 numbers seperated by spaces: ";

cin >> num1 >> num2 >> num3;

total = num1 + num2 + num3;

double average {0.0};

average = static_cast<double>(total) / count; //<----- this checks that the value CAN be converted.
// average = (double)total/count; <----------this example is how the line above would appear in older C code

cout << "The three numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
cout << "The sum of those numbers is: " << total << endl;
cout << "The average of those numbers is: " << average << endl;


    cout << endl;
    return 0;
}