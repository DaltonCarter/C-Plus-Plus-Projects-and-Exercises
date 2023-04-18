/*
My Notes:


Data Types:
Character Types
Integer Types
  - signed and unsigned
Floating Point Types
Boolean Type

Size and percision is often compiler-dependant
  - #include <climits>



Type Sizes:

Expressed in bits
The more bits, the more values that can be represented
The more bits the more storage required

Size in bits               Representable values
8                           256                         or 2^8
16                          65,536                      or 2^16
32                          4,294,967,296               or 2^32
64                          18, 446,744,073,709,551,615 or 2^64

Character Types
used to represent single characters
wider types are used to represent wide character sets

type name            size/percision
char                 exactly one Byte. at least 8 bits
char16_t             at least 16 bits  
char32_t             at least 32 bits
wchar_t              Can represent the largest avaliable character set


Integer Type:
used to represent whole numbers
Signed and unsigned versions

type name                   size/percision
Signed short int            At least 16 bits
Signed int                  At least 16 bits  
Signed long int             At least 32 bits
Signed long LONG int        At least 64 bits

type name                   size/percision
Unsigned short int          At least 16 bits
Unsigned int                At least 16 bits  
Unsigned long int           At least 32 bits
Unsigned long LONG int      At least 64 bits

By default all integers are signed.
Use unsigned for 0 or positive values, Unsigned keyword must be used


Floating point type:
used to represent non integer numbers
represented by mantissa and exponent (Scientific Notation)
Percision and size are compiler dependant

type name              size/percision                             typical range
Float                 /7decimal digits                            1.2 x 10^-38 to 3.4 x 10^38
Double                No less than float/ 15 decimal digits       2.2 x 10^-308 to 1.8 x 10^308
Long Double           No less than double/ 19 decimal digits      3.3 x 10^-4932 to 1.2 x 10^4932


Boolean type
Used for true and false
zero is false
non-zero is true

type name              size/percision
bool                 usually 8 bits: true or false(C++ keywords)

*/


//Examples:

#include <iostream>

using namespace std;

int main() {



//CHARACTER TYPE:
char middle_initial {'J'}; //single quotes are used for a single character. Double quotes define a string. if you use a double quote in a Char you will get an error.
cout << "My middle initial is " << middle_initial << endl;



//INTEGER TYPES:
unsigned short int exam_score {55}; //same as unsigned short exam_score {55}
cout << "May exam score was " << exam_score << endl;

int countries_represented {65};
cout << "There were " << countries_represented << "Countries represented in my meeting." << endl;

long people_in_florida {20610000};
cout << "There are about " << people_in_florida << " people in Florida." << endl;

//Using list initialization { } will help you catch overflow errors.

long long people_on_earth {7'600'000'000};
cout << "There are about " << people_on_earth << " people on earth." << endl;

long long distance_to_alpha_centauri {9'461'000'000'000};
cout << " the distance to Alpha Centauri is " << distance_to_alpha_centauri << " kilometers." << endl;



//FLOAT TYPES:

float car_payment {401.23};
cout << "My car payment is " << car_payment << " dollars." << endl;

double pi {3.14159};
cout << "PI is " << pi << endl;

long double large_amount {2.7e120};
cout << large_amount << " is a very big number." << endl;



//BOOLEAN TYPE:
bool game_over {false};
cout << "the value of game over is " << game_over << endl;



//OVERFLOW EXAMPLE:
short value1 {30000};
short value2 {1000};
short product {value1 * value2}; //in order to work this should probably be a long or long long.

cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;


return 0;

}