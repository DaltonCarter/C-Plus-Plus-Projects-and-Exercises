/*
Write a C++ program as follows;

Declare 2 empty vectors of integers named vector1 and vector2

add 10 and 20 to vector 1 dynamically using push_back
display the elements in vector one using the .at() method as well as it's size using the .size() method

add 100 and 200 to vector 2 using push_back
and display them the same as you did for vector1

Declare an empty 2D vector called vector_2D
remember that a 2D vector is a vecto of vector <int>


add vector1 to vector_2D using push_back
add vector2 to vector_2D using push_back

display the elements in vector_2D using the .at() method

change vector1.at(0) to 1000

Display vector_2D again

display the elements in vector1

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "\nThe values of Vector1 are: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "\nThe size of vector1 is: " << vector1.size() << " entries." << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nThe values of Vector2 are: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "\nThe size of vector2 is: " << vector2.size() << " entries." << endl;

    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "\nThe elements in vector_2d are:" << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    cout << "\nThe size of vector_2d is:" << vector_2d.size() << " elements." << endl;

    vector1.at(0) = 1000;

    cout << "\nThe elements in vector_2d are:" << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

 cout << "\nThe values of Vector1 are: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

//Not sure what i expected to happen though the obvious would be that the value would change in both.
//I think what happened is that when you added Vector1 to vector_2d it COPIED vector1 into the 2d vector, 
//so when you changed the value of the first entry in Vector1 it only changed the source NOT the copy.


    return 0;
}