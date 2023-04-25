/*
My Notes:
Testing for equality:

the == and != operators

compares the values of 2 expressions
evaluates to a boolean (true or false, 1 or 0)
commonly used in flow control statements

expr1 == expr2

expr1 != expr2

100 == 200

num1 != num2

bool result {false};

result = (100 == 50 + 50);

result = (num1 != num2) << endl;

cout << (num1 == num2) << endl; 0 or 1
cout << std::boolalpha;
cout << (num1 == num2) << endl; true or false
cout << std::noboolalpha;

*/

#include <iostream>

using namespace std;

int main() {

bool equal_result {false};
bool not_equal_result {false};

// int num1 {}, num2 {};

cout << boolalpha;      //will display true or false instead of 1 or 0 on booleans.

// cout << "enter two numbers seperated by a space: ";
// cin >> num1 >> num2;
// equal_result = (num1 == num2);
// not_equal_result = (num1 != num2);
// cout << "Comparison result (equals): " << equal_result << endl;
// cout << "Comparison result (not equals): " << not_equal_result << endl;



// char char1 {}, char2 {};
// cout << "Enter two letters seperated by a space: ";
// cin >> char1 >> char2;
// equal_result = (char1 == char2);
// not_equal_result = (char1 != char2);
// cout << "Comparison result (equals): " << equal_result << endl;
// cout << "Comparison result (not equals): " << not_equal_result << endl;



// double double1 {}, double2 {};
// cout << "Enter two doubles (I.E: 1.5) seperated by a space: ";
// cin >> double1 >> double2;
// equal_result = (double1 == double2);
// not_equal_result = (double1 != double2);
// cout << "Comparison result (equals): " << equal_result << endl;
// cout << "Comparison result (not equals): " << not_equal_result << endl;


double double1 {};
int num1 {};
cout << "Enter 1 number and 1 double (I.E: 1.5) seperated by a space: ";
cin >> num1 >> double1;
equal_result = (num1 == double1);
not_equal_result = (num1 != double1);
cout << "Comparison result (equals): " << equal_result << endl;
cout << "Comparison result (not equals): " << not_equal_result << endl;

    cout << endl;
    return 0;
}