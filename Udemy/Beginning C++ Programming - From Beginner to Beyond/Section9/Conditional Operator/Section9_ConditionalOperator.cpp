// Sectioon 9
// Conditional Operator

#include <iostream>
using namespace std;

int main() {

    // int num{};

    // cout << "Enter an integer: " << endl;
    // cin >> num;

    // // if else
    // if (num % 2 == 0)
    //     cout << num << " is even" << endl;
    // else
    //     cout << num << " is odd" << endl;

    // //Conditional Operator
    // cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;

    int num1{}, num2{};

    cout << "Enter two integers seperated by a space: ";
    cin >> num1 >> num2;

    if (num1 != num2) {
	    cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
	    cout << "Smallest: " << ((num1 > num2) ? num2 : num1) << endl;
    } else {
	    cout << "The numbers are the same. " << endl;
    }

}