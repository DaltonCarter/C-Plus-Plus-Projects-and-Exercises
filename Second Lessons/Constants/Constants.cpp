/*
Constants are just like Variables...

EXCEPT!!!!!

Once their value is declared IT CANNOT BE CHANGED

In this regard it works alot like JS variables/constants.


Types of Constants:

Literal Constants

Declared Constatnts
    - const keyword

Constant Expressions
  -constexpr keyword

Enumerated Constants  
  -enum keyword

Defined Constants
  -#define



  Literals: the most obvious kind of constant used to express specific values:

  x = 12;
  y = 1.56;
  name = "Stark";
  middle_initial = 'J';

Integer Literal Constants:

12 - an integer
12U - an unsigned integer
12L - a long integer
12LL - a long long integer

Floating point literal constants:
12.1 - a double
12.1F - a float
12.1l - a long double


Character literal constants (escape codes)
\n new line
\r return
\t tab
\b backspace
\' single quote
\" double quote
\\ backslash



syntax for a constant:
const type name

DO NOT USE DEFINED CONSTANTS (#define) IN MODERN C++

*/



/*
Program Overview:

Frank's Carpet Cleaning Service
Charges $30 per room
Sales tax is 6%
Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:


    Estimate for carpet cleaning service:
    Number of rooms: 2
    Price per room: $30
    Cost $60
    Tax: $3.60
    =============================================================================
    total estimate: $63.60
    this estimate is valid for 30 days.


Lesson Pseudo Code:
    Prompt user to enter the number of rooms
    Display number of rooms
    Display price per room

    Display cost: (number of rooms * price per room)
    Display tax: (number of rooms * price per room * tax rate)
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
    Display estimate expiration time
*/


#include <iostream>

using namespace std;

int main() {

    cout << "Hello, welcome to Frank's Carpet Cleaning Service." << endl;

    cout << "\nHow many rooms would you like cleaned? ";

    int number_of_rooms {0};
    cin >> number_of_rooms;

    const double price_per_room {30.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; //days

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room * number_of_rooms << endl;
    cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax << endl;
    cout << "=================================================" << endl;
    cout << "Total estimate $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days." << endl;


    cout << endl;
    return 0;
}