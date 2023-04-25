/*
expr1 OP expr2

operator                meaning
>                       Greater than
>=                      Greater than or equal to
<                       Less than
<=                      less than or equal to
<=>                     three way comparison (C++20)


*/


#include <iostream>

using namespace std;

int main() {

int num1 {}, num2 {};

cout << boolalpha;
cout << "Enter 2 numbers seperated by a space: ";
cin >> num1 >> num2;

cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;




// const int lower {10};
// const int upper {20};

// cout << "\nEnter a number that is greater than " << lower << ": ";
// cin >> num1;
// cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;

// cout << "\nEnter a number that is less than or equal to " << upper << ": ";
// cin >> num1;
// cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;


    cout << endl;
    return 0;
}