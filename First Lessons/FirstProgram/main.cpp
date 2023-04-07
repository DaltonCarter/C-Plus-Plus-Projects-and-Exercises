 
#include <iostream> //<------My Notes: This literally stands for input/Output stream, it is the library that enables the code to handle any I/O functionality. cout/cin will not work without this. 

int main() {

    int favorite_number;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Amazing! That is my favorite number too!" << std::endl;

    return 0;
}

//My Notes:The above is an example of a simple function, The int at the beginning is for error reporting, with 0 meaning everything executed successfully,
//it will also only accept number values since it stands for integer. 
//The structure is otherwise identical to a Java Script function. you have the function name "main", the Parentesis "()" for what I have to assume are 
//arguments/external input data, and then there are the curly braces which define the body of the function itself.
//cout is Console output anything you tell it to do will be whats displayed on the console for the user.
//cin is console input, and what this does is it will save any user input in the console to the defined variable.
//endl is End of Line which tells it that this is done and to move to a command line. it also gives me strong 1980s Tron vibes.
//the return 0 at the end is simply there to let the compiler know that everything excecuted successfully by returning code 0 to the int value
//at the top of the function, and terminating the process.