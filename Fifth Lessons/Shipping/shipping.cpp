/*
Shipping cost calculator:

Ask the user for package dimension in inches
legth, width, height - these should be integers

All dimensions must be 10 inches or less or we cannot ship it.

Base cost: $2.50
If package volume is greater than 100 cubic inches there is a 10% surcharge
If package volume is greater than 500 cubic inches there is a 20% surcharge

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

int length {}, width {}, height {};
double base_cost {2.50};

const int teir1_threshold {100}; //volume
const int teir2_threshold {500}; //volume

int max_dimension_length {10}; //inches

double teir1_surcharge {0.10}; //10% extra
double teir2_surcharge {0.20}; //20% extra

//All dimensions must be 10 inches or less

int package_volume {};

cout << "Welcome to the package cost calculator." << endl;
cout << "Enter length, width, and height, of the package seperated by spaces: ";
cin >> length >> width >> height;

if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length){
    cout << "Sorry, package rejected - your package is too big." << endl;
}else {
    double package_cost {};
    package_volume = length * width * height;
    package_cost = base_cost;

    if (package_volume > teir2_threshold) {
        package_cost += package_cost * teir2_surcharge;
        cout << "Adding teir 2 surcharge." << endl;
    }else if (package_volume > teir1_threshold) {
        package_cost += package_cost * teir1_surcharge;
        cout << "Adding teir 1 surcharge." << endl;
    }
    cout << fixed << setprecision(2); //forces the double only display the specified decimal places
    cout << "the volume of your package is: " << package_volume << endl;
    cout << "The cost to ship this package is: $ " << package_cost << endl;

}


cout << endl;


    cout << endl;
    return 0;
}