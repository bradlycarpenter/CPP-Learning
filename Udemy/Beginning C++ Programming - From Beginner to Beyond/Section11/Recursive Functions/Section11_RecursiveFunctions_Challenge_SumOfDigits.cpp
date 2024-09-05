#include <iostream>
#include <string>

using namespace std;

int sum_of_digits(int n);

int sum_of_digits(int n){
    string numbers = to_string(n);
    size_t total{0};
    for (char c:numbers){
        cout << c << endl;
        total += c;
        cout << total << endl;
    }
    return total;
}

int main(){
    cout << "Enter a number: ";
    int number{};
    cin >> number;
    cout << sum_of_digits(number) << endl;
}