/*
My Notes:

A vector is a dynamic array, and will give you the flexibility you need to account for an unknown amount of info.

They are containers in the C++ standard template library

it is an array that can grow or shrink in size at execution time

provides similar semantics and syntax as arrays

very effecient

can provide bounds checking

can use a lot of cool functions like sort, reverse, erase, find, and more.


Declaring a vector:

#include <vector> this is a library so we do have to include it in order for it to work.

using namespace std; because this is apart of the standard, you can also use the std::vector if you're feeling especially typey.


Syntax:
vector <char> vowels

vector <int> test_scores

Vectors with numbers will automatically be set to 0
and you can tell it how many indexs to set up "(5)" as an example

Vectors can be a copy of an array or a copy of another vector



The syntax for accessing elements is EXACTLY the same as arrays.
Starts at 0 and ends at -1

The elements can also be accessed by using the following syntax:   test_scores.at(0) .at is a method

you can change the values using 
test_scores.at(1); for cin
 OR 
 test_scores.at(1) = 90; 
 to change it directly


push_back(element) is a method used to dynamically add elements when you reach the end of the original length value.
when adding the elements must all be the same so you STILL cannot add a string value to a vector full of integers.

The vector will automatically allocate the required space and memory.

if you are out of bounds:

Arrays never check for this.
Many vector methods provide bounds checking
And exception and error message is generated

*/


#include <iostream>
#include <vector> //You must have this to use vectors.

using namespace std;

int main() {

// vector <char> vowels;  //<--empty
// vector <char> vowels (5); // 5 entries initialized to 0
vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

cout << vowels[0] << endl;
cout << vowels[4] << endl;

// vector <int> test_scores(3); // 3 elements initialized at 0
// vector <int> test_scores(3, 100); // 3 elements initialized at 100

vector <int> test_scores {100, 98, 89};

cout << "\nTest scores using array syntax:" << endl;
cout << test_scores[0] << endl;
cout << test_scores[1] << endl;
cout << test_scores[2] << endl;

cout << "\nTest scores using vector syntax:" << endl;
cout << test_scores.at(0) << endl;
cout << test_scores.at(1) << endl;
cout << test_scores.at(2) << endl;
cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl; //.size() is another vector method and it will tell you how many indexs are in the vector.

cout << "\n enter 3 test scores:";
cin >> test_scores.at(0);
cin >> test_scores.at(1);
cin >> test_scores.at(2);

cout << "\nUpdated test scores: " << endl;
cout << test_scores.at(0) << endl;
cout << test_scores.at(1) << endl;
cout << test_scores.at(2) << endl;

cout << "\nEnter a test score to add to the vector: ";

int score_to_add {0};
cin >> score_to_add;

test_scores.push_back(score_to_add);

cout << "\nEnter one more test score to add to the vector: ";

cin >> score_to_add;

test_scores.push_back(score_to_add);

cout << "\n Test scores are now: " << endl;

cout << test_scores.at(0) << endl;
cout << test_scores.at(1) << endl;
cout << test_scores.at(2) << endl;
cout << test_scores.at(3) << endl;
cout << test_scores.at(4) << endl;

cout << "\nThere are now " << test_scores.size() << " scores in the vector." << endl;

// cout << "This should cause an exception!!!" << test_scores.at(10);

//Example of a 2D vector:

vector <vector<int>> movie_ratings
{
    {1, 2, 3, 4},
    {1, 2, 4, 4},
    {1, 3, 4, 5}
};

cout << "\nHere are the movie ratings for reviewer #1 using array syntax:" << endl;
cout << movie_ratings[0][0] << endl;
cout << movie_ratings[0][1] << endl;
cout << movie_ratings[0][2] << endl;
cout << movie_ratings[0][3] << endl;

cout << "\nHere are the movie ratings for reviewer #1 using vector syntax:" << endl;
cout << movie_ratings.at(0).at(0) << endl;
cout << movie_ratings.at(0).at(1) << endl;
cout << movie_ratings.at(0).at(2) << endl;
cout << movie_ratings.at(0).at(3) << endl;

cout << endl;
return 0;

}