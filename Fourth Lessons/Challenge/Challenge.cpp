/*
For this program I will be using US dollars and cents

write a program that asks the user to enter the following:
An integer representing the number of cents

you may assume that the number of cents entered is greaterthan or equal to 0

the program should then display how to provide that change to the user.


in the US:
1 dollar is 100 cents
1 quarter is 25 cents
1 dime is 10 cents
1 nickle is 5 cents
1 penny is 1 cent

here is a sample run:

Enter an ammount in cents: 92

you can provide this cange as follows:
dollars: 0
quarters: 3
dimes: 1
nickles: 1
pennies: 2

feel free to use your own currency system
also think how you might solve the problem using the modulo operator


psedo code:

I'm weird and this rarely helps my thoughts because it makes me second guess when I shouldn't,
but lets give it a go....

We need to prompt the user to in put an amount in cents
then we need to save that amount to a variable

the we need to determine how to distribute the change by splitting the amount
into dollars, quarters, dimes, nickles, and pennies.

and then print the solution.

It seems to me a series of divisions is required
followed by reducing the value of cents appropriately for the next step


*/

#include <iostream>

using namespace std;

int main() {

const int dollar_value {100}, quarter_value {25}, dime_value {10}, nickle_value {5};

int cents {0};
cout << "Enter an amount in cents: ";
cin >> cents;


//This is WITHOUT Modulo:
int dollars {}, quarters {}, dimes {}, nickles {}, pennies {};

dollars = cents / dollar_value;
cents = cents - (dollars * dollar_value);

quarters = cents / quarter_value;
cents = cents - (quarters * quarter_value);


dimes = cents / dime_value;
cents = cents - (dimes * dime_value);


nickles = cents / nickle_value;
cents = cents - (nickles * nickle_value);

pennies = cents;


//WITH Modulo:
// int remainder {};

// dollars = cents / dollar_value;
// remainder = cents % dollar_value;

// quarters = remainder / quarter_value;
// remainder = remainder % quarter_value;

// dimes = remainder / dime_value;
// remainder = remainder % dime_value;

// nickles = remainder / nickle_value;
// remainder = remainder % nickle_value;

// pennies = remainder;


//Output:
cout << "\nYou can provide this cange as follows:" << endl;
cout << "Dollars: " << dollars << endl;
cout << "Quarters: " << quarters << endl;
cout << "Dimes: " << dimes << endl;
cout << "Nickles: " << nickles << endl;
cout << "Pennies: " << pennies << endl;








cout << endl;
return 0;
}


/*
Because I am too literal for my own good sometimes:

Notes from Leo:

Modulo is not an intuitive modifier, treat it more like the remainder modifier
if you are doing modulo 100 on like 564, you get 64 cause that is the extra.

So what you are doing is you divide 564 by 100, and you get 5 dollars cause integer round down
then you do modulo to simply get the pennies left over for the rest of the math
you effectively abuse the rounding to get you remainder
modulo serves to replace the cents line between opperations and that's pretty much it.

Unless the input is a reference or a pointer, you shouldn't be at risk of modifying it if 
its being passed into a function by default, all functions in c++ are passed in "by value"
meaning they make a copy of the value you gave it in the scope of the function
when the function goes out of scope (the last line is called and you return to your 
calling code) that value is lost, and the var passed in remains unchanged
so if you ever wanna do calculations like this conveniently and don't wanna ruin 
anything that matters, make a function for it!

the moment you start passing by pointer and reference (something you generally can't do 
accidentally and you will learn about it) then you need to be careful
and new practices need to be implemented to keep data safe.

*/