#include <iostream>
using namespace std;

int main() {
char choice{};
cout << "What temperature would you like to convert? Type C for Celcius or F for Fahrenheit\n";
cin >> choice;

if (choice == 'C' || choice == 'c'){
    float temperature{0.0};
    cout << "What's the value of the temperature that needs to be converted?\n";
    cin >> temperature;
    cout << temperature << " degrees celcius is equivalent to " << temperature * 1.8 + 32 << " degrees fahrenheit" << endl;
    cout << "Nice";
    } 

if (choice == 'F' || choice == 'f'){
    float temperature{0.0};
    cout << "What's the value of the temperature that needs to be converted?\n";
    cin >> temperature;
    cout << temperature << " degrees celcius is equivalent to " << (temperature - 32) * 5 / 9  << " degrees celcius" << endl;
    } 
}