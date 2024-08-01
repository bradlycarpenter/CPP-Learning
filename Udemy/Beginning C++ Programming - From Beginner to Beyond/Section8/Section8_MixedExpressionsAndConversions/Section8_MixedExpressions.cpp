#include <iostream>
using namespace std;

int main(){

    int total{};
    int num1{}, num2{}, num3{};
    const int COUNT{3};

    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average{0.0};

    average = static_cast<double>(total) / COUNT;

    cout << "The 3 number were: " << num1 << "," << num2 << "," << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average is: " << average << endl;

}