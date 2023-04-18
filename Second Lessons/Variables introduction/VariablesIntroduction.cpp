
/* My Notes: So with this lesson I will be learning about Variables and Constants, expressions, and a few basic operators, how to set them up, and use them.

 In C++ variables have a type such as Integer, real number, string, Person, Account this is used to tell the compiler what data is valid for the variable.
Variables MUST be Declared before they are used in C++, because the value may change as the program runs.

When Declaring a variable it must follow this pattern "VariableType VariableName;"
Types:
Int: Whole Number I.e 6
Double: Floating point number I.e 10.9
String: A Sequence of Characters I.e "Stark"

This is an Object Oriented programming Language which allows us to make our own types. As long as we use the same basic Syntax.

When naming the Variables:
 - Names can contain; letters, numbers, and underscores

 - Must begin with a letter or underscore.
   - Cannot begin with a number

 - Cannot use any keywords reserved by C++

 - Cannot redeclare a name in the same scope.
   - C++ IS CASE SENSITIVE.


Be consistent with your naming conventions and avoid beginning names with an underscore.

Use meaningful names: not tool long or short

Never use variables before initializing them

Declare variables close to when you need them in your code.

int age = 21; is a c-like initialization

int age (21); is a constructor initialization

int age {21}; is the C++11 list initialization syntax


Notes from Leo: there are some cheeky things you can do when writing classes
you can actually override basic opperators in c++ like "=" "==" "+" and whatnot
to CREATE custom functionality when adding, setting, or equating your custom classes
the biggest part of c++ is memory management, when you work at a big company and they have tons of libraries and whatever you end up like... not doing any of your own memory management anymore
cause when writing libraries responsibly they all do their allocation and deallocation of memory intenal to their own functions
so when you call them you get to not care ever
but learning how it works is important
(that's where memory leaks come from btw)
(when memory is allocated but never deallocated for some reason)
(so the program still hoards that memory from the OS.... but your code doesn't have access to it anymore)
(which over time crashes the program)


Global Variables are defined outside of the functions or the Main. Local and global variables can have the same name, when the program runs it will check THE LOCAL variable first. if a Local instance
of the variable does not exist it will default to the global value.
*/



#include <iostream>

using namespace std;

// This will calculate the area of a room in square feet

int main () {


    cout << "Enter the width of the room:";
    int room_width {0};
    cin >> room_width;

    cout << "Enter the length of the room:";
    int room_length {0};
    cin >> room_length;


    cout << "The area of the room is " << room_width * room_length << " square feet" << endl;

    return 0;
}