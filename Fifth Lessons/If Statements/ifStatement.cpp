/*
My Notes:

If (Expression)
    statement;

    if the expression is true execute the statement

    if the expresion is false skip the statement.


Example:
    if (num > 10) {
        ++num;
        cout << "and display this too.";
    }

Block Statement:
{

    (//) Variable Declarations
    statement1;
    statement2;
    .  .  .

}

Creates a block of code by including more than one statement in code block {}
Blocks can also contain variable declarations
these variables are visible only in the block - local scope


*/

#include <iostream>

using namespace std;


//Using a basic if statement:
// int main() {

// int num {};
// const int min {10};
// const int max {100};

// cout << "Enter an number between " << min << " and " << max << ": ";
// cin >> num;

// if(num >= min){
//     cout << "\n==========================If statement 1 ======================" << endl;
//     cout << num << " is greater than or equal to " << min << endl;

//     int diff {num - min};
//     cout << num << " is " << diff << " greater than " << min << endl;
// }

// if(num <= max) {
//     cout << "\n==========================If statement 2 ======================" << endl;
//     cout << num << " is less than or equal to " << max << endl;

//     int diff {max - num};
//     cout << num << " is " << diff << " less than " << max << endl;
// }

// if(num >= min && num <= max) {
//     cout << "\n==========================If statement 3 ======================" << endl;
//     cout << num << " is in range." << endl;
//     cout << "This means statements 1 and 2 must also display!!!" << endl;
// }

// if(num == min || num == max) {
// cout << "\n==========================If statement 4 ======================" << endl;
// cout << num << " is right on a boundry." << endl;
// cout << "This means all 4 statements display." << endl;
// }

//     cout << endl;
//     return 0;
// }

/*
My Notes:

If-else:
if (expres)
    statement1;
else
    statement2;

if the expression is true run statement 1

if it is false run statement 2

these ALSO can use block code


Example of basic:

if (num > 10)
    cout << "Num is greater than 10.";
else
    cout << "num is NOT greater than 10.";

if (health < 100 && heal_player)
        health = 100;
else
    ++health;

else-if:

if ( num > 90)
    cout << "A";
else if (num > 80)
    cout << "B";
else if (num > 70)
    cout << "C";    
else if (num > 60)
    cout << "D";
else
    cout << "F";

*/

//Using an else branch:

// int main () {
//     int num {};
//     const int target {10};

// cout << "Enter an number and I will compare it to " << target << ": ";
// cin >> num;

// if (num >= target) {
// cout << "\n===========================================" << endl;
// cout << num << " is greater than or equal to " << target << endl;
// int diff {num - target};
// cout << num << " is " << diff << " greater than " << target << endl;

// } else {
// cout << "\n===========================================" << endl;
// cout << num << " is less than or equal to " << target << endl;
// int diff {target - num};
// cout << num << " is " << diff << " less than " << target << endl;
// }

//     cout << endl;
//     return 0;
// }



/*
My Notes:

Nested if statements:
if (expr1)
    if(expr2)
        statement1;
    else    
        statement2;

this is an if statement contained inside of another if statement.

it allows for the testing of multiple conditions

the else will belong to the closest if.


*/

//Grades code Along:

int main() {

int score {};
cout << "Enter your score on the exam (0 - 100): ";
cin >> score;
char letter_grade {};

if (score >= 0 && score <= 100) {

    if (score >= 90) {
        letter_grade = 'A';
    }else if (score >= 80){
        letter_grade = 'B';
    }else if (score >= 70) {
        letter_grade = 'C';
    }else if (score >= 60) {
        letter_grade = 'D';
    }else {
        letter_grade = 'F';
    }

    cout << "Your grade is: " << letter_grade << endl;
    
    if (letter_grade == 'F'){
        cout << "Sorry, you must repeat this class." << endl;
    }else {
        cout << "Congrats!! You passed!" << endl;
    }

}else {
    cout << "Sorry, " << score << " is not in range." << endl;
}




    cout << endl;
    return 0;
}