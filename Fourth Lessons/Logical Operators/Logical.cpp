/*
My Notes:

Logical operators:

Not (!)     is negation
And(&&)     is logical and
Or(||)      is logical or

Not(!):

a                not a (!a)
true             false
false            true


And(&&):

a                b                a and b (a && b)
true            true               true
true            false              false
false           true               false
false           false              false


Or (||):

a                b                a or b (a || b)
true            true               true
true            false              true
false           true               true
false           false              false

Precedence:

Not takes precedence over and

and takes precedence over or

NOT is a unary operator

and & or are binary operators


Examples:

num1 >= 10 && num1 < 20
num1 <= 10 || num1 > 20

!is_raining && temperature > 32.0

is_raining || is_snowing

temperature > 100 && is_humid || is_raining



Short-Circuit Evaluation:

When evaluating a logical expression C++ stops as soon as the result is known


expr1 && expr2 && expr3
expr1 && expr2 && expr3
*/

#include <iostream>

using namespace std;

int main() {
    int num {};
    const int lower {10};
    const int upper {20};

cout << boolalpha;

//Determine if an entered integer is between two other integers
//assume lower < upper

cout << "Enter an number - the bounds are " << lower << " and " << upper << ": ";
cin >> num;

bool within_bounds {false};

within_bounds = (num > lower && num < upper);
cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;


//Determine if an entered number is outside two other numbers
//assume lower < upper

cout << "Enter an number - the bounds are " << lower << " and " << upper << ": ";
cin >> num;

bool outside_bounds {false};
outside_bounds = (num < lower || num > upper);
cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;

//Determine if an entered number is exactly on the boundry of two other numbers
//assume lower < upper

cout << "Enter an number - the bounds are " << lower << " and " << upper << ": ";
cin >> num;

bool outside_bounds {false};
outside_bounds = (num == lower || num == upper);
cout << num << " is on one of the bounds which are  " << lower << " and " << upper << ": " << outside_bounds << endl;


//Determine if you need to wear a coat based on temperature and wind speed.
bool wear_coat {false};
double temperature {};
int wind_speed {};

const int wind_speed_for_coat {25};     //Wind over this value requires a coat
const double temperature_for_coat {45}; // temperature below this value requires a coat


//Require a coat if either the wind is too high or the temperature is too low.

cout << "\nEnter the current temperature in (F): ";
cin >> temperature;
cout << "Enter windspeed in (mph): ";
cin >> wind_speed;

wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
cout << "Do you need to wear a coat using OR? " << wear_coat << endl;


//Require a coat if BOTH the windspeed is high and teperature is too low
wear_coat = (temperature < temperature_for_coat & wind_speed > wind_speed_for_coat);
cout << "Do you need to wear a coat using AND? " << wear_coat << endl;



    cout << endl;
    return 0;
}


/*
My Notes:

Compound Operators:

You use these immediately following an =.

Operator          example              Meaning
+=                lhs += rhs            lhs = lhs + rhs;
-=                lhs -= rhs            lhs = lhs - rhs;
*=                lhs *= rhs            lhs = lhs * rhs;
/=                lhs /= rhs            lhs = lhs / rhs;
%=                lhs %= rhs            lhs = lhs % rhs;
vvvvvvvvvvvvvvvv Those are bit wise operators vvvvvvvvvvvvvvvvvvvvvvvv
>>=                lhs >>= rhs            lhs = lhs >> rhs;         
<<=                lhs <<= rhs            lhs = lhs << rhs;
&=                lhs &= rhs            lhs = lhs & rhs;
^=                lhs ^= rhs            lhs = lhs ^ rhs;
|=                lhs |= rhs            lhs = lhs | rhs;



Operator Precedence:
This is not a complete list
Operators on higher rows have higher precedence


operator                                    associativity
[] -> . ()                                     left to right
++ -- not -(unary) *(de-ref) & size_of         right to left
* / %                                          left to right
+ -                                            left to right
<< >>                                          left to right
< <= > >=                                      left to right
== !=                                          left to right
&                                              left to right
^                                              left to right
|                                              left to right
&&                                             left to right
||                                             left to right
= op= ?:                                       right to left



What is associativity?

use precedence rules when adjacent operators are different

expr1 op1 expr2 op2 expr3 // precedence

use associativity rules when adjacent operators have the same precedence

use parenthesis to retr5f6gy4demove ANY doubt



*/