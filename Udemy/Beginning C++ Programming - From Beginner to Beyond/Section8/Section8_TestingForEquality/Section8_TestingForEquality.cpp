#include <iostream>
using namespace std;

int main()
{
    bool equal_result{false};
    bool not_equal_result{false};

    int num1{}, num2{};

    cout << boolalpha;

    // Integers
    // cout << "Enter two integers seperated by a space: ";
    // cin >> num1 >> num2;
    // equal_result = (num1 == num2);
    // not_equal_result = (num1 != num2);
    // cout << "Comparison result (equals): "  << equal_result << endl;
    // cout << "Comparison result (not_equals): " << not_equal_result << endl;

    // Characters
    //  cout << "Enter two characters seperated by a space: ";
    //  char char1{}, char2{};
    //  cin >> char1 >> char2;
    //  equal_result = (char1 == char2);
    //  not_equal_result = (char1 != char2);
    //  cout << "Comparison result (equals): "  << equal_result << endl;
    //  cout << "Comparison result (not_equals): " << not_equal_result << endl;

    // Doubles
    cout << "Enter two doubles seperated by a space: ";
    double double1{}, double2{};
    cin >> double1 >> double2;
    equal_result = (double1 == double2);
    // not_equal_result = (double1 != double2);
    cout << "Comparison result (equals): " << equal_result << endl;
    // cout << "Comparison result (not_equals): " << not_equal_result << endl;

    // Integer and Doubke
    // cout << "Enter an integer and a double seperated by a space: ";
    // double double1{};
    // cin >> num1 >> double1;
    // equal_result = (num1 == double1);
    // not_equal_result = (num1 != double1);
    // cout << "Comparison result (equals): " << equal_result << endl;
    // cout << "Comparison result (not_equals): " << not_equal_result << endl;
}