# include <iostream>
using namespace std;

int main (){
    int num1{},num2{};

    cout << boolalpha;
    // cout << "Enter 2 integers seperated by space " << endl;
    // cin >> num1 >> num2;

    // cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
    // cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
    // cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
    // cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;

    const int LOWER{10};
    const int UPPER{20};

    cout << "\nEnter an integer that is greater than " << LOWER << " : ";
    cin >> num1;
    cout << "num1" << " > " << LOWER << " is " << (num1 > LOWER) << endl;

    cout << "\nEnter an integer that is less than or equal to " << UPPER << " : ";
    cin >> num2;
    cout << "num2" << " <= " << UPPER << " is " << (num2 <= UPPER) << endl;
}