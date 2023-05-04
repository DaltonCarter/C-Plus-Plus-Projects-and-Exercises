/*
My Notes:

The Switch Statement:

These must be constants or literals, and they must also be enumeration or integral type (This includes the control expression)

break statements are optional, but it is good practice to include them at all times, UNLESS there is a compelling reason not to.

the code for the case statement will run until it hits a break.


    switch (integer_control_expr) {
        case expression_1: statement_1; break;
        case expression_2: statement_2; break;
        case expression_3: statement_3; break;
        . . .
        case expression_n: statement_n; break;
        default: statement_default;
    }

The default will execute if NON of the cases trigger

switch (selection) {
    case '1': cout << "1 selected";
        break;
    case '2': cout << "2 selected";
        break;
    case '3':
    case '4': cout << "3 or 4 selected";
        break;
    default: cout << "1, 2, 3, 4 NOT selected!";
}

in the event that you need to declare variables in a case statement you will need to include the {} for a block.

The default is optional, but again it is best to include it.


Fall-through example:

    switch (selection) {

        case '1': cout << "1 selected";

        case '2': cout << "2 selected";

        case '3': cout << "3 selected";

        case '4': cout << "4 selected";
                  break;
        default: cout << "1, 2, 3, 4 NOT selected!";          

    }

    Like this: it will exectute ALL of the code until it hits a break statement.

    if you need to use this method MAKE SURE YOU DOCUMENT IT and make it know that it was deliberate, so that who ever comes next knows.


    With an Enumeration:

        enum Color {
            red, green, blue
        };

        Color screen_color {green};

        switch (screen_color) {
            case red: cout << "red"; break;

            case green: cout << "green"; break;

            case blue: cout << "blue"; break;

            default: cout << "Should never execute.";
        }


Review:

- The control expression must evaluate to a integer type

- The case exprressions must be constants or literal expressions that evaluate to integer or integers literals

- Once a match occures all following case sections will execute until a break is reached to complete the switch

Best Practice: provide a break for each case
Best Practice: Default is optional, but should be handled ANYWAY


*/

//Ask the user what grade they expect on the exam, and tell them what score they will need to get.

#include <iostream>

using namespace std;

int main() {

    char letter_grade {};

    cout << "enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch (letter_grade) {
        case 'a':
        case 'A':
            cout << "You will need a 90 or above, study hard!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You will need a 80 - 89 for a B, go study!" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You will need a 70 - 79 for a C." << endl;
            break;
        case 'd':
        case 'D':
            cout << "You may want to consider a higher grade, all you need is 60 - 69" << endl;
            break;
        case 'f':
        case 'F':
            {
                char confirm {};
                cout << "Are you sure (Y/N)? ";
                cin >> confirm;

                if (confirm == 'y' || confirm == 'Y')
                    cout << "OK, I guess you didn't study..." << endl;
                else if (confirm == 'n' || confirm == 'N')
                    cout << "Good, go study." << endl;
                else
                    cout << "Go construct additional Pylons, fool..." << endl;
                break;
            }
            
        default:
            cout << "Sorry, that is not a valid grade." << endl;
    }

    cout << endl;
    return 0;
}