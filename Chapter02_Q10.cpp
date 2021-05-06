
#include <iostream>
using namespace std;

int main()
{
    const int percent = 80; //declaring constant
    double replacementCost, minInsurance, valueOne; //declaring variables

    cout << "This program calculates the minimum amount "; //explaining program
    cout << "of insurance you should buy for your property.";
    cout << endl << endl;

    cout << "Please enter the replacement cost of your building. "; //asking for user input
    cin >> replacementCost; //input is taken and assigned to variable
    cout << endl << endl;

    valueOne = percent * replacementCost;//processing data
    minInsurance = valueOne / 100;

    cout << "The minimum amount of insurance you should buy is";
    cout << " $ " << minInsurance; //output

    return 0;
}