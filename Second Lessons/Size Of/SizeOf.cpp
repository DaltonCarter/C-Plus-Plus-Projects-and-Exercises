/*
My Notes:


The sizeof operator is used to determine the size in bytes of a type or variable, can also be used for compound types like arrays and objects.
 ex:
 sizeof (int)
 sizeof (double)
 sizeof (some_variable)
 sizeof some_variable


 <climits> and <cfloat> gives sizeof it's information.

 With climits provides information on integral types

and cfloat providing information on floating point types.

they also provide a lost of defined constants that allow us to determine the percision of these primitive types.

INT_MAX tells us the maximum amount we can store in an int
INT_MIN Tells us the minimum ammount we can store in an int
LONG_MAX tells us the maximum amount we can store in an long int
LONG_MIN Tells us the minimum ammount we can store in an long int
FLOAT_MAX Tells us the maximum ammount we can store in a float
FLOAT_MIN Tells us the minimum ammount we can store in a float
... ... ... ECT....

*/



#include <iostream>
#include <climits>

using namespace std;

int main() {

cout << "sizeof information" << endl;
cout << "========================" << endl;

cout << "char: " << sizeof(char) << " bytes." << endl;
cout << "int: " << sizeof(int) << " bytes." << endl;
cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
cout << "short: " << sizeof(short) << " bytes." << endl;
cout << "long: " << sizeof(long) << " bytes." << endl;
cout << "long long: " << sizeof(long long) << " bytes." << endl;

cout << "========================" << endl;

cout << "float: " << sizeof(float) << "bytes." << endl;
cout << "double: " << sizeof(double) << "bytes." << endl;
cout << "long double: " << sizeof(long double) << "bytes." << endl;


//Use values defined in <climits>
cout << "========================" << endl;

cout << "Minimum values: " << endl;
cout << "char: " << CHAR_MIN << endl;
cout << "int: " << INT_MIN << endl;
cout << "shot: " << SHRT_MIN << endl;
cout << "long: " << LONG_MIN << endl;
cout << "long long: " << LLONG_MIN << endl;

cout << "========================" << endl;


cout << "Maximum values: " << endl;
cout << "char: " << CHAR_MAX << endl;
cout << "int: " << INT_MAX << endl;
cout << "shot: " << SHRT_MAX << endl;
cout << "long: " << LONG_MAX << endl;
cout << "long long: " << LLONG_MAX << endl;

//sizeof can also be used with variable names
cout << "========================" << endl;

cout << "sizeof using variable names:" << endl;

int age {21};
cout << "age is " << sizeof(age) << " bytes" << endl;
//or
cout << "age is " << sizeof age << " bytes" << endl;

double wage {22.24};
cout << "wage is " << sizeof(wage) << " bytes." << endl;
//or
cout << "wage is " << sizeof wage << " bytes." << endl;

return 0;

}