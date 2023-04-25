/*

Increment operator is ++
Decrement operator is --

increments or decrements it's operand by 1
can be used with integers, floating point types, and pointers

prefix ++num
postfix num++

DO NOT OVERUSE THIS OPERATOR!!!!
ALERT: NEVER USE IT TWICE FOR THE SAME VARIABLE IN THE SAME STATEMENT!

*/

#include <iostream>

using namespace std;

int main() {

int counter {10};
int result {0};


//Example 1 simple increment:

cout << "Counter: " << counter << endl;

counter = counter + 1;
cout << "Counter: " << counter << endl;

counter++;
cout << "Counter: " << counter << endl;

++counter;
cout << "Counter: " << counter << endl;



//Example 2 Preincrement:

counter = 10;
result = 0;

cout << "Counter: " << counter << endl;

result = ++counter; //Note the preincrement
cout << "Counter: " << counter << endl;
cout << "Result: " << result << endl;


//Example 3 post-increment:

counter = 10;
result = 0;

cout << "Counter: " << counter << endl;

result = counter++; //note the post increment
cout << "Counter: " << counter << endl;
cout << "Result: " << result << endl;

//Example 4:

counter = 10;
result = 0;

cout << "Counter: " << counter << endl;

result = ++counter +10;

cout << "Counter: " << counter << endl;
cout << "Result: " << result << endl;

//Example 5:

counter = 10;
result = 0;

cout << "Counter: " << counter << endl;

result = counter++ + 10;

cout << "Counter: " << counter << endl;
cout << "Result: " << result << endl;



    cout << endl;
    return 0;
}