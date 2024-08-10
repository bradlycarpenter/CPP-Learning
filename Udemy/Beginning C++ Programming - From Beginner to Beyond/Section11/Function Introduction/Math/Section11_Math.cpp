// Section11
// Math

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num{};
    cout << "Enter a number(double)" << endl;
    cin >> num;

    cout << "The square root of " << num << " is " << sqrt(num) << endl;
    cout << "The cubed root of " << num << " is " << cbrt(num) << endl;

    cout << "The sine of " << num << " is " << sin(num) << endl;
    cout << "The cosine of " << num << " is " << cos(num) << endl;

    cout << "The ceiling of " << num << " is " << ceil(num) << endl;
    cout << "The floor of " << num << " is " << floor(num) << endl;
    cout << num << " rounded up is: " << round(num) << endl;

    double power{};
    cout << "Enter a power to raise " << num << " to: "<< endl;
    cin >> power;
    cout << num << " raised to the " << power << " power is: " << pow(num,power);
}