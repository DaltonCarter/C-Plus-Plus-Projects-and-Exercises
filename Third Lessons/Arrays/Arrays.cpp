/*
My notes:

Arrays are a compound data type or data structure.
All elements are of the same type.
each element can be accessed directly.

Arrays are;
Fixed in size
elements are all the same type
stored contiguously in memory
individual elements can be accessed by their position or index

first element is index 0
last element is at index size -1

No checking to see if you are out of bounds <--- it is up to you to make sure your arrays stay in their boundries.

always initialize arrays
very efficient
and iteration is often used to process.


Declaring and initializing arrays:

Syntax: Element_Type Array_Name [constant number of elements] {Initial list}

You can leave the umber of elements blank Like in JavaScript



Accessing the array elements:

Syntax: Array_name [index number] <-----this is also identical to JavaScript



How does it work?:

The name of the array represents the location of the first element in the array (index 0)

the [index] represents the offset from the beginning of the array

C++ simply performs a calculation to find the correct element

remember- no bounds checking!


Multidimensional arrays:

Syntax: type  name [Dim 1 size] [Dim2 size] <-- this is a 2 dimensional array.
Some compilers do place limits on how many dimensions, but the limit is usually very high.

Dim 1 is ROWS, and Dim 2 is Columns


When initializing:
 {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
};

Multidimensional arrays have the same characteristics as a standard array.


*/


#include <iostream>

using namespace std;

int main() {

    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    double hi_temps [] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
    hi_temps[0] = 100.7;
    cout << "The first hi temperature is now: " << hi_temps[0] << endl;

    int test_scores [5];

    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;


    cout << "\nEnter 5 test Scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];


    cout << "\nThe updated array is: " << endl;
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "\nNotice what the value of the array name is: " << test_scores << endl; //This will display a hex value for the memory location of the array. The name is just a shortcut to it.

    cout << endl;

    return 0;

}